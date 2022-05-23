QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

TRANSLATIONS += HW4_ru.ts HW4_en.ts

SOURCES += \
    dialog.cpp \
    foldervewer.cpp \
    main.cpp \
    mainwindow.cpp \
    settwindget.cpp

HEADERS += \
    dialog.h \
    foldervewer.h \
    mainwindow.h \
    settwindget.h

FORMS += \
    dialog.ui \
    foldervewer.ui \
    mainwindow.ui \
    settwindget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    231.qrc

DISTFILES += \
    ../../../../../../Files/peizazh-art-fantastika-landscapes-digital-art-tacosauceninja — копия.jpg \
    ../../../../../../Files/peizazh-art-fantastika-landscapes-digital-art-tacosauceninja — копия.jpg
