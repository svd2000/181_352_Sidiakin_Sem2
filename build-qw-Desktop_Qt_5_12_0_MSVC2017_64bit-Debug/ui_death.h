/********************************************************************************
** Form generated from reading UI file 'death.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEATH_H
#define UI_DEATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Death
{
public:
    QLabel *label;

    void setupUi(QDialog *Death)
    {
        if (Death->objectName().isEmpty())
            Death->setObjectName(QString::fromUtf8("Death"));
        Death->resize(400, 300);
        label = new QLabel(Death);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 90, 141, 101));

        retranslateUi(Death);

        QMetaObject::connectSlotsByName(Death);
    } // setupUi

    void retranslateUi(QDialog *Death)
    {
        Death->setWindowTitle(QApplication::translate("Death", "Dialog", nullptr));
        label->setText(QApplication::translate("Death", "You death", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Death: public Ui_Death {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEATH_H
