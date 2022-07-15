QT       += core gui widgets

CONFIG += c++17

include($$PWD/../mylib.pri)

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui
