#pragma once
#include <random>
#include "GenerateScore.h"
namespace STU
{
	class STLGenerateScore:public GenerateScore
	{
	public:
		STLGenerateScore(void);
		int GenerateLanguage(void)override;
		int GenerateMath(void)override;
		int GenerateComprehensive(void)override;
		int GenerateEnglish(void)override;
	private:
		std::random_device	_rand;
	};
}

