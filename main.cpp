#include <iostream>
#include <stdio.h>
#include <QApplication>
#include "etudiant.h"
#include "convention.h"
#include "attestation.h"


#include <QQuickStyle>
#include <QQuickView>


#include <QApplication>
#include <QtQml> // librairie contenant qmlRegisterType
#include <QtSql>
#include <QQmlContext>
#include <QQmlEngine>



using namespace std;

int main(int argc, char *argv[])
{


    QApplication app(argc, argv);
    QQmlApplicationEngine engine;


    Etudiant etud;
    //Convention conv;
    Attestation att;
    engine.rootContext()->setContextProperty("Etudiant", &etud);
    //engine.rootContext()->setContextProperty("Convention", &conv);
    engine.rootContext()->setContextProperty("Attestation", &att);
    engine.load(QUrl(QStringLiteral("qrc:/form.qml")));


    if (engine.rootObjects().isEmpty())
           return -1;


    return app.exec();

}
