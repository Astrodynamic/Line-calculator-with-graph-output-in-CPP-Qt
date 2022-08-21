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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Credit
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *vlo_pre_calc;
    QVBoxLayout *vlo_pre_main;
    QHBoxLayout *hlo_sum;
    QLabel *lbl_sum;
    QHBoxLayout *hlo_sum_spin;
    QSpinBox *spin_sum;
    QLabel *lbl_rub;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbl_limit;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spin_limit;
    QComboBox *cmb_limit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbl_procent;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *spin_percent;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl_type;
    QVBoxLayout *verticalLayout;
    QRadioButton *rdb_anuit;
    QRadioButton *rdb_diff;
    QPushButton *btn_calculate;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QLabel *lbl_mon;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QLabel *lbl_percent;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QLabel *lbl_total;
    QLabel *label_11;

    void setupUi(QMainWindow *Credit)
    {
        if (Credit->objectName().isEmpty())
            Credit->setObjectName(QString::fromUtf8("Credit"));
        Credit->resize(505, 312);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Credit->sizePolicy().hasHeightForWidth());
        Credit->setSizePolicy(sizePolicy);
        Credit->setMinimumSize(QSize(505, 312));
        Credit->setMaximumSize(QSize(505, 312));
        Credit->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: rgb(38, 39, 40);\n"
