#include "stdafx.h"
#include "TabWidget.h"
#include "ClassTree.h"
#include "TreeItem.h"

namespace SSY
{
	TabWidget::TabWidget(QWidget* parent)
		: QTabWidget(parent)
	{
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
			connect(classTree, &QTreeWidget::itemClicked, this, &TabWidget::ClickedEvent);
			addTab(classTree, classTree->GetClassName());
			classTree->UpdateData();
		}
	}

	void TabWidget::ClickedEvent(QTreeWidgetItem* item, int column) {
		if (nullptr != item) {
			TreeItem* treeItem = dynamic_cast<TreeItem*>(item);
			treeItem->DisplayInformation();
		}
	}
}
