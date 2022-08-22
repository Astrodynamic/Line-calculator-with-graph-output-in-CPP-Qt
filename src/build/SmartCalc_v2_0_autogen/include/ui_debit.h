/********************************************************************************
** Form generated from reading UI file 'debit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBIT_H
#define UI_DEBIT_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Debit
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *vlo_main;
    QHBoxLayout *hlo_sum;
    QLabel *lbl_sum;
    QDoubleSpinBox *spn_sum;
    QLabel *lbl_sum_rub;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *hlo_limit;
    QLabel *lbl_limit;
    QSpinBox *spn_limit;
    QComboBox *cmb_limit;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *hlo_date;
    QLabel *lbl_date;
    QDateEdit *dt_start;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *hlo_percent;
    QLabel *lbl_percent_f;
    QDoubleSpinBox *spn_percent;
    QLabel *lbl_percent_b;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *hlo_period;
    QLabel *lbl_period;
    QComboBox *cmb_period;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *ckb_capital;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hlo_push;
    QLabel *lbl_refill;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btn_push;
    QVBoxLayout *vlo_push_item;
    QHBoxLayout *hlo_pull;
    QLabel *lbl_withdrawal;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btn_pull;
    QVBoxLayout *vlo_refill_item;
    QPushButton *btn_calculate;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *hlo_icharg;
    QLabel *lbl_icharg_f;
    QSpacerItem *horizontalSpacer_10;
    QLabel *lbl_icharg;
    QLabel *lbl_icharg_b;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_tax_f;
    QSpacerItem *horizontalSpacer_11;
    QLabel *lbl_tax;
    QLabel *lbl_tax_b;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_latax_f;
    QSpacerItem *horizontalSpacer_12;
    QLabel *lbl_latax;
    QLabel *lbl_latax_b;
    QHBoxLayout *hlo_erate;
    QLabel *lbl_erate_f;
    QSpacerItem *horizontalSpacer_13;
    QLabel *lbl_erate;
    QLabel *lbl_erate_b;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbl_tsum_f;
    QSpacerItem *horizontalSpacer_14;
    QLabel *lbl_tsum;
    QLabel *lbl_tsum_b;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *Debit)
    {
        if (Debit->objectName().isEmpty())
            Debit->setObjectName(QString::fromUtf8("Debit"));
        Debit->resize(590, 567);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Debit->sizePolicy().hasHeightForWidth());
        Debit->setSizePolicy(sizePolicy);
        Debit->setMinimumSize(QSize(590, 0));
        Debit->setMaximumSize(QSize(590, 16777215));
        Debit->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: rgb(38, 38, 38);\n"
"}"));
        centralwidget = new QWidget(Debit);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        vlo_main = new QVBoxLayout();
        vlo_main->setObjectName(QString::fromUtf8("vlo_main"));
        hlo_sum = new QHBoxLayout();
        hlo_sum->setObjectName(QString::fromUtf8("hlo_sum"));
        lbl_sum = new QLabel(centralwidget);
        lbl_sum->setObjectName(QString::fromUtf8("lbl_sum"));
        lbl_sum->setMinimumSize(QSize(250, 0));
        lbl_sum->setMaximumSize(QSize(250, 16777215));

        hlo_sum->addWidget(lbl_sum);

        spn_sum = new QDoubleSpinBox(centralwidget);
        spn_sum->setObjectName(QString::fromUtf8("spn_sum"));
        spn_sum->setMinimumSize(QSize(150, 0));
        spn_sum->setMaximumSize(QSize(150, 16777215));
        spn_sum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hlo_sum->addWidget(spn_sum);

        lbl_sum_rub = new QLabel(centralwidget);
        lbl_sum_rub->setObjectName(QString::fromUtf8("lbl_sum_rub"));
        lbl_sum_rub->setMinimumSize(QSize(100, 0));
        lbl_sum_rub->setMaximumSize(QSize(100, 16777215));

        hlo_sum->addWidget(lbl_sum_rub);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlo_sum->addItem(horizontalSpacer_5);


        vlo_main->addLayout(hlo_sum);

        hlo_limit = new QHBoxLayout();
        hlo_limit->setObjectName(QString::fromUtf8("hlo_limit"));
        lbl_limit = new QLabel(centralwidget);
        lbl_limit->setObjectName(QString::fromUtf8("lbl_limit"));
        lbl_limit->setMinimumSize(QSize(250, 0));
        lbl_limit->setMaximumSize(QSize(250, 16777215));

        hlo_limit->addWidget(lbl_limit);

        spn_limit = new QSpinBox(centralwidget);
        spn_limit->setObjectName(QString::fromUtf8("spn_limit"));
        spn_limit->setMinimumSize(QSize(150, 0));
        spn_limit->setMaximumSize(QSize(150, 16777215));
        spn_limit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hlo_limit->addWidget(spn_limit);

        cmb_limit = new QComboBox(centralwidget);
        cmb_limit->addItem(QString());
        cmb_limit->addItem(QString());
        cmb_limit->addItem(QString());
        cmb_limit->setObjectName(QString::fromUtf8("cmb_limit"));
        cmb_limit->setMinimumSize(QSize(100, 0));
        cmb_limit->setMaximumSize(QSize(100, 16777215));

        hlo_limit->addWidget(cmb_limit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlo_limit->addItem(horizontalSpacer_4);


        vlo_main->addLayout(hlo_limit);

        hlo_date = new QHBoxLayout();
        hlo_date->setObjectName(QString::fromUtf8("hlo_date"));
        lbl_date = new QLabel(centralwidget);
        lbl_date->setObjectName(QString::fromUtf8("lbl_date"));
        lbl_date->setMinimumSize(QSize(250, 0));
        lbl_date->setMaximumSize(QSize(250, 16777215));

        hlo_date->addWidget(lbl_date);

        dt_start = new QDateEdit(centralwidget);
        dt_start->setObjectName(QString::fromUtf8("dt_start"));
        dt_start->setMinimumSize(QSize(150, 0));
        dt_start->setMaximumSize(QSize(150, 16777215));
        dt_start->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        dt_start->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        dt_start->setMaximumDate(QDate(9999, 12, 31));
        dt_start->setMinimumDate(QDate(2022, 1, 1));
        dt_start->setCurrentSection(QDateTimeEdit::MonthSection);
        dt_start->setCalendarPopup(true);
        dt_start->setTimeSpec(Qt::LocalTime);
        dt_start->setDate(QDate(2022, 9, 14));

        hlo_date->addWidget(dt_start);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlo_date->addItem(horizontalSpacer_2);


        vlo_main->addLayout(hlo_date);

        hlo_percent = new QHBoxLayout();
        hlo_percent->setObjectName(QString::fromUtf8("hlo_percent"));
        lbl_percent_f = new QLabel(centralwidget);
        lbl_percent_f->setObjectName(QString::fromUtf8("lbl_percent_f"));
        lbl_percent_f->setMinimumSize(QSize(250, 0));
        lbl_percent_f->setMaximumSize(QSize(250, 16777215));

        hlo_percent->addWidget(lbl_percent_f);

        spn_percent = new QDoubleSpinBox(centralwidget);
        spn_percent->setObjectName(QString::fromUtf8("spn_percent"));
        spn_percent->setMinimumSize(QSize(150, 0));
        spn_percent->setMaximumSize(QSize(150, 16777215));
        spn_percent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hlo_percent->addWidget(spn_percent);

        lbl_percent_b = new QLabel(centralwidget);
        lbl_percent_b->setObjectName(QString::fromUtf8("lbl_percent_b"));
        lbl_percent_b->setMinimumSize(QSize(100, 0));
        lbl_percent_b->setMaximumSize(QSize(100, 16777215));

        hlo_percent->addWidget(lbl_percent_b);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlo_percent->addItem(horizontalSpacer_6);


        vlo_main->addLayout(hlo_percent);

        hlo_period = new QHBoxLayout();
        hlo_period->setObjectName(QString::fromUtf8("hlo_period"));
        lbl_period = new QLabel(centralwidget);
        lbl_period->setObjectName(QString::fromUtf8("lbl_period"));
        lbl_period->setMinimumSize(QSize(250, 0));
        lbl_period->setMaximumSize(QSize(250, 16777215));

        hlo_period->addWidget(lbl_period);

        cmb_period = new QComboBox(centralwidget);
        cmb_period->addItem(QString());
        cmb_period->addItem(QString());
        cmb_period->addItem(QString());
        cmb_period->addItem(QString());
        cmb_period->addItem(QString());
        cmb_period->addItem(QString());
        cmb_period->setObjectName(QString::fromUtf8("cmb_period"));
        cmb_period->setMinimumSize(QSize(150, 0));
        cmb_period->setMaximumSize(QSize(150, 16777215));

        hlo_period->addWidget(cmb_period);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlo_period->addItem(horizontalSpacer_3);


        vlo_main->addLayout(hlo_period);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ckb_capital = new QCheckBox(centralwidget);
        ckb_capital->setObjectName(QString::fromUtf8("ckb_capital"));
        ckb_capital->setMinimumSize(QSize(200, 0));
        ckb_capital->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(ckb_capital);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        vlo_main->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(vlo_main);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hlo_push = new QHBoxLayout();
        hlo_push->setObjectName(QString::fromUtf8("hlo_push"));
        lbl_refill = new QLabel(centralwidget);
        lbl_refill->setObjectName(QString::fromUtf8("lbl_refill"));
        lbl_refill->setMinimumSize(QSize(150, 0));
        lbl_refill->setMaximumSize(QSize(150, 16777215));

        hlo_push->addWidget(lbl_refill);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlo_push->addItem(horizontalSpacer_8);

        btn_push = new QPushButton(centralwidget);
        btn_push->setObjectName(QString::fromUtf8("btn_push"));
        btn_push->setMinimumSize(QSize(220, 0));
        btn_push->setMaximumSize(QSize(220, 16777215));

        hlo_push->addWidget(btn_push);


        verticalLayout->addLayout(hlo_push);

        vlo_push_item = new QVBoxLayout();
        vlo_push_item->setObjectName(QString::fromUtf8("vlo_push_item"));

        verticalLayout->addLayout(vlo_push_item);

        hlo_pull = new QHBoxLayout();
        hlo_pull->setObjectName(QString::fromUtf8("hlo_pull"));
        lbl_withdrawal = new QLabel(centralwidget);
        lbl_withdrawal->setObjectName(QString::fromUtf8("lbl_withdrawal"));
        lbl_withdrawal->setMinimumSize(QSize(150, 0));
        lbl_withdrawal->setMaximumSize(QSize(150, 16777215));

        hlo_pull->addWidget(lbl_withdrawal);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlo_pull->addItem(horizontalSpacer_9);

        btn_pull = new QPushButton(centralwidget);
        btn_pull->setObjectName(QString::fromUtf8("btn_pull"));
        btn_pull->setMinimumSize(QSize(220, 0));
        btn_pull->setMaximumSize(QSize(220, 16777215));

        hlo_pull->addWidget(btn_pull);


        verticalLayout->addLayout(hlo_pull);

        vlo_refill_item = new QVBoxLayout();
        vlo_refill_item->setObjectName(QString::fromUtf8("vlo_refill_item"));

        verticalLayout->addLayout(vlo_refill_item);


        verticalLayout_3->addLayout(verticalLayout);

        btn_calculate = new QPushButton(centralwidget);
        btn_calculate->setObjectName(QString::fromUtf8("btn_calculate"));

        verticalLayout_3->addWidget(btn_calculate);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        hlo_icharg = new QHBoxLayout();
        hlo_icharg->setObjectName(QString::fromUtf8("hlo_icharg"));
        lbl_icharg_f = new QLabel(centralwidget);
        lbl_icharg_f->setObjectName(QString::fromUtf8("lbl_icharg_f"));
        lbl_icharg_f->setMinimumSize(QSize(250, 0));
        lbl_icharg_f->setMaximumSize(QSize(250, 16777215));

        hlo_icharg->addWidget(lbl_icharg_f);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlo_icharg->addItem(horizontalSpacer_10);

        lbl_icharg = new QLabel(centralwidget);
        lbl_icharg->setObjectName(QString::fromUtf8("lbl_icharg"));
        lbl_icharg->setMinimumSize(QSize(150, 0));
        lbl_icharg->setMaximumSize(QSize(150, 16777215));
        lbl_icharg->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hlo_icharg->addWidget(lbl_icharg);

        lbl_icharg_b = new QLabel(centralwidget);
        lbl_icharg_b->setObjectName(QString::fromUtf8("lbl_icharg_b"));

        hlo_icharg->addWidget(lbl_icharg_b);


        verticalLayout_2->addLayout(hlo_icharg);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbl_tax_f = new QLabel(centralwidget);
        lbl_tax_f->setObjectName(QString::fromUtf8("lbl_tax_f"));
        lbl_tax_f->setMinimumSize(QSize(250, 0));
        lbl_tax_f->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_2->addWidget(lbl_tax_f);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);

        lbl_tax = new QLabel(centralwidget);
        lbl_tax->setObjectName(QString::fromUtf8("lbl_tax"));
        lbl_tax->setMinimumSize(QSize(150, 0));
        lbl_tax->setMaximumSize(QSize(150, 16777215));
        lbl_tax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lbl_tax);

        lbl_tax_b = new QLabel(centralwidget);
        lbl_tax_b->setObjectName(QString::fromUtf8("lbl_tax_b"));

        horizontalLayout_2->addWidget(lbl_tax_b);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lbl_latax_f = new QLabel(centralwidget);
        lbl_latax_f->setObjectName(QString::fromUtf8("lbl_latax_f"));
        lbl_latax_f->setMinimumSize(QSize(250, 0));
        lbl_latax_f->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_3->addWidget(lbl_latax_f);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);

        lbl_latax = new QLabel(centralwidget);
        lbl_latax->setObjectName(QString::fromUtf8("lbl_latax"));
        lbl_latax->setMinimumSize(QSize(150, 0));
        lbl_latax->setMaximumSize(QSize(150, 16777215));
        lbl_latax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lbl_latax);

        lbl_latax_b = new QLabel(centralwidget);
        lbl_latax_b->setObjectName(QString::fromUtf8("lbl_latax_b"));

        horizontalLayout_3->addWidget(lbl_latax_b);


        verticalLayout_2->addLayout(horizontalLayout_3);

        hlo_erate = new QHBoxLayout();
        hlo_erate->setObjectName(QString::fromUtf8("hlo_erate"));
        lbl_erate_f = new QLabel(centralwidget);
        lbl_erate_f->setObjectName(QString::fromUtf8("lbl_erate_f"));
        lbl_erate_f->setMinimumSize(QSize(250, 0));
        lbl_erate_f->setMaximumSize(QSize(250, 16777215));

        hlo_erate->addWidget(lbl_erate_f);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hlo_erate->addItem(horizontalSpacer_13);

        lbl_erate = new QLabel(centralwidget);
        lbl_erate->setObjectName(QString::fromUtf8("lbl_erate"));
        lbl_erate->setMinimumSize(QSize(150, 0));
        lbl_erate->setMaximumSize(QSize(150, 16777215));
        lbl_erate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hlo_erate->addWidget(lbl_erate);

        lbl_erate_b = new QLabel(centralwidget);
        lbl_erate_b->setObjectName(QString::fromUtf8("lbl_erate_b"));

        hlo_erate->addWidget(lbl_erate_b);


        verticalLayout_2->addLayout(hlo_erate);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lbl_tsum_f = new QLabel(centralwidget);
        lbl_tsum_f->setObjectName(QString::fromUtf8("lbl_tsum_f"));
        lbl_tsum_f->setMinimumSize(QSize(250, 0));
        lbl_tsum_f->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_4->addWidget(lbl_tsum_f);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_14);

        lbl_tsum = new QLabel(centralwidget);
        lbl_tsum->setObjectName(QString::fromUtf8("lbl_tsum"));
        lbl_tsum->setMinimumSize(QSize(150, 0));
        lbl_tsum->setMaximumSize(QSize(150, 16777215));
        lbl_tsum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(lbl_tsum);

        lbl_tsum_b = new QLabel(centralwidget);
        lbl_tsum_b->setObjectName(QString::fromUtf8("lbl_tsum_b"));

        horizontalLayout_4->addWidget(lbl_tsum_b);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        Debit->setCentralWidget(centralwidget);

        retranslateUi(Debit);

        QMetaObject::connectSlotsByName(Debit);
    } // setupUi

    void retranslateUi(QMainWindow *Debit)
    {
        Debit->setWindowTitle(QCoreApplication::translate("Debit", "Debit calculator", nullptr));
        lbl_sum->setText(QCoreApplication::translate("Debit", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260", nullptr));
        lbl_sum_rub->setText(QCoreApplication::translate("Debit", "\321\200\321\203\320\261.", nullptr));
        lbl_limit->setText(QCoreApplication::translate("Debit", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        cmb_limit->setItemText(0, QCoreApplication::translate("Debit", "\320\264\320\275\320\265\320\271", nullptr));
        cmb_limit->setItemText(1, QCoreApplication::translate("Debit", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));
        cmb_limit->setItemText(2, QCoreApplication::translate("Debit", "\320\273\320\265\321\202", nullptr));

        lbl_date->setText(QCoreApplication::translate("Debit", "\320\235\320\260\321\207\320\260\320\273\320\276 \321\201\321\200\320\276\320\272\320\260", nullptr));
        dt_start->setDisplayFormat(QCoreApplication::translate("Debit", "MM/dd/yyyy", nullptr));
        lbl_percent_f->setText(QCoreApplication::translate("Debit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        lbl_percent_b->setText(QCoreApplication::translate("Debit", "% \320\263\320\276\320\264\320\276\320\262\321\213\321\205", nullptr));
        lbl_period->setText(QCoreApplication::translate("Debit", "\320\237\320\265\321\200\320\265\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202", nullptr));
        cmb_period->setItemText(0, QCoreApplication::translate("Debit", "\320\272\320\260\320\266\320\264\321\213\320\271 \320\264\320\265\320\275\321\214", nullptr));
        cmb_period->setItemText(1, QCoreApplication::translate("Debit", "\320\272\320\260\320\266\320\264\321\203\321\216 \320\275\320\265\320\264\320\265\320\273\321\216", nullptr));
        cmb_period->setItemText(2, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        cmb_period->setItemText(3, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        cmb_period->setItemText(4, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));
        cmb_period->setItemText(5, QCoreApplication::translate("Debit", "\320\262 \320\272\320\276\320\275\321\206\320\265 \321\201\321\200\320\276\320\272\320\260", nullptr));

        ckb_capital->setText(QCoreApplication::translate("Debit", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262", nullptr));
        lbl_refill->setText(QCoreApplication::translate("Debit", "\320\237\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", nullptr));
        btn_push->setText(QCoreApplication::translate("Debit", "+ \320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\265", nullptr));
        lbl_withdrawal->setText(QCoreApplication::translate("Debit", "\320\247\320\260\321\201\321\202\320\270\321\207\320\275\321\213\320\265 \321\201\320\275\321\217\321\202\320\270\321\217", nullptr));
        btn_pull->setText(QCoreApplication::translate("Debit", "+ \320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\275\321\217\321\202\320\270\320\265", nullptr));
        btn_calculate->setText(QCoreApplication::translate("Debit", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        lbl_icharg_f->setText(QCoreApplication::translate("Debit", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        lbl_icharg->setText(QCoreApplication::translate("Debit", "0", nullptr));
        lbl_icharg_b->setText(QCoreApplication::translate("Debit", "\321\200\321\203\320\261.", nullptr));
        lbl_tax_f->setText(QCoreApplication::translate("Debit", "\320\235\320\260\320\273\320\276\320\263", nullptr));
        lbl_tax->setText(QCoreApplication::translate("Debit", "0", nullptr));
        lbl_tax_b->setText(QCoreApplication::translate("Debit", "\321\200\321\203\320\261.", nullptr));
        lbl_latax_f->setText(QCoreApplication::translate("Debit", "\320\224\320\276\321\205\320\276\320\264 \320\267\320\260 \320\262\321\213\321\207\320\265\321\202\320\276\320\274 \320\275\320\260\320\273\320\276\320\263\320\276\320\262", nullptr));
        lbl_latax->setText(QCoreApplication::translate("Debit", "0", nullptr));
        lbl_latax_b->setText(QCoreApplication::translate("Debit", "\321\200\321\203\320\261.", nullptr));
        lbl_erate_f->setText(QCoreApplication::translate("Debit", "\320\255\321\204\321\204\320\265\320\272\321\202\320\270\320\262\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        lbl_erate->setText(QCoreApplication::translate("Debit", "0", nullptr));
        lbl_erate_b->setText(QCoreApplication::translate("Debit", "\321\200\321\203\320\261.", nullptr));
        lbl_tsum_f->setText(QCoreApplication::translate("Debit", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260 \320\262\320\272\320\273\320\260\320\264\320\265 \320\272 \320\272\320\276\320\275\321\206\321\203 \321\201\321\200\320\276\320\272\320\260", nullptr));
        lbl_tsum->setText(QCoreApplication::translate("Debit", "0", nullptr));
        lbl_tsum_b->setText(QCoreApplication::translate("Debit", "\321\200\321\203\320\261.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Debit: public Ui_Debit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBIT_H
