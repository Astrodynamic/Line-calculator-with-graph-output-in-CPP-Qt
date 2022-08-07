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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *pushButton_17;
    QPushButton *pushButton_10;
    QPushButton *pushButton_28;
    QPushButton *pushButton_27;
    QPushButton *pushButton_14;
    QPushButton *pushButton_30;
    QPushButton *pushButton_29;
    QPushButton *pushButton_23;
    QPushButton *pushButton_31;
    QPushButton *pushButton_13;
    QPushButton *pushButton_20;
    QPushButton *pushButton_3;
    QPushButton *pushButton_18;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QPushButton *pushButton_22;
    QPushButton *pushButton_9;
    QPushButton *pushButton_26;
    QPushButton *pushButton_16;
    QPushButton *pushButton_15;
    QPushButton *pushButton_2;
    QPushButton *pushButton_32;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_33;
    QPushButton *pushButton_6;
    QPushButton *pushButton_21;
    QPushButton *pushButton_8;
    QPushButton *pushButton_11;
    QPushButton *pushButton_24;
    QPushButton *pushButton_12;
    QPushButton *pushButton_25;
    QPushButton *pushButton;
    QPushButton *pushButton_19;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(530, 220);
        Calculator->setMinimumSize(QSize(530, 220));
        Calculator->setMaximumSize(QSize(530, 220));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        Calculator->setFont(font);
        Calculator->setLayoutDirection(Qt::LeftToRight);
        Calculator->setAutoFillBackground(false);
        Calculator->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: rgb(215, 215, 215);\n"
"}"));
        Calculator->setDocumentMode(false);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(530, 220));
        centralwidget->setMaximumSize(QSize(530, 220));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 35));
        label->setMaximumSize(QSize(16777215, 35));
        label->setCursor(QCursor(Qt::ForbiddenCursor));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	border: 1px solid rgb(107, 107, 107);\n"
