/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SmartCalc_v2_0
{
public:
    QWidget *centralwidget;

    void setupUi(QMainWindow *SmartCalc_v2_0)
    {
        if (SmartCalc_v2_0->objectName().isEmpty())
            SmartCalc_v2_0->setObjectName(QString::fromUtf8("SmartCalc_v2_0"));
        SmartCalc_v2_0->resize(1139, 755);
        centralwidget = new QWidget(SmartCalc_v2_0);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        SmartCalc_v2_0->setCentralWidget(centralwidget);

        retranslateUi(SmartCalc_v2_0);

        QMetaObject::connectSlotsByName(SmartCalc_v2_0);
    } // setupUi

    void retranslateUi(QMainWindow *SmartCalc_v2_0)
    {
        SmartCalc_v2_0->setWindowTitle(QCoreApplication::translate("SmartCalc_v2_0", "Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SmartCalc_v2_0: public Ui_SmartCalc_v2_0 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
