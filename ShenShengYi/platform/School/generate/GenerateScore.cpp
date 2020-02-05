#include "pch.h"
#include "STLGenerateScore.h"

namespace STU
{
	GenerateScore* GenerateScore::CreateSTLGenerate(void) {
		return new STLGenerateScore;
	}
}
