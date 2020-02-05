#include "stdafx.h"
#include "TreeItem.h"
#include "CentralWidget.h"
#include "qmessagebox.h"
namespace SSY
{
	TreeItem::TreeItem(QTreeWidgetItem* parent, const QString& strings, int type)
		: QTreeWidgetItem(parent, QStringList() << strings,type)
	{
	}

	TreeItem::TreeItem(QTreeWidget* treeview, const QStringList& strings, int type)
		: QTreeWidgetItem(treeview, strings,type)
	{
	}

	void TreeItem::DisplayInformation(void) {
		CentralWidget::GetInstance()->UpdateTableWidgetData();
	}

	//////////////////////////////////////////////////////

	ClassTreeItem::ClassTreeItem(QTreeWidgetItem* parent, const QString& strings, int type)
		:TreeItem(parent, strings, type)
	{
	}

	void ClassTreeItem::DisplayInformation(void) {
		CentralWidget::GetInstance()->UpdateTableWidgetData(text(0));
	}

	//////////////////////////////////////////////////////

	StudentTreeItem::StudentTreeItem(QTreeWidgetItem* parent, const QString& strings, int type)
		:TreeItem(parent, strings, type)
	{
	}

	void StudentTreeItem::DisplayInformation(void) {
		CentralWidget::GetInstance()->UpdateTableWidgetData(_Num);
	}
}