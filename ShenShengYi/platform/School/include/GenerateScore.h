#pragma once
#ifdef SCHOOL_DYNAMIC_LIBRARY

#define CLASS_DECLSPEC    __declspec(dllexport)
#else
#define CLASS_DECLSPEC    __declspec(dllimport)
#endif

namespace STU
{
	class GenerateScore
	{
	public:
		virtual ~GenerateScore(void) {}
		virtual int GenerateLanguage(void) = 0;
		virtual int GenerateMath(void) = 0;
		virtual int GenerateComprehensive(void) = 0;
		virtual int GenerateEnglish(void) = 0;

		static GenerateScore* CreateSTLGenerate(void);
	};
}

