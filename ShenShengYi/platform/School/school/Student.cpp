#include "pch.h"
#include "StudentImplement.h"

namespace STU
{
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