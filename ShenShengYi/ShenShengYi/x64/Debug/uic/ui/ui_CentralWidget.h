/********************************************************************************
** Form generated from reading UI file 'CentralWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTRALWIDGET_H
#define UI_CENTRALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>

QT_BEGIN_NAMESPACE

class Ui_CentralWidget
{
public:

    void setupUi(QTabWidget *CentralWidget)
    {
        if (CentralWidget->objectName().isEmpty())
            CentralWidget->setObjectName(QString::fromUtf8("CentralWidget"));
        CentralWidget->resize(400, 300);

        retranslateUi(CentralWidget);

        QMetaObject::connectSlotsByName(CentralWidget);
    } // setupUi

    void retranslateUi(QTabWidget *CentralWidget)
    {
        CentralWidget->setWindowTitle(QCoreApplication::translate("CentralWidget", "CentralWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CentralWidget: public Ui_CentralWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTRALWIDGET_H
