#include "pch.h"
#include "Configuration.h"
#include "DataSource.h"
#include "GenerateScore.h"
#include "GenerateNum.h"

namespace STU
{
	Configuration* Configuration::_Configuration = nullptr;

	Configuration* Configuration::GetInstance(void) {
		if (nullptr == _Configuration) {
			_Configuration = new Configuration;
		}
		return _Configuration;
	}

	void Configuration::Release(void) {
		if (nullptr != _Configuration) {
			delete _Configuration;
		}
	}

	Configuration::Configuration(void) {
		_DataSource = DataSource::CreateFileSource("H:\\ShenShengYi\\ShenShengYi\\ShenShengYi\\data\\data.xml");
		_Generate = GenerateScore::CreateSTLGenerate();
		_GenerateNum = GenerateNum::CreateOrdinaryGenerateNum();
	}

	Configuration::~Configuration(void) {
		if (nullptr != _DataSource) {
			delete _DataSource;
		}
		if (nullptr != _Generate) {
			delete _Generate;
		}
		if (nullptr != _GenerateNum) {
			delete _GenerateNum;
		}
	}

	void Configuration::SetDataSource(DataSource* dataSource) {
		if (nullptr != dataSource) {
			if (nullptr != _DataSource) {
				delete _DataSource;
			}
			_DataSource = dataSource;
		}
	}

	DataSource* Configuration::GetDataSource(void)const {
		return _DataSource;
	}

	void Configuration::SetGenerate(GenerateScore*generate) {
		if (nullptr != generate) {
			if (nullptr != _Generate) {
				delete _Generate;
			}
			_Generate = generate;
		}
	}

	GenerateScore* Configuration::GetGenerate(void)const {
		return _Generate;
	}

	void Configuration::SetGenerateNum(GenerateNum*generateNum) {
		if (nullptr != generateNum) {
			if (nullptr != _GenerateNum) {
				delete _GenerateNum;
			}
			_GenerateNum = generateNum;
		}
	}

	GenerateNum* Configuration::GetGenerateNum(void)const {
		return _GenerateNum;
	}
}
