#pragma once
#include <gtest/gtest.h>
#include <School.h>

class School_Test:public testing::Test
{
public:
    
protected:
    static void SetUpTestCase(void);
    static void TearDownTestCase(void);
    void SetUp()override;
    void TearDown()override;
    STU::School* _shool;
};