"	background-color: rgb(49, 49, 49);\n"
"	border-radius: 3px;\n"
"}"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setIndent(5);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy1);
        pushButton_17->setMinimumSize(QSize(70, 35));
        pushButton_17->setMaximumSize(QSize(70, 70));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(10);
        pushButton_17->setFont(font1);
        pushButton_17->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_17->setLayoutDirection(Qt::LeftToRight);
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_17, 4, 3, 1, 1);

        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy1.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy1);
        pushButton_10->setMinimumSize(QSize(70, 35));
        pushButton_10->setMaximumSize(QSize(70, 70));
        pushButton_10->setFont(font1);
        pushButton_10->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_10->setLayoutDirection(Qt::LeftToRight);
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_10, 3, 5, 1, 1);

        pushButton_28 = new QPushButton(centralwidget);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));
        sizePolicy1.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy1);
        pushButton_28->setMinimumSize(QSize(70, 35));
        pushButton_28->setMaximumSize(QSize(70, 70));
        pushButton_28->setFont(font1);
        pushButton_28->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_28->setLayoutDirection(Qt::LeftToRight);
        pushButton_28->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_28, 4, 0, 1, 1);

        pushButton_27 = new QPushButton(centralwidget);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        sizePolicy1.setHeightForWidth(pushButton_27->sizePolicy().hasHeightForWidth());
        pushButton_27->setSizePolicy(sizePolicy1);
        pushButton_27->setMinimumSize(QSize(70, 35));
        pushButton_27->setMaximumSize(QSize(70, 70));
        pushButton_27->setFont(font1);
        pushButton_27->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_27->setLayoutDirection(Qt::LeftToRight);
        pushButton_27->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_27, 3, 0, 1, 1);

        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy1.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy1);
        pushButton_14->setMinimumSize(QSize(70, 35));
        pushButton_14->setMaximumSize(QSize(70, 70));
        pushButton_14->setFont(font1);
        pushButton_14->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_14->setLayoutDirection(Qt::LeftToRight);
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_14, 0, 4, 1, 1);

        pushButton_30 = new QPushButton(centralwidget);
        pushButton_30->setObjectName(QString::fromUtf8("pushButton_30"));
        sizePolicy1.setHeightForWidth(pushButton_30->sizePolicy().hasHeightForWidth());
        pushButton_30->setSizePolicy(sizePolicy1);
        pushButton_30->setMinimumSize(QSize(70, 35));
        pushButton_30->setMaximumSize(QSize(70, 70));
        pushButton_30->setFont(font1);
        pushButton_30->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_30->setLayoutDirection(Qt::LeftToRight);
        pushButton_30->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_30, 0, 2, 1, 1);

        pushButton_29 = new QPushButton(centralwidget);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));
        sizePolicy1.setHeightForWidth(pushButton_29->sizePolicy().hasHeightForWidth());
        pushButton_29->setSizePolicy(sizePolicy1);
        pushButton_29->setMinimumSize(QSize(70, 35));
        pushButton_29->setMaximumSize(QSize(70, 70));
        pushButton_29->setFont(font1);
        pushButton_29->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_29->setLayoutDirection(Qt::LeftToRight);
        pushButton_29->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_29, 5, 0, 1, 1);

        pushButton_23 = new QPushButton(centralwidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        sizePolicy1.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy1);
        pushButton_23->setMinimumSize(QSize(70, 35));
        pushButton_23->setMaximumSize(QSize(70, 70));
        pushButton_23->setFont(font1);
        pushButton_23->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_23->setLayoutDirection(Qt::LeftToRight);
        pushButton_23->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_23, 5, 2, 1, 1);

        pushButton_31 = new QPushButton(centralwidget);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        sizePolicy1.setHeightForWidth(pushButton_31->sizePolicy().hasHeightForWidth());
        pushButton_31->setSizePolicy(sizePolicy1);
        pushButton_31->setMinimumSize(QSize(70, 35));
        pushButton_31->setMaximumSize(QSize(70, 70));
        pushButton_31->setFont(font1);
        pushButton_31->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_31->setLayoutDirection(Qt::LeftToRight);
        pushButton_31->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_31, 1, 2, 1, 1);

        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy1.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy1);
        pushButton_13->setMinimumSize(QSize(70, 35));
        pushButton_13->setMaximumSize(QSize(70, 70));
        pushButton_13->setFont(font1);
        pushButton_13->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_13->setLayoutDirection(Qt::LeftToRight);
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_13, 1, 4, 1, 1);

        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        sizePolicy1.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy1);
        pushButton_20->setMinimumSize(QSize(70, 35));
        pushButton_20->setMaximumSize(QSize(70, 70));
        pushButton_20->setFont(font1);
        pushButton_20->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_20->setLayoutDirection(Qt::LeftToRight);
        pushButton_20->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_20, 3, 3, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setMinimumSize(QSize(70, 35));
        pushButton_3->setMaximumSize(QSize(70, 70));
        pushButton_3->setFont(font1);
        pushButton_3->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_3->setLayoutDirection(Qt::LeftToRight);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(222, 179, 60), stop:1 rgb(237, 176, 53));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"	color: rgb(105, 105, 105);\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(237, 176, 53), stop:1 rgb(222, 179, 60));\n"
