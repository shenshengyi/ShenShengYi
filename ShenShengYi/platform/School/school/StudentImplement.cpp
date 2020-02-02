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
		cout << "文科生" << endl;
	}

	void ScienceStudent::DisplayStudent(void)const {
		cout << "理科生" << endl;
	}
}
