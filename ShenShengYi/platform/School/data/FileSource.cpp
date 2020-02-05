#include "pch.h"
#include "FileSource.h"
#include "Student.h"
#include <fstream>
#include <iostream>
using namespace std;

namespace STU
{
	FileSource::FileSource(const folly::fbstring& fileName)
		:_fileName{ fileName }
	{		
	}

	FileSource::~FileSource(void) {
		cout << "析构文件源" << endl;
	}

	void FileSource::AddStudent(folly::fbvector<Student*>& StudentList) {
		std::ifstream in(_fileName.c_str());
		if (!in) {
			return;
		}
		std::string name;
		while (std::getline(in, name)) {
			Student* student = Student::GenerateStudent(Subject::Science);
			StudentInformation information = student->GetStudentInformation();
			information.SetName(name);
			student->SetStudentInformation(information);

			StudentList.emplace_back(student);
		}

		cout << "student num = " << StudentList.size() << endl;
	}
}