"	color: rgb(105, 105, 105);\n"
"}"));

        gridLayout->addWidget(pushButton_3, 1, 6, 1, 1);

        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        sizePolicy1.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy1);
        pushButton_18->setMinimumSize(QSize(70, 35));
        pushButton_18->setMaximumSize(QSize(70, 70));
        pushButton_18->setFont(font1);
        pushButton_18->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_18->setLayoutDirection(Qt::LeftToRight);
        pushButton_18->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_18, 1, 3, 1, 1);

        pushButton_34 = new QPushButton(centralwidget);
        pushButton_34->setObjectName(QString::fromUtf8("pushButton_34"));
        sizePolicy1.setHeightForWidth(pushButton_34->sizePolicy().hasHeightForWidth());
        pushButton_34->setSizePolicy(sizePolicy1);
        pushButton_34->setMinimumSize(QSize(70, 35));
        pushButton_34->setMaximumSize(QSize(70, 70));
        pushButton_34->setFont(font1);
        pushButton_34->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_34->setLayoutDirection(Qt::LeftToRight);
        pushButton_34->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_34, 1, 0, 1, 1);

        pushButton_35 = new QPushButton(centralwidget);
        pushButton_35->setObjectName(QString::fromUtf8("pushButton_35"));
        sizePolicy1.setHeightForWidth(pushButton_35->sizePolicy().hasHeightForWidth());
        pushButton_35->setSizePolicy(sizePolicy1);
        pushButton_35->setMinimumSize(QSize(70, 35));
        pushButton_35->setMaximumSize(QSize(70, 70));
        pushButton_35->setFont(font1);
        pushButton_35->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_35->setLayoutDirection(Qt::LeftToRight);
        pushButton_35->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_35, 1, 1, 1, 1);

        pushButton_22 = new QPushButton(centralwidget);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        sizePolicy1.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy1);
        pushButton_22->setMinimumSize(QSize(70, 35));
        pushButton_22->setMaximumSize(QSize(70, 70));
        pushButton_22->setFont(font1);
        pushButton_22->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_22->setLayoutDirection(Qt::LeftToRight);
        pushButton_22->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_22, 4, 2, 1, 1);

        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setMinimumSize(QSize(70, 35));
        pushButton_9->setMaximumSize(QSize(70, 70));
        pushButton_9->setFont(font1);
        pushButton_9->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_9->setLayoutDirection(Qt::LeftToRight);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_9, 0, 5, 1, 1);

        pushButton_26 = new QPushButton(centralwidget);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        sizePolicy1.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy1);
        pushButton_26->setMinimumSize(QSize(70, 35));
        pushButton_26->setMaximumSize(QSize(70, 70));
        pushButton_26->setFont(font1);
        pushButton_26->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_26->setLayoutDirection(Qt::LeftToRight);
        pushButton_26->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_26, 5, 1, 1, 1);

        pushButton_16 = new QPushButton(centralwidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy1.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy1);
        pushButton_16->setMinimumSize(QSize(70, 35));
        pushButton_16->setMaximumSize(QSize(70, 70));
        pushButton_16->setFont(font1);
        pushButton_16->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_16->setLayoutDirection(Qt::LeftToRight);
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_16, 5, 3, 1, 1);

        pushButton_15 = new QPushButton(centralwidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        sizePolicy1.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy1);
        pushButton_15->setMinimumSize(QSize(70, 35));
        pushButton_15->setMaximumSize(QSize(70, 70));
        pushButton_15->setFont(font1);
        pushButton_15->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_15->setLayoutDirection(Qt::LeftToRight);
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_15, 3, 4, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setMinimumSize(QSize(70, 35));
        pushButton_2->setMaximumSize(QSize(70, 70));
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_2->setLayoutDirection(Qt::LeftToRight);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(222, 179, 60), stop:1 rgb(237, 176, 53));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"	color: rgb(105, 105, 105);\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(237, 176, 53), stop:1 rgb(222, 179, 60));\n"
"	color: rgb(105, 105, 105);\n"
"}"));

        gridLayout->addWidget(pushButton_2, 0, 6, 1, 1);

        pushButton_32 = new QPushButton(centralwidget);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));
        sizePolicy1.setHeightForWidth(pushButton_32->sizePolicy().hasHeightForWidth());
        pushButton_32->setSizePolicy(sizePolicy1);
        pushButton_32->setMinimumSize(QSize(70, 35));
        pushButton_32->setMaximumSize(QSize(70, 70));
        pushButton_32->setFont(font1);
        pushButton_32->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_32->setLayoutDirection(Qt::LeftToRight);
        pushButton_32->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_32, 0, 0, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy1.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy1);
        pushButton_4->setMinimumSize(QSize(70, 35));
        pushButton_4->setMaximumSize(QSize(70, 70));
        pushButton_4->setFont(font1);
        pushButton_4->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_4->setLayoutDirection(Qt::LeftToRight);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(222, 179, 60), stop:1 rgb(237, 176, 53));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"	color: rgb(105, 105, 105);\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(237, 176, 53), stop:1 rgb(222, 179, 60));\n"
