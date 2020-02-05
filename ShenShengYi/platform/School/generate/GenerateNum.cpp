#include "pch.h"
#include "OrdinaryGenerateNum.h"

namespace STU
{
	GenerateNum* GenerateNum::CreateOrdinaryGenerateNum(void) {
		return new OrdinaryGenerateNum;
	}
}
