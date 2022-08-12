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
#include <QtWidgets/QButtonGroup>
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
    QLabel *display;
    QGridLayout *gridLayout;
    QPushButton *btn_1;
    QPushButton *btn_6;
    QPushButton *btn_asin;
    QPushButton *btn_acos;
    QPushButton *btn_oparenth;
    QPushButton *btn_exp;
    QPushButton *btn_atan;
    QPushButton *btn_log;
    QPushButton *btn_mod;
    QPushButton *btn_8;
    QPushButton *btn_4;
    QPushButton *btn_mul;
    QPushButton *btn_7;
    QPushButton *btn_pi;
    QPushButton *btn_e;
    QPushButton *btn_ln;
    QPushButton *btn_cparenth;
    QPushButton *btn_tan;
    QPushButton *btn_0;
    QPushButton *btn_5;
    QPushButton *btn_div;
    QPushButton *btn_function;
    QPushButton *btn_sub;
    QPushButton *btn_3;
    QPushButton *btn_sum;
    QPushButton *btn_x;
    QPushButton *btn_E;
    QPushButton *btn_sqrt;
    QPushButton *btn_9;
    QPushButton *btn_dot;
    QPushButton *btn_cos;
    QPushButton *btn_2;
    QPushButton *btn_sin;
    QPushButton *btn_equal;
    QPushButton *btn_clean;
    QButtonGroup *btn_print_group;

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
        display = new QLabel(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy);
        display->setMinimumSize(QSize(0, 35));
        display->setMaximumSize(QSize(16777215, 35));
        display->setCursor(QCursor(Qt::ForbiddenCursor));
        display->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	border: 1px solid rgb(107, 107, 107);\n"