"	color: rgb(105, 105, 105);\n"
"}"));

        gridLayout->addWidget(pushButton_4, 3, 6, 1, 1);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        pushButton_7->setMinimumSize(QSize(70, 35));
        pushButton_7->setMaximumSize(QSize(70, 70));
        pushButton_7->setFont(font1);
        pushButton_7->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_7->setLayoutDirection(Qt::LeftToRight);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_7, 4, 5, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setMinimumSize(QSize(70, 35));
        pushButton_5->setMaximumSize(QSize(70, 70));
        pushButton_5->setFont(font1);
        pushButton_5->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_5->setLayoutDirection(Qt::LeftToRight);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(222, 179, 60), stop:1 rgb(237, 176, 53));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"	color: rgb(105, 105, 105);\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(237, 176, 53), stop:1 rgb(222, 179, 60));\n"
"	color: rgb(105, 105, 105);\n"
"}"));

        gridLayout->addWidget(pushButton_5, 4, 6, 1, 1);

        pushButton_33 = new QPushButton(centralwidget);
        pushButton_33->setObjectName(QString::fromUtf8("pushButton_33"));
        sizePolicy1.setHeightForWidth(pushButton_33->sizePolicy().hasHeightForWidth());
        pushButton_33->setSizePolicy(sizePolicy1);
        pushButton_33->setMinimumSize(QSize(70, 35));
        pushButton_33->setMaximumSize(QSize(70, 70));
        pushButton_33->setFont(font1);
        pushButton_33->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_33->setLayoutDirection(Qt::LeftToRight);
        pushButton_33->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_33, 0, 1, 1, 1);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setMinimumSize(QSize(70, 35));
        pushButton_6->setMaximumSize(QSize(70, 70));
        pushButton_6->setFont(font1);
        pushButton_6->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_6->setLayoutDirection(Qt::LeftToRight);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_6, 5, 5, 1, 1);

        pushButton_21 = new QPushButton(centralwidget);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        sizePolicy1.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy1);
        pushButton_21->setMinimumSize(QSize(70, 35));
        pushButton_21->setMaximumSize(QSize(70, 70));
        pushButton_21->setFont(font1);
        pushButton_21->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_21->setLayoutDirection(Qt::LeftToRight);
        pushButton_21->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_21, 3, 2, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy1.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy1);
        pushButton_8->setMinimumSize(QSize(70, 35));
        pushButton_8->setMaximumSize(QSize(70, 70));
        pushButton_8->setFont(font1);
        pushButton_8->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_8->setLayoutDirection(Qt::LeftToRight);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_8, 1, 5, 1, 1);

        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy1.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy1);
        pushButton_11->setMinimumSize(QSize(70, 35));
        pushButton_11->setMaximumSize(QSize(70, 70));
        pushButton_11->setFont(font1);
        pushButton_11->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_11->setLayoutDirection(Qt::LeftToRight);
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_11, 5, 4, 1, 1);

        pushButton_24 = new QPushButton(centralwidget);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        sizePolicy1.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy1);
        pushButton_24->setMinimumSize(QSize(70, 35));
        pushButton_24->setMaximumSize(QSize(70, 70));
        pushButton_24->setFont(font1);
        pushButton_24->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_24->setLayoutDirection(Qt::LeftToRight);
        pushButton_24->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_24, 3, 1, 1, 1);

        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy1.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy1);
        pushButton_12->setMinimumSize(QSize(70, 35));
        pushButton_12->setMaximumSize(QSize(70, 70));
        pushButton_12->setFont(font1);
        pushButton_12->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_12->setLayoutDirection(Qt::LeftToRight);
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_12, 4, 4, 1, 1);

        pushButton_25 = new QPushButton(centralwidget);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        sizePolicy1.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy1);
        pushButton_25->setMinimumSize(QSize(70, 35));
        pushButton_25->setMaximumSize(QSize(70, 70));
        pushButton_25->setFont(font1);
        pushButton_25->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_25->setLayoutDirection(Qt::LeftToRight);
        pushButton_25->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(101, 101, 101), stop:1 rgb(129, 129, 129));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(129, 129, 129), stop:1 rgb(101, 101, 101));\n"
