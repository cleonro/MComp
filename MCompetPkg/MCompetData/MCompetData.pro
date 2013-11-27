#-------------------------------------------------
#
# Project created by QtCreator 2013-11-27T12:09:27
#
#-------------------------------------------------

QT       -= gui

TARGET = MCompetData
TEMPLATE = lib

DEFINES += MCOMPETDATA_LIBRARY

SOURCES += mcompetdata.cpp \
    mitem.cpp \
    mplayeritem.cpp \
    mgroupitem.cpp \
    mtournamentitem.cpp \
    mcategoryitem.cpp \
    mgameitem.cpp

HEADERS += mcompetdata.h\
        mcompetdata_global.h \
    mitem.h \
    mplayeritem.h \
    mgroupitem.h \
    mtournamentitem.h \
    mcategoryitem.h \
    mgameitem.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
