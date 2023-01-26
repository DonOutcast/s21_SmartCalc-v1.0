QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../s21_SmartCalc.c \
    credit.cpp \
    depozit.cpp \
    graph_window.cpp \
    input_x.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp

HEADERS += \
    ../s21_SmartCalc.h \
    credit.h \
    depozit.h \
    graph_window.h \
    input_x.h \
    mainwindow.h \
    qcustomplot.h

FORMS += \
    credit.ui \
    depozit.ui \
    graph_window.ui \
    input_x.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