"	background-color: rgb(49, 49, 49);\n"
"	border-radius: 3px;\n"
"}"));
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        display->setIndent(5);

        verticalLayout->addWidget(display);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        btn_1 = new QPushButton(centralwidget);
        btn_print_group = new QButtonGroup(Calculator);
        btn_print_group->setObjectName(QString::fromUtf8("btn_print_group"));
        btn_print_group->addButton(btn_1);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy1);
        btn_1->setMinimumSize(QSize(70, 35));
        btn_1->setMaximumSize(QSize(70, 70));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(10);
        btn_1->setFont(font1);
        btn_1->setCursor(QCursor(Qt::OpenHandCursor));
        btn_1->setLayoutDirection(Qt::LeftToRight);
        btn_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_1, 4, 3, 1, 1);

        btn_6 = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_6);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        sizePolicy1.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy1);
        btn_6->setMinimumSize(QSize(70, 35));
        btn_6->setMaximumSize(QSize(70, 70));
        btn_6->setFont(font1);
        btn_6->setCursor(QCursor(Qt::OpenHandCursor));
        btn_6->setLayoutDirection(Qt::LeftToRight);
        btn_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_6, 3, 5, 1, 1);

        btn_asin = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_asin);
        btn_asin->setObjectName(QString::fromUtf8("btn_asin"));
        sizePolicy1.setHeightForWidth(btn_asin->sizePolicy().hasHeightForWidth());
        btn_asin->setSizePolicy(sizePolicy1);
        btn_asin->setMinimumSize(QSize(70, 35));
        btn_asin->setMaximumSize(QSize(70, 70));
        btn_asin->setFont(font1);
        btn_asin->setCursor(QCursor(Qt::OpenHandCursor));
        btn_asin->setLayoutDirection(Qt::LeftToRight);
        btn_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_asin, 4, 0, 1, 1);

        btn_acos = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_acos);
        btn_acos->setObjectName(QString::fromUtf8("btn_acos"));
        sizePolicy1.setHeightForWidth(btn_acos->sizePolicy().hasHeightForWidth());
        btn_acos->setSizePolicy(sizePolicy1);
        btn_acos->setMinimumSize(QSize(70, 35));
        btn_acos->setMaximumSize(QSize(70, 70));
        btn_acos->setFont(font1);
        btn_acos->setCursor(QCursor(Qt::OpenHandCursor));
        btn_acos->setLayoutDirection(Qt::LeftToRight);
        btn_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_acos, 3, 0, 1, 1);

        btn_oparenth = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_oparenth);
        btn_oparenth->setObjectName(QString::fromUtf8("btn_oparenth"));
        sizePolicy1.setHeightForWidth(btn_oparenth->sizePolicy().hasHeightForWidth());
        btn_oparenth->setSizePolicy(sizePolicy1);
        btn_oparenth->setMinimumSize(QSize(70, 35));
        btn_oparenth->setMaximumSize(QSize(70, 70));
        btn_oparenth->setFont(font1);
        btn_oparenth->setCursor(QCursor(Qt::OpenHandCursor));
        btn_oparenth->setLayoutDirection(Qt::LeftToRight);
        btn_oparenth->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_oparenth, 0, 4, 1, 1);

        btn_exp = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_exp);
        btn_exp->setObjectName(QString::fromUtf8("btn_exp"));
        sizePolicy1.setHeightForWidth(btn_exp->sizePolicy().hasHeightForWidth());
        btn_exp->setSizePolicy(sizePolicy1);
        btn_exp->setMinimumSize(QSize(70, 35));
        btn_exp->setMaximumSize(QSize(70, 70));
        btn_exp->setFont(font1);
        btn_exp->setCursor(QCursor(Qt::OpenHandCursor));
        btn_exp->setLayoutDirection(Qt::LeftToRight);
        btn_exp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_exp, 0, 2, 1, 1);

        btn_atan = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_atan);
        btn_atan->setObjectName(QString::fromUtf8("btn_atan"));
        sizePolicy1.setHeightForWidth(btn_atan->sizePolicy().hasHeightForWidth());
        btn_atan->setSizePolicy(sizePolicy1);
        btn_atan->setMinimumSize(QSize(70, 35));
        btn_atan->setMaximumSize(QSize(70, 70));
        btn_atan->setFont(font1);
        btn_atan->setCursor(QCursor(Qt::OpenHandCursor));
        btn_atan->setLayoutDirection(Qt::LeftToRight);
        btn_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_atan, 5, 0, 1, 1);

        btn_log = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_log);
        btn_log->setObjectName(QString::fromUtf8("btn_log"));
        sizePolicy1.setHeightForWidth(btn_log->sizePolicy().hasHeightForWidth());
        btn_log->setSizePolicy(sizePolicy1);
        btn_log->setMinimumSize(QSize(70, 35));
        btn_log->setMaximumSize(QSize(70, 70));
        btn_log->setFont(font1);
        btn_log->setCursor(QCursor(Qt::OpenHandCursor));
        btn_log->setLayoutDirection(Qt::LeftToRight);
        btn_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_log, 5, 2, 1, 1);

        btn_mod = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_mod);
        btn_mod->setObjectName(QString::fromUtf8("btn_mod"));
        sizePolicy1.setHeightForWidth(btn_mod->sizePolicy().hasHeightForWidth());
        btn_mod->setSizePolicy(sizePolicy1);
        btn_mod->setMinimumSize(QSize(70, 35));
        btn_mod->setMaximumSize(QSize(70, 70));
        btn_mod->setFont(font1);
        btn_mod->setCursor(QCursor(Qt::OpenHandCursor));
        btn_mod->setLayoutDirection(Qt::LeftToRight);
        btn_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_mod, 1, 2, 1, 1);

        btn_8 = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_8);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        sizePolicy1.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy1);
        btn_8->setMinimumSize(QSize(70, 35));
        btn_8->setMaximumSize(QSize(70, 70));
        btn_8->setFont(font1);
        btn_8->setCursor(QCursor(Qt::OpenHandCursor));
        btn_8->setLayoutDirection(Qt::LeftToRight);
        btn_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_8, 1, 4, 1, 1);

        btn_4 = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_4);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        sizePolicy1.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy1);
        btn_4->setMinimumSize(QSize(70, 35));
        btn_4->setMaximumSize(QSize(70, 70));
        btn_4->setFont(font1);
        btn_4->setCursor(QCursor(Qt::OpenHandCursor));
        btn_4->setLayoutDirection(Qt::LeftToRight);
        btn_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_4, 3, 3, 1, 1);

        btn_mul = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_mul);
        btn_mul->setObjectName(QString::fromUtf8("btn_mul"));
        sizePolicy1.setHeightForWidth(btn_mul->sizePolicy().hasHeightForWidth());
        btn_mul->setSizePolicy(sizePolicy1);
        btn_mul->setMinimumSize(QSize(70, 35));
        btn_mul->setMaximumSize(QSize(70, 70));
        btn_mul->setFont(font1);
        btn_mul->setCursor(QCursor(Qt::OpenHandCursor));
        btn_mul->setLayoutDirection(Qt::LeftToRight);
        btn_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_mul, 1, 6, 1, 1);

        btn_7 = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_7);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        sizePolicy1.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy1);
        btn_7->setMinimumSize(QSize(70, 35));
        btn_7->setMaximumSize(QSize(70, 70));
        btn_7->setFont(font1);
        btn_7->setCursor(QCursor(Qt::OpenHandCursor));
        btn_7->setLayoutDirection(Qt::LeftToRight);
        btn_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_7, 1, 3, 1, 1);

        btn_pi = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_pi);
        btn_pi->setObjectName(QString::fromUtf8("btn_pi"));
        sizePolicy1.setHeightForWidth(btn_pi->sizePolicy().hasHeightForWidth());
        btn_pi->setSizePolicy(sizePolicy1);
        btn_pi->setMinimumSize(QSize(70, 35));
        btn_pi->setMaximumSize(QSize(70, 70));
        btn_pi->setFont(font1);
        btn_pi->setCursor(QCursor(Qt::OpenHandCursor));
        btn_pi->setLayoutDirection(Qt::LeftToRight);
        btn_pi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_pi, 1, 0, 1, 1);

        btn_e = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_e);
        btn_e->setObjectName(QString::fromUtf8("btn_e"));
        sizePolicy1.setHeightForWidth(btn_e->sizePolicy().hasHeightForWidth());
        btn_e->setSizePolicy(sizePolicy1);
        btn_e->setMinimumSize(QSize(70, 35));
        btn_e->setMaximumSize(QSize(70, 70));
        btn_e->setFont(font1);
        btn_e->setCursor(QCursor(Qt::OpenHandCursor));
        btn_e->setLayoutDirection(Qt::LeftToRight);
        btn_e->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_e, 1, 1, 1, 1);

        btn_ln = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_ln);
        btn_ln->setObjectName(QString::fromUtf8("btn_ln"));
        sizePolicy1.setHeightForWidth(btn_ln->sizePolicy().hasHeightForWidth());
        btn_ln->setSizePolicy(sizePolicy1);
        btn_ln->setMinimumSize(QSize(70, 35));
        btn_ln->setMaximumSize(QSize(70, 70));
        btn_ln->setFont(font1);
        btn_ln->setCursor(QCursor(Qt::OpenHandCursor));
        btn_ln->setLayoutDirection(Qt::LeftToRight);
        btn_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_ln, 4, 2, 1, 1);

        btn_cparenth = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_cparenth);
        btn_cparenth->setObjectName(QString::fromUtf8("btn_cparenth"));
        sizePolicy1.setHeightForWidth(btn_cparenth->sizePolicy().hasHeightForWidth());
        btn_cparenth->setSizePolicy(sizePolicy1);
        btn_cparenth->setMinimumSize(QSize(70, 35));
        btn_cparenth->setMaximumSize(QSize(70, 70));
        btn_cparenth->setFont(font1);
        btn_cparenth->setCursor(QCursor(Qt::OpenHandCursor));
        btn_cparenth->setLayoutDirection(Qt::LeftToRight);
        btn_cparenth->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_cparenth, 0, 5, 1, 1);

        btn_tan = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_tan);
        btn_tan->setObjectName(QString::fromUtf8("btn_tan"));
        sizePolicy1.setHeightForWidth(btn_tan->sizePolicy().hasHeightForWidth());
        btn_tan->setSizePolicy(sizePolicy1);
        btn_tan->setMinimumSize(QSize(70, 35));
        btn_tan->setMaximumSize(QSize(70, 70));
        btn_tan->setFont(font1);
        btn_tan->setCursor(QCursor(Qt::OpenHandCursor));
        btn_tan->setLayoutDirection(Qt::LeftToRight);
        btn_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_tan, 5, 1, 1, 1);

        btn_0 = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_0);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        sizePolicy1.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy1);
        btn_0->setMinimumSize(QSize(70, 35));
        btn_0->setMaximumSize(QSize(70, 70));
        btn_0->setFont(font1);
        btn_0->setCursor(QCursor(Qt::OpenHandCursor));
        btn_0->setLayoutDirection(Qt::LeftToRight);
        btn_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_0, 5, 3, 1, 1);

        btn_5 = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_5);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        sizePolicy1.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy1);
        btn_5->setMinimumSize(QSize(70, 35));
        btn_5->setMaximumSize(QSize(70, 70));
        btn_5->setFont(font1);
        btn_5->setCursor(QCursor(Qt::OpenHandCursor));
        btn_5->setLayoutDirection(Qt::LeftToRight);
        btn_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_5, 3, 4, 1, 1);

        btn_div = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_div);
        btn_div->setObjectName(QString::fromUtf8("btn_div"));
        sizePolicy1.setHeightForWidth(btn_div->sizePolicy().hasHeightForWidth());
        btn_div->setSizePolicy(sizePolicy1);
        btn_div->setMinimumSize(QSize(70, 35));
        btn_div->setMaximumSize(QSize(70, 70));
        btn_div->setFont(font1);
        btn_div->setCursor(QCursor(Qt::OpenHandCursor));
        btn_div->setLayoutDirection(Qt::LeftToRight);
        btn_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_div, 0, 6, 1, 1);

        btn_function = new QPushButton(centralwidget);
        btn_function->setObjectName(QString::fromUtf8("btn_function"));
        sizePolicy1.setHeightForWidth(btn_function->sizePolicy().hasHeightForWidth());
        btn_function->setSizePolicy(sizePolicy1);
        btn_function->setMinimumSize(QSize(70, 35));
        btn_function->setMaximumSize(QSize(70, 70));
        btn_function->setFont(font1);
        btn_function->setCursor(QCursor(Qt::OpenHandCursor));
        btn_function->setLayoutDirection(Qt::LeftToRight);
        btn_function->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_function, 0, 0, 1, 1);

        btn_sub = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_sub);
        btn_sub->setObjectName(QString::fromUtf8("btn_sub"));
        sizePolicy1.setHeightForWidth(btn_sub->sizePolicy().hasHeightForWidth());
        btn_sub->setSizePolicy(sizePolicy1);
        btn_sub->setMinimumSize(QSize(70, 35));
        btn_sub->setMaximumSize(QSize(70, 70));
        btn_sub->setFont(font1);
        btn_sub->setCursor(QCursor(Qt::OpenHandCursor));
        btn_sub->setLayoutDirection(Qt::LeftToRight);
        btn_sub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_sub, 3, 6, 1, 1);

        btn_3 = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_3);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        sizePolicy1.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy1);
        btn_3->setMinimumSize(QSize(70, 35));
        btn_3->setMaximumSize(QSize(70, 70));
        btn_3->setFont(font1);
        btn_3->setCursor(QCursor(Qt::OpenHandCursor));
        btn_3->setLayoutDirection(Qt::LeftToRight);
        btn_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_3, 4, 5, 1, 1);

        btn_sum = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_sum);
        btn_sum->setObjectName(QString::fromUtf8("btn_sum"));
        sizePolicy1.setHeightForWidth(btn_sum->sizePolicy().hasHeightForWidth());
        btn_sum->setSizePolicy(sizePolicy1);
        btn_sum->setMinimumSize(QSize(70, 35));
        btn_sum->setMaximumSize(QSize(70, 70));
        btn_sum->setFont(font1);
        btn_sum->setCursor(QCursor(Qt::OpenHandCursor));
        btn_sum->setLayoutDirection(Qt::LeftToRight);
        btn_sum->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_sum, 4, 6, 1, 1);

        btn_x = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_x);
        btn_x->setObjectName(QString::fromUtf8("btn_x"));
        sizePolicy1.setHeightForWidth(btn_x->sizePolicy().hasHeightForWidth());
        btn_x->setSizePolicy(sizePolicy1);
        btn_x->setMinimumSize(QSize(70, 35));
        btn_x->setMaximumSize(QSize(70, 70));
        btn_x->setFont(font1);
        btn_x->setCursor(QCursor(Qt::OpenHandCursor));
        btn_x->setLayoutDirection(Qt::LeftToRight);
        btn_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_x, 0, 1, 1, 1);

        btn_E = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_E);
        btn_E->setObjectName(QString::fromUtf8("btn_E"));
        sizePolicy1.setHeightForWidth(btn_E->sizePolicy().hasHeightForWidth());
        btn_E->setSizePolicy(sizePolicy1);
        btn_E->setMinimumSize(QSize(70, 35));
        btn_E->setMaximumSize(QSize(70, 70));
        btn_E->setFont(font1);
        btn_E->setCursor(QCursor(Qt::OpenHandCursor));
        btn_E->setLayoutDirection(Qt::LeftToRight);
        btn_E->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_E, 5, 5, 1, 1);

        btn_sqrt = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_sqrt);
        btn_sqrt->setObjectName(QString::fromUtf8("btn_sqrt"));
        sizePolicy1.setHeightForWidth(btn_sqrt->sizePolicy().hasHeightForWidth());
        btn_sqrt->setSizePolicy(sizePolicy1);
        btn_sqrt->setMinimumSize(QSize(70, 35));
        btn_sqrt->setMaximumSize(QSize(70, 70));
        btn_sqrt->setFont(font1);
        btn_sqrt->setCursor(QCursor(Qt::OpenHandCursor));
        btn_sqrt->setLayoutDirection(Qt::LeftToRight);
        btn_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_sqrt, 3, 2, 1, 1);

        btn_9 = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_9);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        sizePolicy1.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy1);
        btn_9->setMinimumSize(QSize(70, 35));
        btn_9->setMaximumSize(QSize(70, 70));
        btn_9->setFont(font1);
        btn_9->setCursor(QCursor(Qt::OpenHandCursor));
        btn_9->setLayoutDirection(Qt::LeftToRight);
        btn_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_9, 1, 5, 1, 1);

        btn_dot = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_dot);
        btn_dot->setObjectName(QString::fromUtf8("btn_dot"));
        sizePolicy1.setHeightForWidth(btn_dot->sizePolicy().hasHeightForWidth());
        btn_dot->setSizePolicy(sizePolicy1);
        btn_dot->setMinimumSize(QSize(70, 35));
        btn_dot->setMaximumSize(QSize(70, 70));
        btn_dot->setFont(font1);
        btn_dot->setCursor(QCursor(Qt::OpenHandCursor));
        btn_dot->setLayoutDirection(Qt::LeftToRight);
        btn_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_dot, 5, 4, 1, 1);

        btn_cos = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_cos);
        btn_cos->setObjectName(QString::fromUtf8("btn_cos"));
        sizePolicy1.setHeightForWidth(btn_cos->sizePolicy().hasHeightForWidth());
        btn_cos->setSizePolicy(sizePolicy1);
        btn_cos->setMinimumSize(QSize(70, 35));
        btn_cos->setMaximumSize(QSize(70, 70));
        btn_cos->setFont(font1);
        btn_cos->setCursor(QCursor(Qt::OpenHandCursor));
        btn_cos->setLayoutDirection(Qt::LeftToRight);
        btn_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_cos, 3, 1, 1, 1);

        btn_2 = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_2);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        sizePolicy1.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy1);
        btn_2->setMinimumSize(QSize(70, 35));
        btn_2->setMaximumSize(QSize(70, 70));
        btn_2->setFont(font1);
        btn_2->setCursor(QCursor(Qt::OpenHandCursor));
        btn_2->setLayoutDirection(Qt::LeftToRight);
        btn_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_2, 4, 4, 1, 1);

        btn_sin = new QPushButton(centralwidget);
        btn_print_group->addButton(btn_sin);
        btn_sin->setObjectName(QString::fromUtf8("btn_sin"));
        sizePolicy1.setHeightForWidth(btn_sin->sizePolicy().hasHeightForWidth());
        btn_sin->setSizePolicy(sizePolicy1);
        btn_sin->setMinimumSize(QSize(70, 35));
        btn_sin->setMaximumSize(QSize(70, 70));
        btn_sin->setFont(font1);
        btn_sin->setCursor(QCursor(Qt::OpenHandCursor));
        btn_sin->setLayoutDirection(Qt::LeftToRight);
        btn_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_sin, 4, 1, 1, 1);

        btn_equal = new QPushButton(centralwidget);
        btn_equal->setObjectName(QString::fromUtf8("btn_equal"));
        sizePolicy1.setHeightForWidth(btn_equal->sizePolicy().hasHeightForWidth());
        btn_equal->setSizePolicy(sizePolicy1);
        btn_equal->setMinimumSize(QSize(70, 35));
        btn_equal->setMaximumSize(QSize(70, 70));
        btn_equal->setFont(font1);
        btn_equal->setCursor(QCursor(Qt::OpenHandCursor));
        btn_equal->setLayoutDirection(Qt::LeftToRight);
        btn_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_equal, 5, 6, 1, 1);

        btn_clean = new QPushButton(centralwidget);
        btn_clean->setObjectName(QString::fromUtf8("btn_clean"));
        sizePolicy1.setHeightForWidth(btn_clean->sizePolicy().hasHeightForWidth());
        btn_clean->setSizePolicy(sizePolicy1);
        btn_clean->setMinimumSize(QSize(70, 35));
        btn_clean->setMaximumSize(QSize(70, 70));
        btn_clean->setFont(font1);
        btn_clean->setCursor(QCursor(Qt::OpenHandCursor));
        btn_clean->setLayoutDirection(Qt::LeftToRight);
        btn_clean->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(btn_clean, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        Calculator->setCentralWidget(centralwidget);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        display->setText(QString());
        btn_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        btn_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        btn_asin->setText(QCoreApplication::translate("Calculator", "asin", nullptr));
        btn_acos->setText(QCoreApplication::translate("Calculator", "acos", nullptr));
        btn_oparenth->setText(QCoreApplication::translate("Calculator", "(", nullptr));
        btn_exp->setText(QCoreApplication::translate("Calculator", "^", nullptr));
        btn_atan->setText(QCoreApplication::translate("Calculator", "atan", nullptr));
        btn_log->setText(QCoreApplication::translate("Calculator", "log", nullptr));
        btn_mod->setText(QCoreApplication::translate("Calculator", "mod", nullptr));
        btn_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        btn_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        btn_mul->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        btn_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        btn_pi->setText(QCoreApplication::translate("Calculator", "p", nullptr));
        btn_e->setText(QCoreApplication::translate("Calculator", "e", nullptr));
        btn_ln->setText(QCoreApplication::translate("Calculator", "ln", nullptr));
        btn_cparenth->setText(QCoreApplication::translate("Calculator", ")", nullptr));
        btn_tan->setText(QCoreApplication::translate("Calculator", "tan", nullptr));
        btn_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        btn_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        btn_div->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        btn_function->setText(QCoreApplication::translate("Calculator", "\306\222", nullptr));
        btn_sub->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        btn_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        btn_sum->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        btn_x->setText(QCoreApplication::translate("Calculator", "x", nullptr));
        btn_E->setText(QCoreApplication::translate("Calculator", "E", nullptr));
        btn_sqrt->setText(QCoreApplication::translate("Calculator", "sqrt", nullptr));
        btn_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        btn_dot->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        btn_cos->setText(QCoreApplication::translate("Calculator", "cos", nullptr));
        btn_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        btn_sin->setText(QCoreApplication::translate("Calculator", "sin", nullptr));
        btn_equal->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        btn_clean->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
