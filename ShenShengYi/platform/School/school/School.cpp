#include "pch.h"
#include "School.h"
#include "Student.h"

namespace STU
{
	School::School(void) {
		//dynamic_cast
	}

	School::~School(void) {

	}

	void School::AddStudent(void) {
		for (int i = 0; i < 10; i++) {
			Subject subject;
			if (i % 2 == 0) {
				subject = Subject::Arts;
			}
			else {
				subject = Subject::Science;
			}
			_StudentList.emplace_back(Student::GenerateStudent(subject));
		}
	}

	int School::GetStudentNum(void)const {
		return _StudentList.size();
	}
}