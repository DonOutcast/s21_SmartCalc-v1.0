/********************************************************************************
** Form generated from reading UI file 'depozit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOZIT_H
#define UI_DEPOZIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Depozit
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *sumvklada;
    QLineEdit *procentstavka;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *srok;
    QLabel *label_17;
    QLineEdit *nalogstavka;
    QLineEdit *sumpopoln;
    QLabel *label_19;
    QLabel *label_20;
    QLineEdit *sumsnat;
    QLabel *label_18;
    QCheckBox *pdays;
    QCheckBox *pmonth;
    QCheckBox *pkvartal;
    QCheckBox *pend;
    QCheckBox *pluskvartal;
    QCheckBox *plusmonth;
    QCheckBox *pluspolyear;
    QCheckBox *plusyear;
    QCheckBox *snpolyear;
    QCheckBox *snday;
    QCheckBox *snkv;
    QCheckBox *snyear;
    QCheckBox *kapit;
    QPushButton *count;
    QLineEdit *nachislprocent;
    QLabel *label_21;
    QLineEdit *sumnaloga;
    QLabel *label_22;
    QLineEdit *obsumresult;
    QLabel *label_23;
    QLineEdit *month;
    QLabel *label_6;

    void setupUi(QDialog *Depozit)
    {
        if (Depozit->objectName().isEmpty())
            Depozit->setObjectName(QString::fromUtf8("Depozit"));
        Depozit->resize(846, 858);
        QFont font;
        font.setPointSize(19);
        Depozit->setFont(font);
        Depozit->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 169, 169);"));
        label = new QLabel(Depozit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 10, 321, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Grantha Sangam MN")});
        font1.setPointSize(24);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        pushButton = new QPushButton(Depozit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 51, 32));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_2 = new QLabel(Depozit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 70, 141, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Palatino")});
        font3.setPointSize(19);
        font3.setBold(false);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_3 = new QLabel(Depozit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(430, 70, 181, 31));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_4 = new QLabel(Depozit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 120, 181, 31));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_5 = new QLabel(Depozit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(440, 120, 171, 31));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_7 = new QLabel(Depozit);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 400, 191, 31));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_8 = new QLabel(Depozit);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 530, 141, 31));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_10 = new QLabel(Depozit);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(320, 500, 193, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Grantha Sangam MN")});
        font4.setPointSize(20);
        font4.setBold(true);
        label_10->setFont(font4);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_9 = new QLabel(Depozit);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(350, 360, 141, 41));
        label_9->setFont(font4);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_11 = new QLabel(Depozit);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(80, 700, 231, 31));
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_12 = new QLabel(Depozit);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(170, 750, 141, 31));
        label_12->setFont(font3);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_13 = new QLabel(Depozit);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 800, 291, 31));
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        sumvklada = new QLineEdit(Depozit);
        sumvklada->setObjectName(QString::fromUtf8("sumvklada"));
        sumvklada->setGeometry(QRect(210, 70, 161, 31));
        QFont font5;
        font5.setPointSize(21);
        sumvklada->setFont(font5);
        sumvklada->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(33, 33, 33);"));
        procentstavka = new QLineEdit(Depozit);
        procentstavka->setObjectName(QString::fromUtf8("procentstavka"));
        procentstavka->setGeometry(QRect(210, 120, 161, 31));
        procentstavka->setFont(font5);
        procentstavka->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(33, 33, 33);"));
        label_14 = new QLabel(Depozit);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(380, 70, 41, 31));
        label_14->setFont(font3);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_15 = new QLabel(Depozit);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(380, 120, 21, 31));
        label_15->setFont(font3);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_16 = new QLabel(Depozit);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(790, 120, 21, 31));
        label_16->setFont(font3);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        srok = new QLineEdit(Depozit);
        srok->setObjectName(QString::fromUtf8("srok"));
        srok->setGeometry(QRect(620, 70, 161, 31));
        srok->setFont(font5);
        srok->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(33, 33, 33);"));
        label_17 = new QLabel(Depozit);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(790, 70, 41, 31));
        label_17->setFont(font3);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        nalogstavka = new QLineEdit(Depozit);
        nalogstavka->setObjectName(QString::fromUtf8("nalogstavka"));
        nalogstavka->setGeometry(QRect(620, 120, 161, 31));
        nalogstavka->setFont(font5);
        nalogstavka->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(33, 33, 33);"));
        sumpopoln = new QLineEdit(Depozit);
        sumpopoln->setObjectName(QString::fromUtf8("sumpopoln"));
        sumpopoln->setGeometry(QRect(220, 400, 151, 31));
        sumpopoln->setFont(font5);
        sumpopoln->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(33, 33, 33);"));
        label_19 = new QLabel(Depozit);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(380, 400, 41, 31));
        label_19->setFont(font3);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        label_20 = new QLabel(Depozit);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(380, 530, 41, 31));
        label_20->setFont(font3);
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        sumsnat = new QLineEdit(Depozit);
        sumsnat->setObjectName(QString::fromUtf8("sumsnat"));
        sumsnat->setGeometry(QRect(220, 530, 151, 31));
        sumsnat->setFont(font5);
        sumsnat->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(33, 33, 33);"));
        label_18 = new QLabel(Depozit);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(300, 220, 251, 41));
        label_18->setFont(font4);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        pdays = new QCheckBox(Depozit);
        pdays->setObjectName(QString::fromUtf8("pdays"));
        pdays->setGeometry(QRect(40, 260, 141, 31));
        QFont font6;
        font6.setPointSize(16);
        pdays->setFont(font6);
        pdays->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);\n"
"background-color: rgb(192, 192, 192);"));
        pmonth = new QCheckBox(Depozit);
        pmonth->setObjectName(QString::fromUtf8("pmonth"));
        pmonth->setGeometry(QRect(240, 260, 141, 31));
        pmonth->setFont(font6);
        pmonth->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);\n"
"background-color: rgb(192, 192, 192);"));
        pkvartal = new QCheckBox(Depozit);
        pkvartal->setObjectName(QString::fromUtf8("pkvartal"));
        pkvartal->setGeometry(QRect(440, 260, 141, 31));
        pkvartal->setFont(font6);
        pkvartal->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);\n"
"background-color: rgb(192, 192, 192);"));
        pend = new QCheckBox(Depozit);
        pend->setObjectName(QString::fromUtf8("pend"));
        pend->setGeometry(QRect(640, 260, 141, 31));
        pend->setFont(font6);
        pend->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);\n"
"background-color: rgb(192, 192, 192);"));
        pluskvartal = new QCheckBox(Depozit);
        pluskvartal->setObjectName(QString::fromUtf8("pluskvartal"));
        pluskvartal->setGeometry(QRect(240, 450, 141, 31));
        pluskvartal->setFont(font6);
        pluskvartal->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);\n"
"background-color: rgb(192, 192, 192);"));
        plusmonth = new QCheckBox(Depozit);
        plusmonth->setObjectName(QString::fromUtf8("plusmonth"));
        plusmonth->setGeometry(QRect(40, 450, 141, 31));
        plusmonth->setFont(font6);
        plusmonth->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);\n"
"background-color: rgb(192, 192, 192);"));
        pluspolyear = new QCheckBox(Depozit);
        pluspolyear->setObjectName(QString::fromUtf8("pluspolyear"));
        pluspolyear->setGeometry(QRect(440, 450, 141, 31));
        pluspolyear->setFont(font6);
        pluspolyear->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);\n"
"background-color: rgb(192, 192, 192);"));
        plusyear = new QCheckBox(Depozit);
        plusyear->setObjectName(QString::fromUtf8("plusyear"));
        plusyear->setGeometry(QRect(640, 450, 141, 31));
        plusyear->setFont(font6);
        plusyear->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);\n"
"background-color: rgb(192, 192, 192);"));
        snpolyear = new QCheckBox(Depozit);
        snpolyear->setObjectName(QString::fromUtf8("snpolyear"));
        snpolyear->setGeometry(QRect(440, 580, 141, 31));
        snpolyear->setFont(font6);
        snpolyear->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);\n"
"background-color: rgb(192, 192, 192);"));
        snday = new QCheckBox(Depozit);
        snday->setObjectName(QString::fromUtf8("snday"));
        snday->setGeometry(QRect(40, 580, 141, 31));
        snday->setFont(font6);
        snday->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);\n"
"background-color: rgb(192, 192, 192);"));
        snkv = new QCheckBox(Depozit);
        snkv->setObjectName(QString::fromUtf8("snkv"));
        snkv->setGeometry(QRect(240, 580, 141, 31));
        snkv->setFont(font6);
        snkv->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);\n"
"background-color: rgb(192, 192, 192);"));
        snyear = new QCheckBox(Depozit);
        snyear->setObjectName(QString::fromUtf8("snyear"));
        snyear->setGeometry(QRect(640, 580, 141, 31));
        snyear->setFont(font6);
        snyear->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);\n"
"background-color: rgb(192, 192, 192);"));
        kapit = new QCheckBox(Depozit);
        kapit->setObjectName(QString::fromUtf8("kapit"));
        kapit->setGeometry(QRect(40, 310, 161, 31));
        QFont font7;
        font7.setPointSize(16);
        font7.setBold(true);
        kapit->setFont(font7);
        kapit->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);\n"
"\n"
"background-color: rgba(115, 253, 255, 199);"));
        count = new QPushButton(Depozit);
        count->setObjectName(QString::fromUtf8("count"));
        count->setGeometry(QRect(350, 640, 131, 32));
        count->setFont(font2);
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
        nachislprocent = new QLineEdit(Depozit);
        nachislprocent->setObjectName(QString::fromUtf8("nachislprocent"));
        nachislprocent->setGeometry(QRect(320, 700, 161, 31));
        nachislprocent->setFont(font5);
        nachislprocent->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(33, 33, 33);"));
        label_21 = new QLabel(Depozit);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(490, 700, 41, 31));
        label_21->setFont(font3);
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        sumnaloga = new QLineEdit(Depozit);
        sumnaloga->setObjectName(QString::fromUtf8("sumnaloga"));
        sumnaloga->setGeometry(QRect(320, 750, 161, 31));
        sumnaloga->setFont(font5);
        sumnaloga->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(33, 33, 33);"));
        label_22 = new QLabel(Depozit);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(490, 750, 41, 31));
        label_22->setFont(font3);
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        obsumresult = new QLineEdit(Depozit);
        obsumresult->setObjectName(QString::fromUtf8("obsumresult"));
        obsumresult->setGeometry(QRect(320, 800, 161, 31));
        obsumresult->setFont(font5);
        obsumresult->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(33, 33, 33);"));
        label_23 = new QLabel(Depozit);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(490, 800, 41, 31));
        label_23->setFont(font3);
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));
        month = new QLineEdit(Depozit);
        month->setObjectName(QString::fromUtf8("month"));
        month->setGeometry(QRect(250, 170, 121, 31));
        month->setFont(font5);
        month->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(33, 33, 33);"));
        label_6 = new QLabel(Depozit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 170, 221, 31));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(33, 33, 33);"));

        retranslateUi(Depozit);
        QObject::connect(pushButton, &QPushButton::clicked, Depozit, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Depozit);
    } // setupUi

    void retranslateUi(QDialog *Depozit)
    {
        Depozit->setWindowTitle(QCoreApplication::translate("Depozit", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Depozit", "\320\224\320\265\320\277\320\276\320\267\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        pushButton->setText(QCoreApplication::translate("Depozit", "ESC", nullptr));
        label_2->setText(QCoreApplication::translate("Depozit", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260 :", nullptr));
        label_3->setText(QCoreApplication::translate("Depozit", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217 :", nullptr));
        label_4->setText(QCoreApplication::translate("Depozit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260 :", nullptr));
        label_5->setText(QCoreApplication::translate("Depozit", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260 :", nullptr));
        label_7->setText(QCoreApplication::translate("Depozit", "\320\241\321\203\320\274\320\274\320\260 \320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217 :", nullptr));
        label_8->setText(QCoreApplication::translate("Depozit", "\320\241\321\203\320\274\320\274\320\260 \321\201\320\275\321\217\321\202\320\270\321\217 :", nullptr));
        label_10->setText(QCoreApplication::translate("Depozit", "\320\247\320\260\321\201\321\202\320\270\321\207\320\275\321\213\320\265 \321\201\320\275\321\217\321\202\320\270\321\217 :", nullptr));
        label_9->setText(QCoreApplication::translate("Depozit", "\320\237\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217 :", nullptr));
        label_11->setText(QCoreApplication::translate("Depozit", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213 :", nullptr));
        label_12->setText(QCoreApplication::translate("Depozit", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260\320\273\320\276\320\263\320\260 :", nullptr));
        label_13->setText(QCoreApplication::translate("Depozit", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260 \320\262\320\272\320\273\320\260\320\264\320\265 \320\272 \320\272\320\276\320\275\321\206\321\203 \321\201\321\200\320\276\320\272\320\260 :", nullptr));
        sumvklada->setText(QString());
        procentstavka->setText(QString());
        label_14->setText(QCoreApplication::translate("Depozit", "\321\200\321\203\320\261", nullptr));
        label_15->setText(QCoreApplication::translate("Depozit", "%", nullptr));
        label_16->setText(QCoreApplication::translate("Depozit", "%", nullptr));
        srok->setText(QString());
        label_17->setText(QCoreApplication::translate("Depozit", "\320\264\320\275\320\265\320\271", nullptr));
        nalogstavka->setText(QString());
        sumpopoln->setText(QString());
        label_19->setText(QCoreApplication::translate("Depozit", "\321\200\321\203\320\261", nullptr));
        label_20->setText(QCoreApplication::translate("Depozit", "\321\200\321\203\320\261", nullptr));
        sumsnat->setText(QString());
        label_18->setText(QCoreApplication::translate("Depozit", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202 :", nullptr));
        pdays->setText(QCoreApplication::translate("Depozit", "      \320\225\320\266\320\265\320\264\320\275\320\265\320\262\320\275\320\276", nullptr));
        pmonth->setText(QCoreApplication::translate("Depozit", "     \320\240\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        pkvartal->setText(QCoreApplication::translate("Depozit", "  \320\240\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        pend->setText(QCoreApplication::translate("Depozit", "  \320\222 \320\272\320\276\320\275\321\206\320\265 \321\201\321\200\320\276\320\272\320\260", nullptr));
        pluskvartal->setText(QCoreApplication::translate("Depozit", "  \320\240\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        plusmonth->setText(QCoreApplication::translate("Depozit", "    \320\240\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        pluspolyear->setText(QCoreApplication::translate("Depozit", "  \320\240\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        plusyear->setText(QCoreApplication::translate("Depozit", "      \320\240\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));
        snpolyear->setText(QCoreApplication::translate("Depozit", "  \320\240\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        snday->setText(QCoreApplication::translate("Depozit", "    \320\240\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        snkv->setText(QCoreApplication::translate("Depozit", "  \320\240\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        snyear->setText(QCoreApplication::translate("Depozit", "      \320\240\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));
        kapit->setText(QCoreApplication::translate("Depozit", " \320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        count->setText(QCoreApplication::translate("Depozit", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        nachislprocent->setText(QString());
        label_21->setText(QCoreApplication::translate("Depozit", "\321\200\321\203\320\261", nullptr));
        sumnaloga->setText(QString());
        label_22->setText(QCoreApplication::translate("Depozit", "\321\200\321\203\320\261", nullptr));
        obsumresult->setText(QString());
        label_23->setText(QCoreApplication::translate("Depozit", "\321\200\321\203\320\261", nullptr));
        month->setText(QString());
        label_6->setText(QCoreApplication::translate("Depozit", "\342\204\226 \320\274\320\265\321\201\321\217\321\206\320\260 \320\275\320\260\321\207\320\260\320\273\320\260 \321\201\321\200\320\276\320\272\320\260 : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Depozit: public Ui_Depozit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOZIT_H
