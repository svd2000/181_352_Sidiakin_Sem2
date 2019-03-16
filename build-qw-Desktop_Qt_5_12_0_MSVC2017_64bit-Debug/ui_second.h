/********************************************************************************
** Form generated from reading UI file 'second.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECOND_H
#define UI_SECOND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Second
{
public:
    QLabel *label;

    void setupUi(QDialog *Second)
    {
        if (Second->objectName().isEmpty())
            Second->setObjectName(QString::fromUtf8("Second"));
        Second->resize(400, 300);
        label = new QLabel(Second);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 140, 55, 16));

        retranslateUi(Second);

        QMetaObject::connectSlotsByName(Second);
    } // setupUi

    void retranslateUi(QDialog *Second)
    {
        Second->setWindowTitle(QApplication::translate("Second", "Dialog", nullptr));
        label->setText(QApplication::translate("Second", "Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Second: public Ui_Second {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECOND_H
