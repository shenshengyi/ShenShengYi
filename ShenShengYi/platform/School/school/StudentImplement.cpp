#include "pch.h"
#include "StudentImplement.h"
#include <iostream>
using namespace std;

namespace STU
{
	StudentImplement::StudentImplement(void) {

	}

	StudentImplement::~StudentImplement(void) {

	}

	StudentInformation StudentImplement::GetStudentInformation(void)const {
		return _StudentInformation;
	}


	void ArtsStudent::DisplayStudent(void)const {
		cout << "�Ŀ���" << endl;
	}

	void ScienceStudent::DisplayStudent(void)const {
		cout << "�����" << endl;
	}
}