"	border: 1px solid black;\n"
"}"));

        gridLayout->addWidget(pushButton_25, 4, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setMinimumSize(QSize(70, 35));
        pushButton->setMaximumSize(QSize(70, 70));
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton->setLayoutDirection(Qt::LeftToRight);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(222, 179, 60), stop:1 rgb(237, 176, 53));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"	color: rgb(105, 105, 105);\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(237, 176, 53), stop:1 rgb(222, 179, 60));\n"
"	color: rgb(105, 105, 105);\n"
"}"));

        gridLayout->addWidget(pushButton, 5, 6, 1, 1);

        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        sizePolicy1.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy1);
        pushButton_19->setMinimumSize(QSize(70, 35));
        pushButton_19->setMaximumSize(QSize(70, 70));
        pushButton_19->setFont(font1);
        pushButton_19->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_19->setLayoutDirection(Qt::LeftToRight);
        pushButton_19->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(222, 179, 60), stop:1 rgb(237, 176, 53));\n"
"	border: 1px solid grey;\n"
"	border-radius: 5px;\n"
"	margin-bottom: 5px;\n"
"	margin-top: 5px;\n"
"	color: rgb(105, 105, 105);\n"
"}\n"
"\n"
"QPushButton:pressed  {\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgb(237, 176, 53), stop:1 rgb(222, 179, 60));\n"
"	color: rgb(105, 105, 105);\n"
"}"));

        gridLayout->addWidget(pushButton_19, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        Calculator->setCentralWidget(centralwidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        label->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        pushButton_17->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        pushButton_28->setText(QCoreApplication::translate("Calculator", "asin", nullptr));
        pushButton_27->setText(QCoreApplication::translate("Calculator", "acos", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Calculator", "(", nullptr));
        pushButton_30->setText(QCoreApplication::translate("Calculator", "^", nullptr));
        pushButton_29->setText(QCoreApplication::translate("Calculator", "atan", nullptr));
        pushButton_23->setText(QCoreApplication::translate("Calculator", "log", nullptr));
        pushButton_31->setText(QCoreApplication::translate("Calculator", "mod", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        pushButton_20->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        pushButton_18->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        pushButton_34->setText(QCoreApplication::translate("Calculator", "\317\200", nullptr));
        pushButton_35->setText(QCoreApplication::translate("Calculator", "e", nullptr));
        pushButton_22->setText(QCoreApplication::translate("Calculator", "ln", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Calculator", ")", nullptr));
        pushButton_26->setText(QCoreApplication::translate("Calculator", "tan", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        pushButton_32->setText(QCoreApplication::translate("Calculator", "\306\222", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        pushButton_33->setText(QCoreApplication::translate("Calculator", "x", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Calculator", "E", nullptr));
        pushButton_21->setText(QCoreApplication::translate("Calculator", "sqrt", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        pushButton_24->setText(QCoreApplication::translate("Calculator", "cos", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        pushButton_25->setText(QCoreApplication::translate("Calculator", "sin", nullptr));
        pushButton->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        pushButton_19->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
