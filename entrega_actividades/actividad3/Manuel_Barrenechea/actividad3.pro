TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    data.cpp \
    node.cpp \
    list.cpp

HEADERS += \
    data.h \
    node.h \
    list.h
