/********************************************************************************
** Form generated from reading UI file 'ClassTree.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSTREE_H
#define UI_CLASSTREE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClassTree
{
public:

    void setupUi(QWidget *ClassTree)
    {
        if (ClassTree->objectName().isEmpty())
            ClassTree->setObjectName(QString::fromUtf8("ClassTree"));
        ClassTree->resize(400, 300);

        retranslateUi(ClassTree);

        QMetaObject::connectSlotsByName(ClassTree);
    } // setupUi

    void retranslateUi(QWidget *ClassTree)
    {
        ClassTree->setWindowTitle(QCoreApplication::translate("ClassTree", "ClassTree", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClassTree: public Ui_ClassTree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSTREE_H
