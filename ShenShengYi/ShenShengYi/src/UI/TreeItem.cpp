#include "stdafx.h"
#include "TreeItem.h"

namespace SSY
{
	TreeItem::TreeItem(QTreeWidgetItem* parent, const QString& strings, int type)
		: QTreeWidgetItem(parent, QStringList() << strings,type)
	{
	}

	void TreeItem::DisplayInformation(void) {

	}

	//////////////////////////////////////////////////////

	ClassTreeItem::ClassTreeItem(QTreeWidgetItem* parent, const QString& strings, int type)
		:TreeItem(parent, strings, type)
	{
	}

	void ClassTreeItem::DisplayInformation(void) {
		QMessageBox::information(nullptr, "�༶", text(0));
	}

	//////////////////////////////////////////////////////

	StudentTreeItem::StudentTreeItem(QTreeWidgetItem* parent, const QString& strings, int type)
		:TreeItem(parent, strings, type)
	{
	}

	void StudentTreeItem::DisplayInformation(void) {
		QMessageBox::information(nullptr, "ѧ��", text(0));
	}
}