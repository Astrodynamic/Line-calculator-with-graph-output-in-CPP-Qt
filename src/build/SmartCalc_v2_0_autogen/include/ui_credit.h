/********************************************************************************
** Form generated from reading UI file 'credit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_H
#define UI_CREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Credit
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Credit)
    {
        if (Credit->objectName().isEmpty())
            Credit->setObjectName(QString::fromUtf8("Credit"));
        Credit->resize(800, 600);
        menubar = new QMenuBar(Credit);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Credit->setMenuBar(menubar);
        centralwidget = new QWidget(Credit);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Credit->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Credit);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Credit->setStatusBar(statusbar);

        retranslateUi(Credit);

        QMetaObject::connectSlotsByName(Credit);
    } // setupUi

    void retranslateUi(QMainWindow *Credit)
    {
        Credit->setWindowTitle(QCoreApplication::translate("Credit", "Credit calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit: public Ui_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
