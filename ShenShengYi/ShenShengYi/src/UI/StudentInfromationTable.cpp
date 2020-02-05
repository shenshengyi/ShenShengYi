#include "stdafx.h"
#include "StudentInfromationTable.h"
#include <School.h>
#include <Student.h>

namespace SSY
{
	StudentInfromationTable::StudentInfromationTable(QWidget* parent)
		: QTableWidget(parent)
		, _column{7}
	{
		Init();
	}

	StudentInfromationTable::~StudentInfromationTable()
	{
	}

	void StudentInfromationTable::Init(void) {
		setColumnCount(_column);
		QStringList header;
		header << tr("ѧ��") << tr("����") << tr("����") << tr("��ѧ") << tr("�ۺ�") << tr("Ӣ��") << tr("�ܷ�");
		setHorizontalHeaderLabels(header);

		setEditTriggers(QAbstractItemView::NoEditTriggers); //���ñ�����ݲ��ɱ༭
		//setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
	}

	void StudentInfromationTable::UpdateData(int row,const STU::StudentInformation& information) {
		
		int Num = information.GetNum();
		std::string Name = information.GetName();
		int Language = information.GetLanguage();
		int Math = information.GetMath();
		int Comprehensive = information.GetComprehensive();
		int English = information.GetEnglish();
		int TotalScore = information.GetTotalScore();

		setItem(row, 0, new QTableWidgetItem(QString::number(Num)));
		setItem(row, 1, new QTableWidgetItem(QString::fromLocal8Bit(Name.c_str())));
		setItem(row, 2, new QTableWidgetItem(QString::number(Language)));
		setItem(row, 3, new QTableWidgetItem(QString::number(Math)));
		setItem(row, 4, new QTableWidgetItem(QString::number(Comprehensive)));
		setItem(row, 5, new QTableWidgetItem(QString::number(English)));
		setItem(row, 6, new QTableWidgetItem(QString::number(TotalScore)));

		for (int col = 0; col < _column; col++) {
			item(row, col)->setTextAlignment(Qt::AlignCenter);
		}
	}

	void StudentInfromationTable::UpdateData(const QString& classNum) {
		if (classNum.isEmpty()) {
			return;
		}

		QString classNumStr = classNum.left(classNum.length() - QString(tr("��")).length());
		folly::fbvector<STU::Student*> result = STU::School::GetInstance()->FindStudentByClassNum(classNumStr.toInt());

		clearContents();
		setRowCount(result.size());

		for (int i = 0; i < result.size(); i++) {
			STU::StudentInformation information = result[i]->GetStudentInformation();
			UpdateData(i,information);
		}

		show();
	}

	void StudentInfromationTable::UpdateData(int studentNum) {
		STU::Student* result = STU::School::GetInstance()->FindStudentByNum(studentNum);
		STU::StudentInformation information = result->GetStudentInformation();
		clearContents();
		setRowCount(1);
		UpdateData(0, information);
		show();
	}

	void StudentInfromationTable::UpdateData(void) {
		clearContents();
		const int studentNum = STU::School::GetInstance()->GetStudentNum();
		setRowCount(studentNum);

		STU::Student** studentBegin = STU::School::GetInstance()->StudentIteratorBegin();
		STU::Student** studentEnd = STU::School::GetInstance()->StudentIteratorEnd();

		int i = 0;
		while (studentBegin != studentEnd && i < studentNum) {
			if (nullptr != studentBegin) {
				STU::StudentInformation information = (*studentBegin++)->GetStudentInformation();
				UpdateData(i++, information);
			}
		}
		show();
	}
}
