#pragma once
#include "GenerateNum.h"
namespace STU
{
	class OrdinaryGenerateNum:public GenerateNum
	{
	public:
		OrdinaryGenerateNum(void);
		int GenerateStudentNum(void)override;
		int GenerateClassNum(void)const override;
	private:
		int				_ClassNum;
		int				_StudentNum;
		const int		_Num;//20200306;
	};
}

