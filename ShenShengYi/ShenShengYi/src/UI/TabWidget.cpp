#include "stdafx.h"
#include "TabWidget.h"
#include "ClassTree.h"

namespace SSY
{
	TabWidget::TabWidget(QWidget* parent)
		: QTabWidget(parent)
	{
		ui.setupUi(this);

		Init();
	}

	TabWidget::~TabWidget()
	{
	}

	void TabWidget::Init(void) {
		setTabPosition(QTabWidget::South);
	
		_veClassTree.emplace_back(new ClassTree);
		_veClassTree.emplace_back(new ArtsClassTree);
		_veClassTree.emplace_back(new ScienceClassTree);

		for (auto classTree : _veClassTree) {
			addTab(classTree, classTree->GetClassName());
			classTree->UpdateData();
		}
	}
}
