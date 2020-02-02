#include "stdafx.h"
#include "MainWindow.h"
#include "TabWidget.h"

namespace SSY
{
	MainWindow::MainWindow(QWidget* parent)
		: QMainWindow{ parent }
		, _tabWidget{nullptr}
	{
		ui.setupUi(this);

		CreateDockWindows();
		CreateActions();
		CreateMenus();
		CreateStatusBar();
	}

	void MainWindow::CreateDockWindows(void) {
		QDockWidget* dock = new QDockWidget(tr("Customers"), this);
		dock->setAllowedAreas(Qt::LeftDockWidgetArea /*| Qt::RightDockWidgetArea*/);

		//QListWidget*customerList = new QListWidget(dock);
		//customerList->addItems(QStringList() << "北京" << "西安" << "南京" << "上海");
		_tabWidget = new TabWidget(dock);
		dock->setWidget(_tabWidget);
		addDockWidget(Qt::LeftDockWidgetArea, dock);

		QDockWidget* dockProperty = new QDockWidget(tr("Property"), this);
		dockProperty->setAllowedAreas(Qt::RightDockWidgetArea);
		QListWidget* listProperty = new QListWidget(dock);
		listProperty->addItems(QStringList() << "A" << "B" << "C" << "D");
		dockProperty->setWidget(listProperty);
		addDockWidget(Qt::RightDockWidgetArea, dockProperty);

		
		QSplitter* spliter = new QSplitter(Qt::Vertical);
		QTabWidget* left = new QTabWidget;
		left->addTab(new QListWidget, "河北1");
		left->addTab(new QListWidget, "河北2");
		left->addTab(new QListWidget, "河北3");
		left->addTab(new QListWidget, "河北4");
		left->addTab(new QListWidget, "河北5");
		left->setTabPosition(QTabWidget::North);
		QTextEdit* right = new QTextEdit(tr("右窗口"));
		spliter->addWidget(left);
		spliter->addWidget(right);
		spliter->setStretchFactor(0, 2);
		spliter->setStretchFactor(1, 1);
		spliter->setWindowTitle(tr("你好"));
		this->setCentralWidget(left);
		//this->setCentralWidget(pWidget);
		//_MdiArea = new QMdiArea;
		//this->setCentralWidget(_MdiArea);

		//QMdiSubWindow* subArea = new QMdiSubWindow;
		//QTreeView* pWidget = new QTreeView;
		//subArea->setWidget(pWidget);
		////subArea->setWindowState(Qt::WindowMaximized);
		//subArea->setAttribute(Qt::WA_DeleteOnClose);
		//_MdiArea->addSubWindow(subArea);
		//subArea->setWindowTitle(tr("One"));

		//QMdiSubWindow* subArea1 = new QMdiSubWindow;
		//QTreeView* pWidget1 = new QTreeView;
		//subArea1->setWidget(pWidget1);
		////subArea1->setWindowState(Qt::WindowMaximized);
		//subArea1->setAttribute(Qt::WA_DeleteOnClose);
		//_MdiArea->addSubWindow(subArea1);
		
	}

	void MainWindow::CreateMenus(void) {
		QMenuBar*MainMenuBar = menuBar();
		QMenu*fileMenu = MainMenuBar->addMenu(tr("&File"));
		fileMenu->addAction(_newAAA);
		fileMenu->addSeparator();
		fileMenu->addAction(tr("B"));
		fileMenu->addAction(tr("C"));
		fileMenu->addAction(tr("D"));

		MainMenuBar->addMenu(tr("&Open"));
		MainMenuBar->addMenu(tr("&Edit"));
		MainMenuBar->addMenu(tr("&Chan"));
		MainMenuBar->addMenu(tr("&Copy"));
	}

	void MainWindow::CreateActions(void) {
		_newAAA = new QAction(tr("&AAA"), this);
		_newAAA->setShortcuts(QKeySequence::New);
		_newAAA->setStatusTip(tr("Create a new File"));
		connect(_newAAA, &QAction::triggered, this, &MainWindow::newAAA);

		QToolBar* MainToolBar = addToolBar(tr("Tool bar"));
		const QIcon newICon = QIcon::fromTheme("document-new", QIcon("H:\\ShenShengYi\\ShenShengYi\\ShenShengYi\\ShenShengYi\\images\\address-book-new.png"));
		QAction* newAct = new QAction(newICon, tr("&last"), this);
		newAct->setStatusTip(tr("This is Abc"));
		newAct->setShortcuts(QKeySequence::New);
		//menuBar()->addAction(newAct);
		MainToolBar->addAction(newAct);
	}

	void MainWindow::newAAA(void) {
		QMessageBox::information(this, "nihao", "dahe");
	}

	void MainWindow::CreateStatusBar(void) {
		QStatusBar* MainStatusBar = statusBar();
		MainStatusBar->showMessage(tr("Ready"));
	}
}