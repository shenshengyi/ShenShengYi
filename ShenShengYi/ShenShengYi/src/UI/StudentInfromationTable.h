#pragma once

#include <QTableWidget>
namespace STU
{
	class StudentInformation;
}

namespace SSY
{
	class StudentInfromationTable : public QTableWidget
	{
		Q_OBJECT
	public:
		StudentInfromationTable(QWidget* parent = nullptr);
		~StudentInfromationTable();
		void UpdateData(const QString& classNum);
		void UpdateData(int studentNum);
		void UpdateData(void);
	private:
		void UpdateData(int row,const STU::StudentInformation& information);
		void Init(void);
		const int _column;
	};
}
