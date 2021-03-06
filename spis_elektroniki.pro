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
    dialog.cpp \
    pugixml.cpp \
    skroty.cpp

HEADERS  += mainwindow.h \
    eitem.h \
    dialog.h \
    pugiconfig.hpp \
    pugixml.hpp \
    skroty.h

FORMS    += mainwindow.ui \
    dialog.ui \
    skroty.ui

RESOURCES += \
    images/images.qrc

OTHER_FILES +=
