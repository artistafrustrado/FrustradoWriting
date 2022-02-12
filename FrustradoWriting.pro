QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    export.cpp \
    export/exporter.cpp \
    exporthtml.cpp \
    exportlatex.cpp \
    exportmediawiki.cpp \
    exportpdf.cpp \
    main.cpp \
    skeleton.cpp \
    ui/Escaleta.cpp \
    ui/author.cpp \
    ui/board.cpp \
    ui/boardcard.cpp \
    ui/card.cpp \
    ui/character.cpp \
    ui/characteritem.cpp \
    ui/locations.cpp \
    ui/movieinfo.cpp \
    ui/outline.cpp \
    ui/plot.cpp \
    ui/reference.cpp \
    ui/refprops.cpp \
    ui/synopsis.cpp

HEADERS += \
    export.h \
    export/exporter.h \
    exporthtml.h \
    exportlatex.h \
    exportmediawiki.h \
    exportpdf.h \
    skeleton.h \
    ui/Escaleta.h \
    ui/author.h \
    ui/board.h \
    ui/boardcard.h \
    ui/card.h \
    ui/character.h \
    ui/characteritem.h \
    ui/locations.h \
    ui/movieinfo.h \
    ui/oard.h \
    ui/outline.h \
    ui/plot.h \
    ui/reference.h \
    ui/refprops.h \
    ui/synopsis.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resces.qrc
