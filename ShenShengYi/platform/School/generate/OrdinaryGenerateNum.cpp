#include "pch.h"
#include "OrdinaryGenerateNum.h"

namespace STU
{
	OrdinaryGenerateNum::OrdinaryGenerateNum(void)
		:_Num{20200000}
		, _StudentNum{0}
		, _ClassNum{1}
	{
	}

	int OrdinaryGenerateNum::GenerateStudentNum(void) {
		_StudentNum++;
		if (_StudentNum == 60) {
			_ClassNum++;
		}
		int Num = _Num + _ClassNum * 100 + _StudentNum;
		if (_StudentNum == 60) {
			_StudentNum = 0;
		}
		return Num;
	}
	int OrdinaryGenerateNum::GenerateClassNum(void)const {
		return _ClassNum;
	}
}