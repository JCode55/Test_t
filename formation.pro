TEMPLATE = app

FORMS =
SOURCES = \
    main.cpp

QT += sql
QT += core gui
QT += qml
QT += quick
# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += console

INCLUDEPATH += C:\QtCreator\5.14.1\mingw73_64\include
DEPENDPATH += C:\QtCreator\5.14.1\mingw73_64\include

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += qml
QT += quick
QT += quickcontrols2
CONFIG += c++14



SOURCES += \
        attestation.cpp \
        convention.cpp \
        etudiant.cpp

HEADERS += \
    attestation.h \
    convention.h \
    etudiant.h

#FORMS +=

DISTFILES += \
    Formulaire.qml \
    FormulaireForm.ui.qml \
    form.qml

RESOURCES += \
    QML.qrc
