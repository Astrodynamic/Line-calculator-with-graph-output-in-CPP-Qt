/********************************************************************************
** Form generated from reading UI file 'debit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBIT_H
#define UI_DEBIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Debit
{
public:
    QWidget *centralwidget;
    QCheckBox *ckb_capital;
    QLabel *lbl_refill;
    QLabel *lbl_withdrawal;
    QWidget *widget;
    QHBoxLayout *hlo_sum;
    QLabel *lbl_sum;
    QDoubleSpinBox *spn_sum;
    QLabel *lbl_sum_rub;
    QWidget *widget1;
    QHBoxLayout *hlo_limit;
    QLabel *lbl_limit;
    QSpinBox *spn_limit;
    QComboBox *cmb_limit;
    QWidget *widget2;
    QHBoxLayout *hlo_date;
    QLabel *lbl_date;
    QDateEdit *dt_start;
    QWidget *widget3;
    QHBoxLayout *hlo_percent;
    QLabel *lbl_percent_f;
    QDoubleSpinBox *spn_percent;
    QLabel *lbl_percent_b;
    QWidget *widget4;
    QHBoxLayout *hlo_period;
    QLabel *lbl_period;
    QComboBox *cmb_period;

    void setupUi(QMainWindow *Debit)
    {
        if (Debit->objectName().isEmpty())
            Debit->setObjectName(QString::fromUtf8("Debit"));
        Debit->resize(800, 600);
        Debit->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: rgb(38, 38, 38);\n"
"}"));
        centralwidget = new QWidget(Debit);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ckb_capital = new QCheckBox(centralwidget);
        ckb_capital->setObjectName(QString::fromUtf8("ckb_capital"));
        ckb_capital->setGeometry(QRect(210, 380, 200, 20));
        ckb_capital->setMinimumSize(QSize(200, 0));
        ckb_capital->setMaximumSize(QSize(200, 16777215));
        lbl_refill = new QLabel(centralwidget);
        lbl_refill->setObjectName(QString::fromUtf8("lbl_refill"));
        lbl_refill->setGeometry(QRect(40, 430, 150, 21));
        lbl_refill->setMinimumSize(QSize(150, 0));
        lbl_refill->setMaximumSize(QSize(150, 16777215));
        lbl_withdrawal = new QLabel(centralwidget);
        lbl_withdrawal->setObjectName(QString::fromUtf8("lbl_withdrawal"));
        lbl_withdrawal->setGeometry(QRect(40, 480, 150, 21));
        lbl_withdrawal->setMinimumSize(QSize(150, 0));
        lbl_withdrawal->setMaximumSize(QSize(150, 16777215));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 40, 340, 23));
        hlo_sum = new QHBoxLayout(widget);
        hlo_sum->setObjectName(QString::fromUtf8("hlo_sum"));
        hlo_sum->setContentsMargins(0, 0, 0, 0);
        lbl_sum = new QLabel(widget);
        lbl_sum->setObjectName(QString::fromUtf8("lbl_sum"));
        lbl_sum->setMinimumSize(QSize(150, 0));
        lbl_sum->setMaximumSize(QSize(150, 16777215));

        hlo_sum->addWidget(lbl_sum);

        spn_sum = new QDoubleSpinBox(widget);
        spn_sum->setObjectName(QString::fromUtf8("spn_sum"));
        spn_sum->setMinimumSize(QSize(100, 0));
        spn_sum->setMaximumSize(QSize(100, 16777215));

        hlo_sum->addWidget(spn_sum);

        lbl_sum_rub = new QLabel(widget);
        lbl_sum_rub->setObjectName(QString::fromUtf8("lbl_sum_rub"));
        lbl_sum_rub->setMinimumSize(QSize(70, 0));
        lbl_sum_rub->setMaximumSize(QSize(70, 16777215));

        hlo_sum->addWidget(lbl_sum_rub);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 110, 336, 32));
        hlo_limit = new QHBoxLayout(widget1);
        hlo_limit->setObjectName(QString::fromUtf8("hlo_limit"));
        hlo_limit->setContentsMargins(0, 0, 0, 0);
        lbl_limit = new QLabel(widget1);
        lbl_limit->setObjectName(QString::fromUtf8("lbl_limit"));
        lbl_limit->setMinimumSize(QSize(150, 0));
        lbl_limit->setMaximumSize(QSize(150, 16777215));

        hlo_limit->addWidget(lbl_limit);

        spn_limit = new QSpinBox(widget1);
        spn_limit->setObjectName(QString::fromUtf8("spn_limit"));
        spn_limit->setMinimumSize(QSize(100, 0));
        spn_limit->setMaximumSize(QSize(100, 16777215));

        hlo_limit->addWidget(spn_limit);

        cmb_limit = new QComboBox(widget1);
        cmb_limit->addItem(QString());
        cmb_limit->addItem(QString());
        cmb_limit->addItem(QString());
        cmb_limit->setObjectName(QString::fromUtf8("cmb_limit"));
        cmb_limit->setMinimumSize(QSize(70, 0));
        cmb_limit->setMaximumSize(QSize(70, 16777215));

        hlo_limit->addWidget(cmb_limit);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(30, 170, 260, 23));
        hlo_date = new QHBoxLayout(widget2);
        hlo_date->setObjectName(QString::fromUtf8("hlo_date"));
        hlo_date->setContentsMargins(0, 0, 0, 0);
        lbl_date = new QLabel(widget2);
        lbl_date->setObjectName(QString::fromUtf8("lbl_date"));
        lbl_date->setMinimumSize(QSize(150, 0));
        lbl_date->setMaximumSize(QSize(150, 16777215));

        hlo_date->addWidget(lbl_date);

        dt_start = new QDateEdit(widget2);
        dt_start->setObjectName(QString::fromUtf8("dt_start"));
        dt_start->setMinimumSize(QSize(100, 0));
        dt_start->setMaximumSize(QSize(100, 16777215));

        hlo_date->addWidget(dt_start);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(30, 250, 340, 23));
        hlo_percent = new QHBoxLayout(widget3);
        hlo_percent->setObjectName(QString::fromUtf8("hlo_percent"));
        hlo_percent->setContentsMargins(0, 0, 0, 0);
        lbl_percent_f = new QLabel(widget3);
        lbl_percent_f->setObjectName(QString::fromUtf8("lbl_percent_f"));
        lbl_percent_f->setMinimumSize(QSize(150, 0));
        lbl_percent_f->setMaximumSize(QSize(150, 16777215));

        hlo_percent->addWidget(lbl_percent_f);

        spn_percent = new QDoubleSpinBox(widget3);
        spn_percent->setObjectName(QString::fromUtf8("spn_percent"));
        spn_percent->setMinimumSize(QSize(100, 0));
        spn_percent->setMaximumSize(QSize(100, 16777215));

        hlo_percent->addWidget(spn_percent);

        lbl_percent_b = new QLabel(widget3);
        lbl_percent_b->setObjectName(QString::fromUtf8("lbl_percent_b"));
        lbl_percent_b->setMinimumSize(QSize(70, 0));
        lbl_percent_b->setMaximumSize(QSize(70, 16777215));

        hlo_percent->addWidget(lbl_percent_b);

        widget4 = new QWidget(centralwidget);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(30, 330, 306, 32));
        hlo_period = new QHBoxLayout(widget4);
        hlo_period->setObjectName(QString::fromUtf8("hlo_period"));
        hlo_period->setContentsMargins(0, 0, 0, 0);
        lbl_period = new QLabel(widget4);
        lbl_period->setObjectName(QString::fromUtf8("lbl_period"));
        lbl_period->setMinimumSize(QSize(150, 0));
        lbl_period->setMaximumSize(QSize(150, 16777215));

        hlo_period->addWidget(lbl_period);

        cmb_period = new QComboBox(widget4);
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

        Debit->setCentralWidget(centralwidget);

        retranslateUi(Debit);

        QMetaObject::connectSlotsByName(Debit);
    } // setupUi

    void retranslateUi(QMainWindow *Debit)
    {
        Debit->setWindowTitle(QCoreApplication::translate("Debit", "Debit calculator", nullptr));
        ckb_capital->setText(QCoreApplication::translate("Debit", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262", nullptr));
        lbl_refill->setText(QCoreApplication::translate("Debit", "\320\237\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", nullptr));
        lbl_withdrawal->setText(QCoreApplication::translate("Debit", "\320\247\320\260\321\201\321\202\320\270\321\207\320\275\321\213\320\265 \321\201\320\275\321\217\321\202\320\270\321\217", nullptr));
        lbl_sum->setText(QCoreApplication::translate("Debit", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260", nullptr));
        lbl_sum_rub->setText(QCoreApplication::translate("Debit", "\321\200\321\203\320\261.", nullptr));
        lbl_limit->setText(QCoreApplication::translate("Debit", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        cmb_limit->setItemText(0, QCoreApplication::translate("Debit", "\320\264\320\275\320\265\320\271", nullptr));
        cmb_limit->setItemText(1, QCoreApplication::translate("Debit", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));
        cmb_limit->setItemText(2, QCoreApplication::translate("Debit", "\320\273\320\265\321\202", nullptr));

        lbl_date->setText(QCoreApplication::translate("Debit", "\320\235\320\260\321\207\320\260\320\273\320\276 \321\201\321\200\320\276\320\272\320\260", nullptr));
        lbl_percent_f->setText(QCoreApplication::translate("Debit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        lbl_percent_b->setText(QCoreApplication::translate("Debit", "% \320\263\320\276\320\264\320\276\320\262\321\213\321\205", nullptr));
        lbl_period->setText(QCoreApplication::translate("Debit", "\320\237\320\265\321\200\320\265\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202", nullptr));
        cmb_period->setItemText(0, QCoreApplication::translate("Debit", "\320\272\320\260\320\266\320\264\321\213\320\271 \320\264\320\265\320\275\321\214", nullptr));
        cmb_period->setItemText(1, QCoreApplication::translate("Debit", "\320\272\320\260\320\266\320\264\321\203\321\216 \320\275\320\265\320\264\320\265\320\273\321\216", nullptr));
        cmb_period->setItemText(2, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        cmb_period->setItemText(3, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        cmb_period->setItemText(4, QCoreApplication::translate("Debit", "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));
        cmb_period->setItemText(5, QCoreApplication::translate("Debit", "\320\262 \320\272\320\276\320\275\321\206\320\265 \321\201\321\200\320\276\320\272\320\260", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Debit: public Ui_Debit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBIT_H
