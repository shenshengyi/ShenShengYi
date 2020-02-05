#include "pch.h"
#include "StudentImplement.h"

namespace STU
{
	StudentInformation::StudentInformation(void)
		:_Name{""}
		, _Subject{Subject::Science}
		, _Num{0}
		, _Language{0}
		, _Math{0}
		, _Comprehensive{0}
		, _English{0}
	{
	}

	Student* Student::GenerateStudent(Subject subject) {
		if (Subject::Arts == subject) {
			return new ArtsStudent();
		}
		if (Subject::Science == subject) {
			return new ScienceStudent();
		}
		return nullptr;
	}
}