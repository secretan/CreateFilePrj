TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    readini.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    readini.h

