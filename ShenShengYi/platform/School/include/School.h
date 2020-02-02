#pragma once

#ifdef SCHOOL_DYNAMIC_LIBRARY

#define CLASS_DECLSPEC    __declspec(dllexport)
#else
#define CLASS_DECLSPEC    __declspec(dllimport)
#endif

#include <folly/FBVector.h>

namespace STU
{
	class Student;
	class CLASS_DECLSPEC School
	{
	public:
		School(void);
		~School(void);
		void setM(int x) {
			m = x;
		}
		int test(void)const { return m; }
		void AddStudent(void);
		int GetStudentNum(void)const;
	private:
		int m;
		folly::fbvector<Student*>		_StudentList;
	};
}

