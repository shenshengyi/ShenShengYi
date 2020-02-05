#pragma once

#ifdef SCHOOL_DYNAMIC_LIBRARY

#define CLASS_DECLSPEC    __declspec(dllexport)
#else
#define CLASS_DECLSPEC    __declspec(dllimport)
#endif

#define GLOG_NO_ABBREVIATED_SEVERITIES

#include <utility>
#include <folly/FBVector.h>
#include <glog/logging.h>

namespace STU
{
	class Student;
	class IDataSource;
	class Configuration;

	class CLASS_DECLSPEC School
	{
	public:	
		~School(void);
		static School* GetInstance();
		static void Release(void);
		void setM(int x) {
			m = x;
		}
		int test(void)const { return m; }
		void AddStudent(bool isSort = true);
		int GetStudentNum(void)const;
		int GetClassNumber(void)const;
		Student** StudentIteratorBegin(void);
		Student** StudentIteratorEnd(void);
		Student*const* StudentIteratorBegin(void)const;
		Student* const* StudentIteratorEnd(void)const;
		Student* FindStudentByNum(int Num)const;
		folly::fbvector<Student*> FindStudentByClassNum(int classNum)const;
	private:
		void SortByStudentToScore(void);
		void init(void);
		void AddStudentInformation(void);
		void AddStudentName(void);
		School(void);
		School(const School&) = delete;
		School& operator=(const School&) = delete;
		School(School&&) noexcept = default;
		School& operator=(School&&)noexcept = delete;

		int m;
		static School*				_School;
		IDataSource*					_DataSource;
		folly::fbvector<Student*>		_StudentList;
	};
}

