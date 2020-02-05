#pragma once

#ifdef SCHOOL_DYNAMIC_LIBRARY

#define CLASS_DECLSPEC    __declspec(dllexport)
#else
#define CLASS_DECLSPEC    __declspec(dllimport)
#endif

namespace STU
{
	class CLASS_DECLSPEC GenerateNum
	{
	public:
		virtual ~GenerateNum(void) {}
		virtual int GenerateStudentNum(void) = 0;
		virtual int GenerateClassNum(void)const = 0;
		static GenerateNum* CreateOrdinaryGenerateNum(void);
	};
}

