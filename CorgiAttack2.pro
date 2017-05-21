#-------------------------------------------------
#
# Project created by QtCreator 2017-05-17T17:01:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CorgiAttack2
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


SOURCES += main.cpp \
    doghouse.cpp \
    bullet.cpp \
    enemy.cpp \
    catbullet.cpp \
    corgibutt.cpp \
    bone.cpp \
    myscore.cpp \
    health.cpp \
    gameboard.cpp \
    win.cpp \
    corgi.cpp \
    lose.cpp \
    enemyscore.cpp \
    enemyhealth.cpp \
    deck.cpp

HEADERS  += \
    doghouse.h \
    bullet.h \
    enemy.h \
    catbullet.h \
    corgibutt.h \
    bone.h \
    myscore.h \
    health.h \
    win.h \
    gameboard.h \
    corgi.h \
    lose.h \
    enemyscore.h \
    enemyhealth.h \
    deck.h

FORMS    +=

RESOURCES += \
    resource.qrc

DISTFILES += \
    ../Documents/doghouse.png
