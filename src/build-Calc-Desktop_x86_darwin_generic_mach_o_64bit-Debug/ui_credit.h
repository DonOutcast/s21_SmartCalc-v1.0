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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Credit
{
public:
    QLineEdit *l_sum_credit;
    QLineEdit *l_time;
    QLineEdit *l_rate;
    QCheckBox *checkBox_ann;
    QCheckBox *checkBox_diff;
    QPushButton *count;
    QLineEdit *l_month_payment;
    QLineEdit *l_overpayment;
    QLineEdit *l_total_payment;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_15;
    QLineEdit *l_month;
    QLabel *label_14;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Credit)
    {
        if (Credit->objectName().isEmpty())
            Credit->setObjectName(QString::fromUtf8("Credit"));
        Credit->resize(432, 511);
        Credit->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(159, 159, 159);"));
        l_sum_credit = new QLineEdit(Credit);
        l_sum_credit->setObjectName(QString::fromUtf8("l_sum_credit"));
        l_sum_credit->setGeometry(QRect(210, 70, 171, 31));
        l_sum_credit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"qproperty-alignment: 'AlignRight';\n"
"border-bottom: 5px solid rgb(247, 255, 183);\n"
"background-color : white;\n"
"color: rgb(84, 84, 85);\n"
"	border-color: rgb(255, 110, 106);\n"
"}"));
        l_time = new QLineEdit(Credit);
        l_time->setObjectName(QString::fromUtf8("l_time"));
        l_time->setGeometry(QRect(210, 110, 91, 31));
        l_time->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"qproperty-alignment: 'AlignRight';\n"
"border-bottom: 5px solid rgb(247, 255, 183);\n"
"background-color : white;\n"
"color: rgb(84, 84, 85);\n"
"	border-color: rgb(255, 110, 106);\n"
"}"));
        l_rate = new QLineEdit(Credit);
        l_rate->setObjectName(QString::fromUtf8("l_rate"));
        l_rate->setGeometry(QRect(210, 150, 91, 31));
        l_rate->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"qproperty-alignment: 'AlignRight';\n"
"border-bottom: 5px solid rgb(247, 255, 183);\n"
"background-color : white;\n"
"color: rgb(84, 84, 85);\n"
"	border-color: rgb(255, 110, 106);\n"
"}"));
        checkBox_ann = new QCheckBox(Credit);
        checkBox_ann->setObjectName(QString::fromUtf8("checkBox_ann"));
        checkBox_ann->setGeometry(QRect(20, 270, 171, 31));
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        checkBox_ann->setFont(font);
        checkBox_ann->setStyleSheet(QString::fromUtf8("\n"
"background-color : white;\n"
"color: rgb(33, 33, 33);\n"
"\n"
"\n"
"\n"
""));
        checkBox_diff = new QCheckBox(Credit);
        checkBox_diff->setObjectName(QString::fromUtf8("checkBox_diff"));
        checkBox_diff->setGeometry(QRect(220, 270, 191, 31));
        checkBox_diff->setFont(font);
        checkBox_diff->setStyleSheet(QString::fromUtf8("\n"
"background-color : white;\n"
"color: rgb(33, 33, 33);\n"
"\n"
"\n"
"\n"
""));
        count = new QPushButton(Credit);
        count->setObjectName(QString::fromUtf8("count"));
        count->setGeometry(QRect(160, 310, 100, 32));
        QFont font1;
        font1.setBold(true);
        count->setFont(font1);
        count->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(110, 165, 197);\n"
"color: rgb(33, 33, 33);\n"
"  border: 2px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        l_month_payment = new QLineEdit(Credit);
        l_month_payment->setObjectName(QString::fromUtf8("l_month_payment"));
        l_month_payment->setGeometry(QRect(210, 370, 171, 31));
        l_month_payment->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"qproperty-alignment: 'AlignRight';\n"
"border-bottom: 5px solid rgb(247, 255, 183);\n"
"background-color : white;\n"
"color: rgb(84, 84, 85);\n"
"	border-color: rgb(255, 110, 106);\n"
"}"));
        l_overpayment = new QLineEdit(Credit);
        l_overpayment->setObjectName(QString::fromUtf8("l_overpayment"));
        l_overpayment->setGeometry(QRect(210, 410, 171, 31));
        l_overpayment->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"qproperty-alignment: 'AlignRight';\n"
