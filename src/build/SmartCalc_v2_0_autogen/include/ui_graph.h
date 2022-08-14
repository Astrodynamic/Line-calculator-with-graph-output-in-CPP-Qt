/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.hpp"

QT_BEGIN_NAMESPACE

class Ui_Graph
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *wgt_graph;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *x_min;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *x_max;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QDoubleSpinBox *x_step;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_calculate;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QDoubleSpinBox *y_min;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QDoubleSpinBox *y_max;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *Graph)
    {
        if (Graph->objectName().isEmpty())
            Graph->setObjectName(QString::fromUtf8("Graph"));
        Graph->resize(765, 600);
        Graph->setMinimumSize(QSize(640, 480));
        Graph->setMaximumSize(QSize(1920, 1080));
        Graph->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: rgb(50, 50, 50);\n"
"}"));
        centralwidget = new QWidget(Graph);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        wgt_graph = new QCustomPlot(centralwidget);
        wgt_graph->setObjectName(QString::fromUtf8("wgt_graph"));

        verticalLayout_2->addWidget(wgt_graph);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::RightToLeft);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        x_min = new QDoubleSpinBox(centralwidget);
        x_min->setObjectName(QString::fromUtf8("x_min"));
        x_min->setMinimumSize(QSize(120, 0));
        x_min->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        x_min->setMinimum(-1000000.000000000000000);
        x_min->setMaximum(1000000.000000000000000);
        x_min->setValue(-10.000000000000000);

        horizontalLayout->addWidget(x_min);


        horizontalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLayoutDirection(Qt::RightToLeft);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        x_max = new QDoubleSpinBox(centralwidget);
        x_max->setObjectName(QString::fromUtf8("x_max"));
        x_max->setMinimumSize(QSize(120, 0));
        x_max->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        x_max->setMaximum(1000000.000000000000000);
        x_max->setValue(10.000000000000000);

        horizontalLayout_2->addWidget(x_max);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setLayoutDirection(Qt::RightToLeft);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_5);

        x_step = new QDoubleSpinBox(centralwidget);
        x_step->setObjectName(QString::fromUtf8("x_step"));
        x_step->setMinimumSize(QSize(120, 0));
        x_step->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        x_step->setDecimals(3);
        x_step->setMinimum(0.050000000000000);
        x_step->setMaximum(10.000000000000000);
        x_step->setValue(0.500000000000000);

        horizontalLayout_3->addWidget(x_step);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        btn_calculate = new QPushButton(centralwidget);
        btn_calculate->setObjectName(QString::fromUtf8("btn_calculate"));

        horizontalLayout_6->addWidget(btn_calculate);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setLayoutDirection(Qt::RightToLeft);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_3);

        y_min = new QDoubleSpinBox(centralwidget);
        y_min->setObjectName(QString::fromUtf8("y_min"));
        y_min->setMinimumSize(QSize(120, 0));
        y_min->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        y_min->setMinimum(-1000000.000000000000000);
        y_min->setMaximum(1000000.000000000000000);
        y_min->setValue(-10.000000000000000);

        horizontalLayout_4->addWidget(y_min);


        horizontalLayout_7->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setLayoutDirection(Qt::RightToLeft);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_4);

        y_max = new QDoubleSpinBox(centralwidget);
        y_max->setObjectName(QString::fromUtf8("y_max"));
        y_max->setMinimumSize(QSize(120, 0));
        y_max->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        y_max->setMaximum(1000000.000000000000000);
        y_max->setValue(10.000000000000000);

        horizontalLayout_5->addWidget(y_max);


        horizontalLayout_7->addLayout(horizontalLayout_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        Graph->setCentralWidget(centralwidget);

        retranslateUi(Graph);

        QMetaObject::connectSlotsByName(Graph);
    } // setupUi

    void retranslateUi(QMainWindow *Graph)
    {
        Graph->setWindowTitle(QCoreApplication::translate("Graph", "Graph", nullptr));
        label->setText(QCoreApplication::translate("Graph", "x min :", nullptr));
        label_2->setText(QCoreApplication::translate("Graph", "x max :", nullptr));
        label_5->setText(QCoreApplication::translate("Graph", "step :", nullptr));
        btn_calculate->setText(QCoreApplication::translate("Graph", "Calculate", nullptr));
        label_3->setText(QCoreApplication::translate("Graph", "y min :", nullptr));
        label_4->setText(QCoreApplication::translate("Graph", "y max :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graph: public Ui_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
