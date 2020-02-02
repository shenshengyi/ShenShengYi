#pragma once

#ifdef SCHOOL_DYNAMIC_LIBRARY

#define CLASS_DECLSPEC    __declspec(dllexport)
#else
#define CLASS_DECLSPEC    __declspec(dllimport)
#endif

#include <string>
#include <folly/String.h>

using namespace std;

namespace STU
{
	enum class Subject 
	{
		Arts = 0,
		Science,
	};

	class CLASS_DECLSPEC StudentInformation
	{
	public:
		std::string GetName(void)const { return _Name.toStdString(); }
		Subject GetSubject(void)const { return _Subject; }
		int GetNum(void)const { return _Num; }
		int GetLanguage(void)const { return _Language; }
		int GetMath(void)const { return _Math; }
		int GetComprehensive(void)const { return _Comprehensive; }
		int GetEnglish(void)const { return _English; }

		void SetName(const std::string& Name) { _Name = Name; }
		void SetSubject(Subject subject) { _Subject = subject; }
		void SetNum(int Num) { _Num = Num; }
		void SetLanguage(int Language) { _Language = Language; }
		void SetMath(int Math) { _Math = Math;}
		void SetComprehensive(int Comprehensive) { _Comprehensive = Comprehensive; }
		void SetEnglish(int English) { _English = English; }
	private:
		folly::fbstring		_Name;
		Subject				_Subject;
		int					_Num;
		int					_Language;
		int					_Math;
		int					_Comprehensive;
		int					_English;
	};

	class CLASS_DECLSPEC Student
	{
	public:
		virtual ~Student(void){}
		virtual StudentInformation GetStudentInformation(void)const = 0;
		virtual void DisplayStudent(void)const = 0;
		static Student* GenerateStudent(Subject subject);
	};
}

