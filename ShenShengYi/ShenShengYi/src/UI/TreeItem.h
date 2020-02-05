#pragma once
#include <QObject>
#include <QTreeWidgetItem>

namespace SSY
{
	class TreeItem : public QTreeWidgetItem
	{
	public:
		TreeItem(QTreeWidgetItem* parent, const QString& strings, int type = Type);
		TreeItem(QTreeWidget* treeview, const QStringList& strings, int type = Type);
		virtual ~TreeItem() {}
		virtual void DisplayInformation(void);
	};

	class ClassTreeItem : public TreeItem
	{
	public:
		ClassTreeItem(QTreeWidgetItem* parent, const QString& strings, int type = Type);
		void DisplayInformation(void)override;
	};

	class StudentTreeItem : public TreeItem
	{
	public:
		StudentTreeItem(QTreeWidgetItem* parent, const QString& strings, int type = Type);
		void DisplayInformation(void)override;
		void SetNum(int num) { _Num = num; }
	private:
		int _Num;
	};
}
