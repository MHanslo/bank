#-------------------------------------------------
#
# Project created by QtCreator 2015-03-24T10:01:31
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = bank
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    savingsaccount.cpp \
    transaction.cpp \
    deposit.cpp \
    withdrawal.cpp \
    balanceenquiry.cpp

HEADERS += \
    savingsaccount.h \
    transaction.h \
    deposit.h \
    withdrawal.h \
    balanceenquiry.h
