#-------------------------------------------------
#
# Project created by QtCreator 2016-11-26T18:12:29
#
#-------------------------------------------------

QT       += core gui
QT+=multimediakit

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sound
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    soundplayer.cpp

HEADERS  += mainwindow.h \
    soundplayer.h

FORMS    += mainwindow.ui