"border-bottom: 5px solid rgb(247, 255, 183);\n"
"background-color : white;\n"
"color: rgb(84, 84, 85);\n"
"	border-color: rgb(255, 110, 106);\n"
"}"));
        l_total_payment = new QLineEdit(Credit);
        l_total_payment->setObjectName(QString::fromUtf8("l_total_payment"));
        l_total_payment->setGeometry(QRect(210, 450, 171, 31));
        l_total_payment->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"qproperty-alignment: 'AlignRight';\n"
"border-bottom: 5px solid rgb(247, 255, 183);\n"
"background-color : white;\n"
"color: rgb(84, 84, 85);\n"
"	border-color: rgb(255, 110, 106);\n"
"}"));
        label = new QLabel(Credit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 80, 191, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cochin")});
        font2.setPointSize(18);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_2 = new QLabel(Credit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 120, 51, 21));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_3 = new QLabel(Credit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 120, 51, 21));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_4 = new QLabel(Credit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 160, 171, 21));
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_5 = new QLabel(Credit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(310, 160, 51, 21));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_6 = new QLabel(Credit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(150, 240, 111, 21));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_7 = new QLabel(Credit);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(390, 80, 51, 21));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_8 = new QLabel(Credit);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 380, 191, 21));
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_9 = new QLabel(Credit);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 420, 191, 21));
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_10 = new QLabel(Credit);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 460, 141, 21));
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_11 = new QLabel(Credit);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(390, 380, 31, 21));
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_12 = new QLabel(Credit);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(390, 420, 31, 21));
        label_12->setFont(font2);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_13 = new QLabel(Credit);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(390, 460, 31, 21));
        label_13->setFont(font2);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_15 = new QLabel(Credit);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 200, 191, 21));
        label_15->setFont(font2);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        l_month = new QLineEdit(Credit);
        l_month->setObjectName(QString::fromUtf8("l_month"));
        l_month->setGeometry(QRect(210, 190, 91, 31));
        l_month->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"qproperty-alignment: 'AlignRight';\n"
"border-bottom: 5px solid rgb(247, 255, 183);\n"
"background-color : white;\n"
"color: rgb(84, 84, 85);\n"
"	border-color: rgb(255, 110, 106);\n"
"}"));
        label_14 = new QLabel(Credit);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(80, 10, 271, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Cochin")});
        font3.setPointSize(24);
        font3.setBold(true);
        label_14->setFont(font3);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        pushButton_2 = new QPushButton(Credit);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 51, 32));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: white;\n"
"color: rgb(84, 84, 85);\n"
"  border: 3px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));

        retranslateUi(Credit);
        QObject::connect(pushButton_2, &QPushButton::clicked, Credit, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Credit);
    } // setupUi

    void retranslateUi(QDialog *Credit)
    {
        Credit->setWindowTitle(QCoreApplication::translate("Credit", "Dialog", nullptr));
        checkBox_ann->setText(QCoreApplication::translate("Credit", "         \320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        checkBox_diff->setText(QCoreApplication::translate("Credit", "    \320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));
        count->setText(QCoreApplication::translate("Credit", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("Credit", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260 :", nullptr));
        label_2->setText(QCoreApplication::translate("Credit", "\320\241\321\200\320\276\320\272 :", nullptr));
        label_3->setText(QCoreApplication::translate("Credit", "\320\274\320\265\321\201", nullptr));
        label_4->setText(QCoreApplication::translate("Credit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260 :", nullptr));
        label_5->setText(QCoreApplication::translate("Credit", "%", nullptr));
        label_6->setText(QCoreApplication::translate("Credit", "\320\242\320\270\320\277 \320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271", nullptr));
        label_7->setText(QCoreApplication::translate("Credit", "\321\200\321\203\320\261", nullptr));
        label_8->setText(QCoreApplication::translate("Credit", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266 :", nullptr));
        label_9->setText(QCoreApplication::translate("Credit", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203 :", nullptr));
        label_10->setText(QCoreApplication::translate("Credit", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260 :", nullptr));
        label_11->setText(QCoreApplication::translate("Credit", "\321\200\321\203\320\261", nullptr));
        label_12->setText(QCoreApplication::translate("Credit", "\321\200\321\203\320\261", nullptr));
        label_13->setText(QCoreApplication::translate("Credit", "\321\200\321\203\320\261", nullptr));
        label_15->setText(QCoreApplication::translate("Credit", "\342\204\226 \320\274\320\265\321\201\321\217\321\206\320\260 \320\277\320\276\320\273\321\203\321\207\320\265\320\275\320\270\321\217 :", nullptr));
        label_14->setText(QCoreApplication::translate("Credit", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Credit", "ESC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit: public Ui_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
