#-------------------------------------------------
#
# Project created by QtCreator 2017-09-29T19:26:03
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += core gui network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Project_Shield_Software_Version1_1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    secondwindow.cpp \
    mydatabase.cpp \
    interfacehandler.cpp \
    smtp.cpp \
    crypt.cpp \
    MY_thread.cpp \
    myserver.cpp

HEADERS  += mainwindow.h \
    secondwindow.h \
    mydatabase.h \
    interfacehandler.h \
    smtp.h \
    crypt.h \
    MY_thread.h \
    myserver.h

FORMS    += mainwindow.ui \
    secondwindow.ui

RESOURCES += \
    resources.qrc
