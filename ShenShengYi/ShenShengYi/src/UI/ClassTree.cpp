#include "stdafx.h"
#include "ClassTree.h"

namespace SSY
{
	////////////////////////////ClassTree///////////////////////////////////
	ClassTree::ClassTree(QWidget* parent)
		: QTreeWidget(parent)
		, _classType{tr("全部班级")}
	{
		ui.setupUi(this);
		Init();
	}

	ClassTree::~ClassTree()
	{
		setWindowTitle(_classType);
	}

	void ClassTree::Init(void) {

	}

	QString ClassTree::GetClassName(void)const{
		return _classType;
	}

	void ClassTree::UpdateData(void) {
		QTreeWidgetItem* item = new QTreeWidgetItem(this, QStringList() << "全部");
	}

	////////////////////////////ClassTree///////////////////////////////////

	ArtsClassTree::ArtsClassTree(QWidget* parent)
		:ClassTree{ parent }
		, _classType{ tr("文科班级") }
	{

	}

	ArtsClassTree::~ArtsClassTree() {

	}

	QString ArtsClassTree::GetClassName(void)const {
		return _classType;
	}

	void ArtsClassTree::UpdateData(void) {
		QTreeWidgetItem* item = new QTreeWidgetItem(this, QStringList() << _classType);
	}

	////////////////////////////ClassTree///////////////////////////////////
	ScienceClassTree::ScienceClassTree(QWidget* parent)
		:ClassTree{ parent }
		, _classType{ tr("理科班级") }
	{
	}

	ScienceClassTree::~ScienceClassTree(void) {

	}

	QString ScienceClassTree::GetClassName(void)const {
		return _classType;
	}

	void ScienceClassTree::UpdateData(void) {
		QTreeWidgetItem* item = new QTreeWidgetItem(this, QStringList() << _classType);
	}
}