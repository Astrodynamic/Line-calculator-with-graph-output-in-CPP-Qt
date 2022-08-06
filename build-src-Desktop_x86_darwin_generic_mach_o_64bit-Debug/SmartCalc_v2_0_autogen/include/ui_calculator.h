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

class Ui_Calculatorklfds
{
public:
    QWidget *centralwidget;

    void setupUi(QMainWindow *Calculatorklfds)
    {
        if (Calculatorklfds->objectName().isEmpty())
            Calculatorklfds->setObjectName(QString::fromUtf8("Calculatorklfds"));
        Calculatorklfds->resize(1139, 755);
        centralwidget = new QWidget(Calculatorklfds);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Calculatorklfds->setCentralWidget(centralwidget);

        retranslateUi(Calculatorklfds);

        QMetaObject::connectSlotsByName(Calculatorklfds);
    } // setupUi

    void retranslateUi(QMainWindow *Calculatorklfds)
    {
        Calculatorklfds->setWindowTitle(QCoreApplication::translate("Calculatorklfds", "Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculatorklfds: public Ui_Calculatorklfds {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
