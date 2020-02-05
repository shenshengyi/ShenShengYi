#pragma once

#ifdef SCHOOL_DYNAMIC_LIBRARY

#define CLASS_DECLSPEC    __declspec(dllexport)
#else
#define CLASS_DECLSPEC    __declspec(dllimport)
#endif

namespace STU
{
	class Student;
	class DataSource
	{
	public:
		virtual ~DataSource(void){}
		virtual void AddStudent(folly::fbvector<Student*>&) = 0;
		static DataSource* CreateFileSource(const folly::fbstring&);
	};
}
