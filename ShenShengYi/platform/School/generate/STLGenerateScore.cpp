#include "pch.h"
#include "STLGenerateScore.h"

namespace STU
{
	STLGenerateScore::STLGenerateScore(void){
	}

	int STLGenerateScore::GenerateLanguage(void) {
		return _rand() % 150;
	}

	int STLGenerateScore::GenerateMath(void) {
		return _rand() % 150;
	}

	int STLGenerateScore::GenerateComprehensive(void) {
		return _rand() % 300;
	}

	int STLGenerateScore::GenerateEnglish(void) {
		return _rand() % 150;
	}
}