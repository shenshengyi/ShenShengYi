#pragma once
#include <gtest/gtest.h>
class School_Environment_Test:public testing::Environment
{
public:
	~School_Environment_Test(void);
	void SetUp(void)override;
	void TearDown(void)override;
};

