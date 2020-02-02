#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"

namespace SSY
{
	class TabWidget;

	class MainWindow : public QMainWindow
	{
		Q_OBJECT

	public:
		MainWindow(QWidget* parent = Q_NULLPTR);
	private slots:
		void newAAA(void);
	private:
		void CreateDockWindows(void);
		void CreateMenus(void);
		void CreateActions(void);
		void CreateStatusBar(void);
		QAction* _newAAA;
		TabWidget* _tabWidget;
		Ui::MainWindowClass ui;
	};
}
