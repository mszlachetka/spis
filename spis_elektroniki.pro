#-------------------------------------------------
#
# Project created by QtCreator 2014-07-06T18:33:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = spis_elektroniki
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    eitem.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    eitem.h \
    dialog.h

FORMS    += mainwindow.ui \
    dialog.ui
