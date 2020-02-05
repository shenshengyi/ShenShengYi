#include "pch.h"
#include "School_Test.h"
#include <Student.h>
#include <iostream>
using namespace std;

void School_Test::SetUpTestCase(void) {
	
}

void School_Test::TearDownTestCase(void) {
}

void School_Test::SetUp() {
	_shool = STU::School::GetInstance();
}

void School_Test::TearDown() {
	STU::School::Release();
}

int add1(int a, int b) {
	return a + b;
}

TEST_F(School_Test, GetStudentNum) {
	_shool->AddStudent();
	int num = _shool->GetStudentNum();
	STU::Student** studentBegin = _shool->StudentIteratorBegin();
	STU::Student** studentEnd = _shool->StudentIteratorEnd();
	int i = 0;
	while (studentBegin != studentEnd) {
		if (nullptr != studentBegin) {
			cout << (*studentBegin)->GetStudentInformation().GetName() << "  " << (*studentBegin)->GetStudentInformation().GetClassNum() << endl;
		}
		studentBegin++;
		i++;
	}
}
