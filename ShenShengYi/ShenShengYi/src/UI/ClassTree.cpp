#include "stdafx.h"
#include "ClassTree.h"
#include <Student.h>
#include <School.h>
#include <map>
#include "TreeItem.h"

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
		connect(this, &ClassTree::itemClicked, this, &ClassTree::ClickEvent);
	}

	QString ClassTree::GetClassName(void)const{
		return _classType;
	}

	void ClassTree::UpdateData(void) {
		QTreeWidgetItem* root = new QTreeWidgetItem(this, QStringList() << "全部班级");
		root->setExpanded(true);

		STU::Student* const* studentBegin = STU::School::GetInstance()->StudentIteratorBegin();
		STU::Student* const* studentEnd = STU::School::GetInstance()->StudentIteratorEnd();

		int classNumber = STU::School::GetInstance()->GetClassNumber();

		map<int, QTreeWidgetItem*> classMap;
		for (int i = 1; i <= classNumber; i++) {
			classMap[i] = new ClassTreeItem(root, QString::number(i) + " 班");
			classMap[i]->setExpanded(false);
		}
	
		while (studentBegin != studentEnd) {
			STU::StudentInformation information = (*studentBegin)->GetStudentInformation();
			std::string name = information.GetName();
			int classNum = information.GetClassNum();
			new StudentTreeItem(classMap[classNum], QString::fromLocal8Bit(name.c_str()));
			studentBegin++;
		}		
	}

	void ClassTree::contextMenuEvent(QContextMenuEvent*){
		//QMessageBox::information(this, "nih", "dd");
	}

	void ClassTree::ClickEvent(QTreeWidgetItem* item, int column) {
		//QMessageBox::information(this, item->text, item->text);
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