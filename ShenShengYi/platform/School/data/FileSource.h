#pragma once
#include "DataSource.h"

namespace STU
{
	class FileSource:public DataSource
	{
	public:
		FileSource(const folly::fbstring& fileName);
		~FileSource(void);
		void AddStudent(folly::fbvector<Student*>&)override;
	private:
		folly::fbstring			_fileName;
	};
}

