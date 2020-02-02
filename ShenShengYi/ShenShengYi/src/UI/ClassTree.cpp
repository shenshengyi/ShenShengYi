#include "stdafx.h"
#include "ClassTree.h"

namespace SSY
{
	////////////////////////////ClassTree///////////////////////////////////
	ClassTree::ClassTree(QWidget* parent)
		: QTreeWidget(parent)
		, _classType{tr("ȫ���༶")}
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
		QTreeWidgetItem* item = new QTreeWidgetItem(this, QStringList() << "ȫ��");
	}

	////////////////////////////ClassTree///////////////////////////////////

	ArtsClassTree::ArtsClassTree(QWidget* parent)
		:ClassTree{ parent }
		, _classType{ tr("�Ŀư༶") }
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
		, _classType{ tr("��ư༶") }
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