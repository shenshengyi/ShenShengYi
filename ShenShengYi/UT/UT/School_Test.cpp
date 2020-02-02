#include "pch.h"
#include "School_Test.h"
#include <iostream>
using namespace std;

void School_Test::SetUpTestCase(void) {
}

void School_Test::TearDownTestCase(void) {
}

void School_Test::SetUp() {
}

void School_Test::TearDown() {
}

int add1(int a, int b) {
	return a + b;
}

TEST_F(School_Test, GetStudentNum) {
	shool.AddStudent();
	int num = shool.GetStudentNum();
	EXPECT_EQ(num, 10);
}
