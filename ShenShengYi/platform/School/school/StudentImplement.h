#pragma once
#include "Student.h"

namespace STU
{
	class StudentImplement:public Student
	{
	public:
		StudentImplement(void);
		~StudentImplement(void);
		StudentInformation GetStudentInformation(void)const override;
		void SetStudentInformation(const StudentInformation& information)override;
	protected:
		StudentInformation	_StudentInformation;
	};

	class ArtsStudent :public StudentImplement {
	public:
		void DisplayStudent(void)const override;
	};

	class ScienceStudent :public StudentImplement {
	public:
		void DisplayStudent(void)const override;
	};
}
