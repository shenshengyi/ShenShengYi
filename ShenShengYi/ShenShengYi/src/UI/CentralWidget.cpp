#include "stdafx.h"
#include "CentralWidget.h"
#include "StudentInfromationTable.h"

namespace SSY
{
	CentralWidget* CentralWidget::_centralWidget = nullptr;

	CentralWidget::CentralWidget(QWidget* parent)
		: QTabWidget(parent)
		, _studentInfromationTable{nullptr}
	{
		Init();
	}

	CentralWidget::~CentralWidget()
	{
	}

	CentralWidget* CentralWidget::GetInstance() {
		if (nullptr == _centralWidget) {
			_centralWidget = new CentralWidget;
		}
		return _centralWidget;
	}

	void CentralWidget::Init(void) {
		_studentInfromationTable = new StudentInfromationTable;
		addTab(_studentInfromationTable,tr("³É¼¨ÐÅÏ¢"));
		_studentInfromationTable->hide();
	}

	void CentralWidget::UpdateTableWidgetData(const QString& classNum) {
		if (nullptr == _studentInfromationTable) {
			return;
		}
		_studentInfromationTable->UpdateData(classNum);
	}

	void CentralWidget::UpdateTableWidgetData(int studentNum) {
		if (nullptr == _studentInfromationTable) {
			return;
		}
		_studentInfromationTable->UpdateData(studentNum);
	}

	void CentralWidget::UpdateTableWidgetData(void) {
		if (nullptr == _studentInfromationTable) {
			return;
		}
		_studentInfromationTable->UpdateData();
	}
}
