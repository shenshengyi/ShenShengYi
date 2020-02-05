#pragma once
#ifdef SCHOOL_DYNAMIC_LIBRARY

#define CLASS_DECLSPEC    __declspec(dllexport)
#else
#define CLASS_DECLSPEC    __declspec(dllimport)
#endif

namespace STU
{
	class DataSource;
	class GenerateNum;
	class GenerateScore;
	
	class CLASS_DECLSPEC Configuration
	{
	public:
		~Configuration(void);
		static Configuration* GetInstance();
		static void Release(void);
		void SetDataSource(DataSource*);
		DataSource* GetDataSource(void)const;
		void SetGenerate(GenerateScore*);
		GenerateScore* GetGenerate(void)const;
		void SetGenerateNum(GenerateNum*);
		GenerateNum* GetGenerateNum(void)const;
	private:
		Configuration(void);
		Configuration(const Configuration&) = delete;
		Configuration& operator=(const Configuration&) = delete;
		Configuration(Configuration&&) noexcept = default;
		Configuration& operator=(Configuration&&)noexcept = delete;

		static Configuration*			_Configuration;
		DataSource*					_DataSource;
		GenerateNum*					_GenerateNum;
		GenerateScore*				_Generate;
	};
}

