#-------------------------------------------------
#
# Project created by QtCreator 2014-07-27T14:20:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PW-Sat2-sim-soft
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    Accumulator.cpp \
    AdcsModule.cpp \
    CommModule.cpp \
    DataOperator.cpp \
    EpsModule.cpp \
    Module.cpp \
    RealCommunicationCalc.cpp \
    RealOrbitPosition.cpp \
    SolarPanel.cpp

HEADERS  += mainwindow.h \
    Accumulator.h \
    AdcsModule.h \
    CommModule.h \
    DataOperator.h \
    EpsModule.h \
    Module.h \
    RealCommunicationCalc.h \
    RealOrbitPosition.h \
    SolarPanel.h

FORMS    += mainwindow.ui