"}"));
        centralwidget = new QWidget(Credit);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        vlo_pre_calc = new QVBoxLayout();
        vlo_pre_calc->setObjectName(QString::fromUtf8("vlo_pre_calc"));
        vlo_pre_main = new QVBoxLayout();
        vlo_pre_main->setObjectName(QString::fromUtf8("vlo_pre_main"));
        hlo_sum = new QHBoxLayout();
        hlo_sum->setObjectName(QString::fromUtf8("hlo_sum"));
        lbl_sum = new QLabel(centralwidget);
        lbl_sum->setObjectName(QString::fromUtf8("lbl_sum"));
        lbl_sum->setMinimumSize(QSize(250, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        lbl_sum->setFont(font);

        hlo_sum->addWidget(lbl_sum);

        hlo_sum_spin = new QHBoxLayout();
        hlo_sum_spin->setObjectName(QString::fromUtf8("hlo_sum_spin"));
        spin_sum = new QSpinBox(centralwidget);
        spin_sum->setObjectName(QString::fromUtf8("spin_sum"));
        spin_sum->setMinimumSize(QSize(100, 0));
        spin_sum->setFont(font);
        spin_sum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spin_sum->setMinimum(1);
        spin_sum->setMaximum(50000000);

        hlo_sum_spin->addWidget(spin_sum);

        lbl_rub = new QLabel(centralwidget);
        lbl_rub->setObjectName(QString::fromUtf8("lbl_rub"));
        lbl_rub->setFont(font);

        hlo_sum_spin->addWidget(lbl_rub);


        hlo_sum->addLayout(hlo_sum_spin);


        vlo_pre_main->addLayout(hlo_sum);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lbl_limit = new QLabel(centralwidget);
        lbl_limit->setObjectName(QString::fromUtf8("lbl_limit"));
        lbl_limit->setMinimumSize(QSize(250, 0));
        lbl_limit->setFont(font);

        horizontalLayout_5->addWidget(lbl_limit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spin_limit = new QSpinBox(centralwidget);
        spin_limit->setObjectName(QString::fromUtf8("spin_limit"));
        spin_limit->setMinimumSize(QSize(100, 0));
        spin_limit->setFont(font);
        spin_limit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spin_limit->setMinimum(1);
        spin_limit->setMaximum(600);

        horizontalLayout_2->addWidget(spin_limit);

        cmb_limit = new QComboBox(centralwidget);
        cmb_limit->addItem(QString());
        cmb_limit->addItem(QString());
        cmb_limit->setObjectName(QString::fromUtf8("cmb_limit"));
        cmb_limit->setFont(font);
        cmb_limit->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(cmb_limit);


        horizontalLayout_5->addLayout(horizontalLayout_2);


        vlo_pre_main->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        lbl_procent = new QLabel(centralwidget);
        lbl_procent->setObjectName(QString::fromUtf8("lbl_procent"));
        lbl_procent->setMinimumSize(QSize(250, 0));
        lbl_procent->setFont(font);

        horizontalLayout_6->addWidget(lbl_procent);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        spin_percent = new QDoubleSpinBox(centralwidget);
        spin_percent->setObjectName(QString::fromUtf8("spin_percent"));
        spin_percent->setMinimumSize(QSize(100, 0));
        spin_percent->setFont(font);
        spin_percent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spin_percent->setMinimum(0.010000000000000);
        spin_percent->setMaximum(50.000000000000000);
        spin_percent->setValue(0.010000000000000);

        horizontalLayout_3->addWidget(spin_percent);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);


        horizontalLayout_6->addLayout(horizontalLayout_3);


        vlo_pre_main->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lbl_type = new QLabel(centralwidget);
        lbl_type->setObjectName(QString::fromUtf8("lbl_type"));
        lbl_type->setMinimumSize(QSize(250, 0));
        lbl_type->setFont(font);

        horizontalLayout_7->addWidget(lbl_type);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        rdb_anuit = new QRadioButton(centralwidget);
        rdb_anuit->setObjectName(QString::fromUtf8("rdb_anuit"));
        rdb_anuit->setFont(font);
        rdb_anuit->setChecked(true);

        verticalLayout->addWidget(rdb_anuit);

        rdb_diff = new QRadioButton(centralwidget);
        rdb_diff->setObjectName(QString::fromUtf8("rdb_diff"));
        rdb_diff->setFont(font);

        verticalLayout->addWidget(rdb_diff);


        horizontalLayout_7->addLayout(verticalLayout);


        vlo_pre_main->addLayout(horizontalLayout_7);


        vlo_pre_calc->addLayout(vlo_pre_main);

        btn_calculate = new QPushButton(centralwidget);
        btn_calculate->setObjectName(QString::fromUtf8("btn_calculate"));
        btn_calculate->setFont(font);

        vlo_pre_calc->addWidget(btn_calculate);


        verticalLayout_2->addLayout(vlo_pre_calc);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(200, 0));
        label->setFont(font);

        horizontalLayout_10->addWidget(label);

        lbl_mon = new QLabel(centralwidget);
        lbl_mon->setObjectName(QString::fromUtf8("lbl_mon"));
        lbl_mon->setMinimumSize(QSize(200, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        lbl_mon->setFont(font1);
        lbl_mon->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(lbl_mon);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        horizontalLayout_10->addWidget(label_9);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(200, 0));
        label_3->setFont(font);

        horizontalLayout_9->addWidget(label_3);

        lbl_percent = new QLabel(centralwidget);
        lbl_percent->setObjectName(QString::fromUtf8("lbl_percent"));
        lbl_percent->setMinimumSize(QSize(200, 0));
        lbl_percent->setFont(font1);
        lbl_percent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(lbl_percent);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        horizontalLayout_9->addWidget(label_10);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(200, 0));
        label_4->setFont(font);

        horizontalLayout_8->addWidget(label_4);

        lbl_total = new QLabel(centralwidget);
        lbl_total->setObjectName(QString::fromUtf8("lbl_total"));
        lbl_total->setMinimumSize(QSize(200, 0));
        lbl_total->setFont(font1);
        lbl_total->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(lbl_total);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        horizontalLayout_8->addWidget(label_11);


        verticalLayout_4->addLayout(horizontalLayout_8);


        verticalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_3->addLayout(verticalLayout_2);

        Credit->setCentralWidget(centralwidget);

        retranslateUi(Credit);

        QMetaObject::connectSlotsByName(Credit);
    } // setupUi

    void retranslateUi(QMainWindow *Credit)
    {
        Credit->setWindowTitle(QCoreApplication::translate("Credit", "Credit calculator", nullptr));
        lbl_sum->setText(QCoreApplication::translate("Credit", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        lbl_rub->setText(QCoreApplication::translate("Credit", "\321\200\321\203\320\261.", nullptr));
        lbl_limit->setText(QCoreApplication::translate("Credit", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        cmb_limit->setItemText(0, QCoreApplication::translate("Credit", "\320\273\320\265\321\202", nullptr));
        cmb_limit->setItemText(1, QCoreApplication::translate("Credit", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        lbl_procent->setText(QCoreApplication::translate("Credit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("Credit", "%", nullptr));
        lbl_type->setText(QCoreApplication::translate("Credit", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205 \320\277\320\273\320\276\321\202\321\217\320\266\320\265\320\271", nullptr));
        rdb_anuit->setText(QCoreApplication::translate("Credit", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        rdb_diff->setText(QCoreApplication::translate("Credit", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));
        btn_calculate->setText(QCoreApplication::translate("Credit", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Credit", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\321\221\320\266", nullptr));
        lbl_mon->setText(QCoreApplication::translate("Credit", "0", nullptr));
        label_9->setText(QCoreApplication::translate("Credit", "\321\200\321\203\320\261.", nullptr));
        label_3->setText(QCoreApplication::translate("Credit", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        lbl_percent->setText(QCoreApplication::translate("Credit", "0", nullptr));
        label_10->setText(QCoreApplication::translate("Credit", "\321\200\321\203\320\261.", nullptr));
        label_4->setText(QCoreApplication::translate("Credit", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \320\277\320\273\320\260\321\202\320\265\320\266\320\260", nullptr));
        lbl_total->setText(QCoreApplication::translate("Credit", "0", nullptr));
        label_11->setText(QCoreApplication::translate("Credit", "\321\200\321\203\320\261.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit: public Ui_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
