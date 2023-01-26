/********************************************************************************
** Form generated from reading UI file 'graph_window.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_WINDOW_H
#define UI_GRAPH_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Graph_window
{
public:
    QCustomPlot *graph_function;
    QLineEdit *lineEdit_x_b;
    QLabel *label;
    QLineEdit *lineEdit_x_e;
    QLabel *label_2;
    QLineEdit *lineEdit_y_e;
    QLineEdit *lineEdit_y_b;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *Graph_window)
    {
        if (Graph_window->objectName().isEmpty())
            Graph_window->setObjectName(QString::fromUtf8("Graph_window"));
        Graph_window->resize(640, 564);
        QFont font;
        font.setPointSize(32);
        Graph_window->setFont(font);
        Graph_window->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 33, 33);"));
        graph_function = new QCustomPlot(Graph_window);
        graph_function->setObjectName(QString::fromUtf8("graph_function"));
        graph_function->setGeometry(QRect(20, 130, 591, 411));
        graph_function->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(247, 255, 183);\n"
"color: rgb(84, 84, 85);\n"
"border: 3px solid gray;\n"
"\n"
"}"));
        lineEdit_x_b = new QLineEdit(Graph_window);
        lineEdit_x_b->setObjectName(QString::fromUtf8("lineEdit_x_b"));
        lineEdit_x_b->setGeometry(QRect(20, 50, 101, 41));
        QFont font1;
        font1.setPointSize(21);
        font1.setBold(false);
        lineEdit_x_b->setFont(font1);
        lineEdit_x_b->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"qproperty-alignment: 'AlignRight';\n"
"border-bottom: 2px solid rgb(247, 255, 183);\n"
"background-color : white;\n"
"color: rgb(84, 84, 85);\n"
"}"));
        label = new QLabel(Graph_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 171, 31));
        QFont font2;
        font2.setPointSize(23);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        lineEdit_x_e = new QLineEdit(Graph_window);
        lineEdit_x_e->setObjectName(QString::fromUtf8("lineEdit_x_e"));
        lineEdit_x_e->setGeometry(QRect(160, 50, 101, 41));
        QFont font3;
        font3.setPointSize(21);
        lineEdit_x_e->setFont(font3);
        lineEdit_x_e->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"qproperty-alignment: 'AlignRight';\n"
"border-bottom: 2px solid rgb(247, 255, 183);\n"
"background-color : white;\n"
"color: rgb(84, 84, 85);\n"
"}"));
        label_2 = new QLabel(Graph_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 60, 21, 16));
        QFont font4;
        font4.setPointSize(48);
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_y_e = new QLineEdit(Graph_window);
        lineEdit_y_e->setObjectName(QString::fromUtf8("lineEdit_y_e"));
        lineEdit_y_e->setGeometry(QRect(440, 50, 101, 41));
        lineEdit_y_e->setFont(font3);
        lineEdit_y_e->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"qproperty-alignment: 'AlignRight';\n"
"border-bottom: 2px solid rgb(247, 255, 183);\n"
"background-color : white;\n"
"color: rgb(84, 84, 85);\n"
"}"));
        lineEdit_y_b = new QLineEdit(Graph_window);
        lineEdit_y_b->setObjectName(QString::fromUtf8("lineEdit_y_b"));
        lineEdit_y_b->setGeometry(QRect(300, 50, 101, 41));
        lineEdit_y_b->setFont(font1);
        lineEdit_y_b->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"qproperty-alignment: 'AlignRight';\n"
"border-bottom: 2px solid rgb(247, 255, 183);\n"
"background-color : white;\n"
"color: rgb(84, 84, 85);\n"
"}"));
        label_3 = new QLabel(Graph_window);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 10, 201, 31));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        label_4 = new QLabel(Graph_window);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 60, 21, 16));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(Graph_window);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 50, 61, 41));
        QFont font5;
        font5.setPointSize(18);
        font5.setBold(true);
        pushButton->setFont(font5);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(247, 255, 183);\n"
"color: rgb(84, 84, 85);\n"
"  border: 3px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));

        retranslateUi(Graph_window);

        QMetaObject::connectSlotsByName(Graph_window);
    } // setupUi

    void retranslateUi(QDialog *Graph_window)
    {
        Graph_window->setWindowTitle(QCoreApplication::translate("Graph_window", "Dialog", nullptr));
        lineEdit_x_b->setText(QCoreApplication::translate("Graph_window", "-10", nullptr));
        label->setText(QCoreApplication::translate("Graph_window", "Input domain (x):", nullptr));
        lineEdit_x_e->setText(QCoreApplication::translate("Graph_window", "10", nullptr));
        label_2->setText(QCoreApplication::translate("Graph_window", "-", nullptr));
        lineEdit_y_e->setText(QCoreApplication::translate("Graph_window", "10", nullptr));
        lineEdit_y_b->setText(QCoreApplication::translate("Graph_window", "-10", nullptr));
        label_3->setText(QCoreApplication::translate("Graph_window", "Input codomain (y):", nullptr));
        label_4->setText(QCoreApplication::translate("Graph_window", "-", nullptr));
        pushButton->setText(QCoreApplication::translate("Graph_window", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graph_window: public Ui_Graph_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_WINDOW_H
