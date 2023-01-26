/********************************************************************************
** Form generated from reading UI file 'input_x.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUT_X_H
#define UI_INPUT_X_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Input_x
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *Input_x)
    {
        if (Input_x->objectName().isEmpty())
            Input_x->setObjectName(QString::fromUtf8("Input_x"));
        Input_x->resize(350, 150);
        Input_x->setMinimumSize(QSize(350, 150));
        Input_x->setMaximumSize(QSize(350, 150));
        Input_x->setSizeIncrement(QSize(200, 200));
        Input_x->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 33, 33);"));
        label = new QLabel(Input_x);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 201, 41));
        QFont font;
        font.setPointSize(34);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        lineEdit = new QLineEdit(Input_x);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 70, 231, 41));
        QFont font1;
        font1.setPointSize(25);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"qproperty-alignment: 'AlignRight';\n"
"border-bottom: 2px solid rgb(247, 255, 183);\n"
"background-color : white;\n"
"color: rgb(84, 84, 85);\n"
"}"));
        pushButton = new QPushButton(Input_x);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 80, 51, 31));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        pushButton->setFont(font2);
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

        retranslateUi(Input_x);
        QObject::connect(lineEdit, &QLineEdit::returnPressed, Input_x, qOverload<>(&QDialog::close));
        QObject::connect(pushButton, &QPushButton::clicked, Input_x, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Input_x);
    } // setupUi

    void retranslateUi(QDialog *Input_x)
    {
        Input_x->setWindowTitle(QCoreApplication::translate("Input_x", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Input_x", "Input value x:", nullptr));
        lineEdit->setText(QString());
        pushButton->setText(QCoreApplication::translate("Input_x", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Input_x: public Ui_Input_x {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUT_X_H
