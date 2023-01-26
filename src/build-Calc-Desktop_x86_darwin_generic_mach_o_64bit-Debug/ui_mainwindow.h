/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE


class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_0;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_div;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_log;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_point;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_del;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_ac;
    QPushButton *pushButton_openh;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_closeh;
    QPushButton *pushButton_graph;
    QPushButton *pushButton_x;
    QLineEdit *label;
    QPushButton *pushButton_acos_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(475, 377);
        MainWindow->setMinimumSize(QSize(475, 323));
        MainWindow->setMaximumSize(QSize(475, 377));
        QPalette palette;
        QBrush brush(QColor(33, 33, 33, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Helvetica")});
        font.setPointSize(19);
        font.setItalic(false);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 33, 33);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 30, 61, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font1.setBold(true);
        pushButton->setFont(font1);
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
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(true);
        pushButton_3->setGeometry(QRect(340, 110, 61, 41));
        QPalette palette1;
        QBrush brush1(QColor(84, 84, 85, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        pushButton_3->setPalette(palette1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font2.setPointSize(24);
        font2.setBold(true);
        pushButton_3->setFont(font2);
        pushButton_3->setMouseTracking(false);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: white; \n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_3->setCheckable(false);
        pushButton_3->setChecked(false);
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setEnabled(true);
        pushButton_1->setGeometry(QRect(200, 110, 61, 41));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        pushButton_1->setPalette(palette2);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Helvetica")});
        font3.setPointSize(24);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(false);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        font3.setStyleStrategy(QFont::PreferDefault);
        pushButton_1->setFont(font3);
        pushButton_1->setMouseTracking(false);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: white; \n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_1->setCheckable(false);
        pushButton_1->setChecked(false);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(270, 110, 61, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        pushButton_2->setPalette(palette3);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Helvetica")});
        font4.setPointSize(24);
        font4.setBold(true);
        pushButton_2->setFont(font4);
        pushButton_2->setMouseTracking(false);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: white; \n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_2->setCheckable(false);
        pushButton_2->setChecked(false);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(true);
        pushButton_4->setGeometry(QRect(200, 160, 61, 41));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        pushButton_4->setPalette(palette4);
        pushButton_4->setFont(font2);
        pushButton_4->setMouseTracking(false);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: white; \n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_4->setCheckable(false);
        pushButton_4->setChecked(false);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setEnabled(true);
        pushButton_5->setGeometry(QRect(270, 160, 61, 41));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        pushButton_5->setPalette(palette5);
        pushButton_5->setFont(font2);
        pushButton_5->setMouseTracking(false);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: white; \n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_5->setCheckable(false);
        pushButton_5->setChecked(false);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setEnabled(true);
        pushButton_6->setGeometry(QRect(340, 160, 61, 41));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        pushButton_6->setPalette(palette6);
        pushButton_6->setFont(font2);
        pushButton_6->setMouseTracking(false);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: white; \n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_6->setCheckable(false);
        pushButton_6->setChecked(false);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setEnabled(true);
        pushButton_7->setGeometry(QRect(200, 210, 61, 41));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        pushButton_7->setPalette(palette7);
        pushButton_7->setFont(font2);
        pushButton_7->setMouseTracking(false);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: white; \n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_7->setCheckable(false);
        pushButton_7->setChecked(false);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setEnabled(true);
        pushButton_8->setGeometry(QRect(270, 210, 61, 41));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        pushButton_8->setPalette(palette8);
        pushButton_8->setFont(font2);
        pushButton_8->setMouseTracking(false);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: white; \n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_8->setCheckable(false);
        pushButton_8->setChecked(false);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setEnabled(true);
        pushButton_9->setGeometry(QRect(340, 210, 61, 41));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        pushButton_9->setPalette(palette9);
        pushButton_9->setFont(font2);
        pushButton_9->setMouseTracking(false);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: white; \n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_9->setCheckable(false);
        pushButton_9->setChecked(false);
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setEnabled(true);
        pushButton_0->setGeometry(QRect(270, 260, 61, 41));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        pushButton_0->setPalette(palette10);
        QFont font5;
        font5.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font5.setPointSize(24);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setUnderline(false);
        font5.setStrikeOut(false);
        pushButton_0->setFont(font5);
        pushButton_0->setMouseTracking(false);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: white; \n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_0->setCheckable(false);
        pushButton_0->setChecked(false);
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setEnabled(true);
        pushButton_plus->setGeometry(QRect(140, 70, 51, 31));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(145, 145, 145, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_plus->setPalette(palette11);
        QFont font6;
        font6.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font6.setPointSize(24);
        font6.setBold(false);
        pushButton_plus->setFont(font6);
        pushButton_plus->setMouseTracking(false);
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_plus->setCheckable(false);
        pushButton_plus->setChecked(false);
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setEnabled(true);
        pushButton_minus->setGeometry(QRect(140, 110, 51, 31));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_minus->setPalette(palette12);
        pushButton_minus->setFont(font6);
        pushButton_minus->setMouseTracking(false);
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_minus->setCheckable(false);
        pushButton_minus->setChecked(false);
        pushButton_mult = new QPushButton(centralwidget);
        pushButton_mult->setObjectName(QString::fromUtf8("pushButton_mult"));
        pushButton_mult->setEnabled(true);
        pushButton_mult->setGeometry(QRect(140, 150, 51, 31));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_mult->setPalette(palette13);
        QFont font7;
        font7.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font7.setPointSize(36);
        font7.setBold(false);
        pushButton_mult->setFont(font7);
        pushButton_mult->setMouseTracking(false);
        pushButton_mult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_mult->setCheckable(false);
        pushButton_mult->setChecked(false);
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setEnabled(true);
        pushButton_div->setGeometry(QRect(140, 190, 51, 31));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_div->setPalette(palette14);
        pushButton_div->setFont(font6);
        pushButton_div->setMouseTracking(false);
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_div->setCheckable(false);
        pushButton_div->setChecked(false);
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName(QString::fromUtf8("pushButton_mod"));
        pushButton_mod->setEnabled(true);
        pushButton_mod->setGeometry(QRect(140, 230, 51, 31));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_mod->setPalette(palette15);
        QFont font8;
        font8.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font8.setPointSize(18);
        font8.setBold(false);
        pushButton_mod->setFont(font8);
        pushButton_mod->setMouseTracking(false);
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_mod->setCheckable(false);
        pushButton_mod->setChecked(false);
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setEnabled(true);
        pushButton_ln->setGeometry(QRect(80, 110, 51, 31));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_ln->setPalette(palette16);
        pushButton_ln->setFont(font6);
        pushButton_ln->setMouseTracking(false);
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_ln->setCheckable(false);
        pushButton_ln->setChecked(false);
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setEnabled(true);
        pushButton_cos->setGeometry(QRect(80, 150, 51, 31));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_cos->setPalette(palette17);
        pushButton_cos->setFont(font6);
        pushButton_cos->setMouseTracking(false);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_cos->setCheckable(false);
        pushButton_cos->setChecked(false);
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setEnabled(true);
        pushButton_tan->setGeometry(QRect(80, 230, 51, 31));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_tan->setPalette(palette18);
        pushButton_tan->setFont(font6);
        pushButton_tan->setMouseTracking(false);
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_tan->setCheckable(false);
        pushButton_tan->setChecked(false);
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setEnabled(true);
        pushButton_log->setGeometry(QRect(80, 70, 51, 31));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_log->setPalette(palette19);
        pushButton_log->setFont(font6);
        pushButton_log->setMouseTracking(false);
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_log->setCheckable(false);
        pushButton_log->setChecked(false);
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setEnabled(true);
        pushButton_sin->setGeometry(QRect(80, 190, 51, 31));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_sin->setPalette(palette20);
        pushButton_sin->setFont(font6);
        pushButton_sin->setMouseTracking(false);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_sin->setCheckable(false);
        pushButton_sin->setChecked(false);
        pushButton_point = new QPushButton(centralwidget);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));
        pushButton_point->setEnabled(true);
        pushButton_point->setGeometry(QRect(200, 260, 61, 41));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        pushButton_point->setPalette(palette21);
        QFont font9;
        font9.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font9.setPointSize(48);
        font9.setBold(true);
        font9.setItalic(false);
        font9.setUnderline(false);
        font9.setStrikeOut(false);
        pushButton_point->setFont(font9);
        pushButton_point->setMouseTracking(false);
        pushButton_point->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: white; \n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_point->setCheckable(false);
        pushButton_point->setChecked(false);
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setEnabled(true);
        pushButton_equal->setGeometry(QRect(340, 260, 111, 41));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush4(QColor(110, 165, 197, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        pushButton_equal->setPalette(palette22);
        QFont font10;
        font10.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font10.setPointSize(36);
        font10.setBold(true);
        font10.setItalic(false);
        font10.setUnderline(false);
        font10.setStrikeOut(false);
        pushButton_equal->setFont(font10);
        pushButton_equal->setMouseTracking(false);
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(110, 165, 197);\n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_equal->setCheckable(false);
        pushButton_equal->setChecked(false);
        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setEnabled(true);
        pushButton_del->setGeometry(QRect(410, 70, 41, 81));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush5(QColor(66, 66, 66, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_del->setPalette(palette23);
        pushButton_del->setFont(font2);
        pushButton_del->setMouseTracking(false);
        pushButton_del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(66, 66, 66);\n"
"\n"
"color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_del->setCheckable(false);
        pushButton_del->setChecked(false);
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setEnabled(true);
        pushButton_acos->setGeometry(QRect(20, 150, 51, 31));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette24.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette24.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette24.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette24.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_acos->setPalette(palette24);
        pushButton_acos->setFont(font8);
        pushButton_acos->setMouseTracking(false);
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_acos->setCheckable(false);
        pushButton_acos->setChecked(false);
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setEnabled(true);
        pushButton_atan->setGeometry(QRect(20, 230, 51, 31));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette25.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette25.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette25.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette25.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_atan->setPalette(palette25);
        pushButton_atan->setFont(font8);
        pushButton_atan->setMouseTracking(false);
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_atan->setCheckable(false);
        pushButton_atan->setChecked(false);
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setEnabled(true);
        pushButton_asin->setGeometry(QRect(20, 190, 51, 31));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette26.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette26.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette26.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_asin->setPalette(palette26);
        pushButton_asin->setFont(font8);
        pushButton_asin->setMouseTracking(false);
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_asin->setCheckable(false);
        pushButton_asin->setChecked(false);
        pushButton_ac = new QPushButton(centralwidget);
        pushButton_ac->setObjectName(QString::fromUtf8("pushButton_ac"));
        pushButton_ac->setEnabled(true);
        pushButton_ac->setGeometry(QRect(410, 160, 41, 91));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette27.setBrush(QPalette::Active, QPalette::Button, brush5);
        palette27.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush5);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush5);
        palette27.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush5);
        palette27.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_ac->setPalette(palette27);
        QFont font11;
        font11.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font11.setPointSize(18);
        font11.setBold(true);
        pushButton_ac->setFont(font11);
        pushButton_ac->setMouseTracking(false);
        pushButton_ac->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(66, 66, 66);\n"
"\n"
"color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_ac->setCheckable(false);
        pushButton_ac->setChecked(false);
        pushButton_openh = new QPushButton(centralwidget);
        pushButton_openh->setObjectName(QString::fromUtf8("pushButton_openh"));
        pushButton_openh->setEnabled(true);
        pushButton_openh->setGeometry(QRect(20, 270, 51, 31));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette28.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette28.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette28.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette28.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_openh->setPalette(palette28);
        pushButton_openh->setFont(font6);
        pushButton_openh->setMouseTracking(false);
        pushButton_openh->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_openh->setCheckable(false);
        pushButton_openh->setChecked(false);
        pushButton_pow = new QPushButton(centralwidget);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setEnabled(true);
        pushButton_pow->setGeometry(QRect(140, 270, 51, 31));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette29.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette29.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette29.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette29.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette29.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette29.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette29.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette29.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette29.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette29.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette29.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette29.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette29.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette29.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette29.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_pow->setPalette(palette29);
        pushButton_pow->setFont(font8);
        pushButton_pow->setMouseTracking(false);
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_pow->setCheckable(false);
        pushButton_pow->setChecked(false);
        pushButton_closeh = new QPushButton(centralwidget);
        pushButton_closeh->setObjectName(QString::fromUtf8("pushButton_closeh"));
        pushButton_closeh->setEnabled(true);
        pushButton_closeh->setGeometry(QRect(80, 270, 51, 31));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette30.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette30.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette30.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette30.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette30.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette30.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette30.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette30.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette30.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette30.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette30.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette30.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette30.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette30.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette30.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette30.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette30.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_closeh->setPalette(palette30);
        pushButton_closeh->setFont(font6);
        pushButton_closeh->setMouseTracking(false);
        pushButton_closeh->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_closeh->setCheckable(false);
        pushButton_closeh->setChecked(false);
        pushButton_graph = new QPushButton(centralwidget);
        pushButton_graph->setObjectName(QString::fromUtf8("pushButton_graph"));
        pushButton_graph->setEnabled(true);
        pushButton_graph->setGeometry(QRect(200, 70, 111, 31));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush6(QColor(247, 255, 183, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette31.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette31.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette31.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette31.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette31.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette31.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette31.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette31.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette31.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette31.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette31.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette31.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette31.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette31.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette31.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette31.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette31.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        pushButton_graph->setPalette(palette31);
        QFont font12;
        font12.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        font12.setPointSize(19);
        font12.setBold(true);
        pushButton_graph->setFont(font12);
        pushButton_graph->setMouseTracking(false);
        pushButton_graph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(247, 255, 183);\n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_graph->setCheckable(false);
        pushButton_graph->setChecked(false);
        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setEnabled(true);
        pushButton_x->setGeometry(QRect(320, 70, 81, 31));
        QPalette palette32;
        palette32.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette32.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette32.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette32.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette32.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette32.setBrush(QPalette::Active, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette32.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette32.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette32.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette32.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette32.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette32.setBrush(QPalette::Inactive, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette32.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette32.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette32.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette32.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette32.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette32.setBrush(QPalette::Disabled, QPalette::Window, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        pushButton_x->setPalette(palette32);
        pushButton_x->setFont(font2);
        pushButton_x->setMouseTracking(false);
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(247, 255, 183);\n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_x->setCheckable(false);
        pushButton_x->setChecked(false);
        label = new QLineEdit(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 20, 361, 41));
        QFont font13;
        font13.setPointSize(24);
        label->setFont(font13);
        label->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"qproperty-alignment: 'AlignRight';\n"
"border-bottom: 2px solid rgb(247, 255, 183);\n"
"background-color : white;\n"
"color: rgb(84, 84, 85);\n"
"}"));
        pushButton_acos_2 = new QPushButton(centralwidget);
        pushButton_acos_2->setObjectName(QString::fromUtf8("pushButton_acos_2"));
        pushButton_acos_2->setEnabled(true);
        pushButton_acos_2->setGeometry(QRect(20, 70, 51, 71));
        QPalette palette33;
        palette33.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette33.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette33.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette33.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette33.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette33.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette33.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette33.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette33.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette33.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette33.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette33.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette33.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette33.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette33.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette33.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette33.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette33.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        pushButton_acos_2->setPalette(palette33);
        pushButton_acos_2->setFont(font8);
        pushButton_acos_2->setMouseTracking(false);
        pushButton_acos_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(145, 145, 145);\n"
"	color: rgb(255, 255, 255);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_acos_2->setCheckable(false);
        pushButton_acos_2->setChecked(false);
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(20, 320, 211, 41));
        QFont font14;
        font14.setPointSize(18);
        font14.setBold(true);
        pushButton_10->setFont(font14);
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(247, 255, 183);\n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(240, 320, 211, 41));
        pushButton_11->setFont(font14);
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"  background-color: rgb(247, 255, 183);\n"
"color: rgb(84, 84, 85);\n"
"  border: 1px solid gray;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
" background-color: qradialgradient(spread:pad, cx:0.504926, cy:0.431818, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 139, 214, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "ESC", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_1->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_9->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_0->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_plus->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_minus->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_mult->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_div->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_mod->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_ln->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_cos->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_tan->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_log->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_sin->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_point->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_equal->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_del->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_del->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_acos->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_atan->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_asin->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_ac->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_ac->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_openh->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_openh->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_pow->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_pow->setText(QCoreApplication::translate("MainWindow", "pow", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_closeh->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_closeh->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_graph->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_graph->setText(QCoreApplication::translate("MainWindow", "graph", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_x->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_acos_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pushButton_acos_2->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Credit", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
