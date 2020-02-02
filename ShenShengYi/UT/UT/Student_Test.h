#pragma once
#include <gtest/gtest.h>
#include <Student.h>

class Student_Test:public testing::Test
{
public:

protected:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp()override;
    void TearDown()override;

    STU::Student* student;
};

