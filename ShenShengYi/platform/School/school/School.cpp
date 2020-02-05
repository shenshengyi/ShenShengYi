#include "pch.h"
#include "School.h"
#include "Student.h"
#include <glog/log_severity.h>
#include "DataSource.h"
#include "GenerateScore.h"
#include "Configuration.h"
#include "GenerateNum.h"
#include <algorithm>

namespace STU
{
	School* School::_School = nullptr;

	School* School::GetInstance(void) {
		if (nullptr == _School) {
			_School = new School;
			_School->init();
		}
		return _School;
	}

	void School::Release(void) {
		if (nullptr != _School) {
			delete _School;
		}
	}

	void School::init(void) {
		google::InitGoogleLogging("ShenShengYi");
		google::SetStderrLogging(2);
		FLAGS_log_dir = "H:\\ShenShengYi\\ShenShengYi\\ShenShengYi\\log\\";
	}

	School::School(void) {
		//dynamic_cast
	}

	School::~School(void) {
		Configuration::Release();
		for (auto student : _StudentList) {
			delete student;
		}
	}

	void School::AddStudent(bool isSort) {
		AddStudentName();
		AddStudentInformation();

		if (isSort) {
			SortByStudentToScore();
		}
	}

	void School::AddStudentName(void) {
		DataSource* dataSource = Configuration::GetInstance()->GetDataSource();
		if (nullptr != dataSource) {
			dataSource->AddStudent(_StudentList);
		}
	}

	namespace {
		void GenerateStudentInformation(Student* student, GenerateScore* generate, GenerateNum*generateNum) {
			if (nullptr == student || nullptr == generate) {
				return;
			}

			StudentInformation information = student->GetStudentInformation();
			information.SetNum(generateNum->GenerateStudentNum());
			information.SetClassNum(generateNum->GenerateClassNum());

			information.SetLanguage(generate->GenerateLanguage());
			information.SetMath(generate->GenerateMath());
			information.SetComprehensive(generate->GenerateComprehensive());
			information.SetEnglish(generate->GenerateEnglish());
			student->SetStudentInformation(information);
		}
	}

	void School::AddStudentInformation(void) {
		GenerateScore* generateScore = Configuration::GetInstance()->GetGenerate();
		GenerateNum* generateNum = Configuration::GetInstance()->GetGenerateNum();

		if (nullptr == generateScore || nullptr == generateNum) {
			return;
		}

		for (auto student : _StudentList) {
			GenerateStudentInformation(student, generateScore, generateNum);
		}
	}

	int School::GetStudentNum(void)const {
		DLOG(INFO) << "_StudentList size = " << _StudentList.size() << std::endl;
		return static_cast<int>(_StudentList.size());
	}

	Student** School::StudentIteratorBegin(void) {
		return _StudentList.begin();
	}

	Student** School::StudentIteratorEnd(void) {
		return _StudentList.end();
	}

	Student*const* School::StudentIteratorBegin(void)const {
		return _StudentList.cbegin();
	}

	Student* const* School::StudentIteratorEnd(void)const {
		return _StudentList.cend();
	}

	int School::GetClassNumber(void)const {
		GenerateNum* generateNum = Configuration::GetInstance()->GetGenerateNum();
		if (nullptr != generateNum) {
			return generateNum->GenerateClassNum();
		}
		return 0;
	}

	Student* School::FindStudentByNum(int Num)const {
		for (auto student : _StudentList) {
			if (student->GetStudentInformation().GetNum() == Num) {
				return student;
			}
		}
		return nullptr;
	}

	namespace {
		auto compare = [=](Student* left, Student* right)->bool {
			return left->GetStudentInformation().GetTotalScore() > right->GetStudentInformation().GetTotalScore();
		};
	}

	folly::fbvector<Student*> School::FindStudentByClassNum(int classNum)const {
		folly::fbvector<Student*> result;
		for (auto student : _StudentList) {
			if (student->GetStudentInformation().GetClassNum() == classNum) {
				result.emplace_back(student);
			}
		}

		std::sort(result.begin(), result.end(), compare);
		return result;
	}

	void School::SortByStudentToScore(void) {
		std::sort(_StudentList.begin(), _StudentList.end(), compare);
	}
}