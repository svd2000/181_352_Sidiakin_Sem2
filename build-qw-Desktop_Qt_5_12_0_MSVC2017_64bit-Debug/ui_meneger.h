/********************************************************************************
** Form generated from reading UI file 'meneger.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENEGER_H
#define UI_MENEGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Meneger
{
public:
    QLabel *label;

    void setupUi(QDialog *Meneger)
    {
        if (Meneger->objectName().isEmpty())
            Meneger->setObjectName(QString::fromUtf8("Meneger"));
        Meneger->resize(400, 300);
        label = new QLabel(Meneger);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 110, 55, 16));

        retranslateUi(Meneger);

        QMetaObject::connectSlotsByName(Meneger);
    } // setupUi

    void retranslateUi(QDialog *Meneger)
    {
        Meneger->setWindowTitle(QApplication::translate("Meneger", "Dialog", nullptr));
        label->setText(QApplication::translate("Meneger", "Meneger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Meneger: public Ui_Meneger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENEGER_H
