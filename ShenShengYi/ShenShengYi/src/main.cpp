#include "stdafx.h"
#include "UI/MainWindow.h"
#include <QtWidgets/QApplication>
#include <School.h>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
    a.setStyle("windows");
	//a.setStyleSheet("QMainWindow{color:rgp(0,0,127);background-color:rgb(0,170,127);}");
	//a.setStyle(QStyleFactory::create("Fusion"));

 //   QPalette palette;
 //   palette.setColor(QPalette::Window, QColor(100, 225, 100, 30));
 //   palette.setColor(QPalette::WindowText, Qt::white);
 //   palette.setColor(QPalette::Base, QColor(15, 15, 15));
 //   palette.setColor(QPalette::AlternateBase, QColor(100, 225, 100, 30));
 //   palette.setColor(QPalette::ToolTipBase, Qt::white);
 //   palette.setColor(QPalette::ToolTipText, Qt::white);
 //   palette.setColor(QPalette::Text, Qt::white);
 //   palette.setColor(QPalette::Button, QColor(100, 225, 100, 30));
 //   palette.setColor(QPalette::ButtonText, Qt::white);
 //   palette.setColor(QPalette::BrightText, Qt::red);
 //   palette.setColor(QPalette::Highlight, QColor(142, 45, 197).lighter());
 //   palette.setColor(QPalette::HighlightedText, Qt::black);
 //   a.setPalette(palette);
    STU::School sch;
    int result = sch.test();
    QMessageBox::information(nullptr, "nihao", QString::number(result));
	SSY::MainWindow w;
	w.setWindowTitle("««∏Í¿Ô∑Â");
	w.show();
	return a.exec();
}
