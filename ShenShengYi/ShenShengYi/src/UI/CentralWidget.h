#pragma once

#include <QTabWidget>

namespace SSY
{
	class StudentInfromationTable;
	class CentralWidget : public QTabWidget
	{
		Q_OBJECT

	public:
		CentralWidget(QWidget* parent = nullptr);
		~CentralWidget();
		static CentralWidget* GetInstance(void);
		void UpdateTableWidgetData(const QString& classNum);
		void UpdateTableWidgetData(int studentNum);
		void UpdateTableWidgetData(void);
	private:
		void Init(void);

		StudentInfromationTable*			_studentInfromationTable;
		static CentralWidget*				_centralWidget;
	};
}
