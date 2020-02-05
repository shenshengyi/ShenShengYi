#include "pch.h"
#include "FileSource.h"

namespace STU
{
	DataSource* DataSource::CreateFileSource(const folly::fbstring&fileName) {
		return new FileSource(fileName);
	}
}