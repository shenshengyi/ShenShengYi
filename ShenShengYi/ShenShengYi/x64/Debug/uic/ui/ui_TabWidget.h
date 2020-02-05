/********************************************************************************
** Form generated from reading UI file 'TabWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABWIDGET_H
#define UI_TABWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabWidget
{
public:

    void setupUi(QWidget *TabWidget)
    {
        if (TabWidget->objectName().isEmpty())
            TabWidget->setObjectName(QString::fromUtf8("TabWidget"));
        TabWidget->resize(400, 300);

        retranslateUi(TabWidget);

        QMetaObject::connectSlotsByName(TabWidget);
    } // setupUi

    void retranslateUi(QWidget *TabWidget)
    {
        TabWidget->setWindowTitle(QCoreApplication::translate("TabWidget", "TabWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TabWidget: public Ui_TabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABWIDGET_H
