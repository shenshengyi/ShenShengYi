#include "pch.h"
#include "STLGenerateScore.h"

namespace STU
{
	namespace {
		int CalculationScore(int sroce) {
			if (sroce <= 30) {
				sroce += 30;
			}
			return sroce;
		}
	}
	STLGenerateScore::STLGenerateScore(void){
	}

	int STLGenerateScore::GenerateLanguage(void) {
		return CalculationScore(_rand() % 150);
	}

	int STLGenerateScore::GenerateMath(void) {
		return CalculationScore(_rand() % 150);
	}

	int STLGenerateScore::GenerateComprehensive(void) {
		return CalculationScore(_rand() % 300);
	}

	int STLGenerateScore::GenerateEnglish(void) {
		return CalculationScore(_rand() % 150);
	}
}