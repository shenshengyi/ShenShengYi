#include "pch.h"
#include "Student_Test.h"

void Student_Test::SetUpTestCase(void) {
	 
}

void Student_Test::TearDownTestCase(void) {

}

void Student_Test::SetUp() {
	student = STU::Student::GenerateStudent(STU::Subject::Science);
}

void Student_Test::TearDown() {
	delete student;
}

TEST_F(Student_Test, test055) {
	student->DisplayStudent();
	int x = 1;
	EXPECT_EQ(1,x);
}