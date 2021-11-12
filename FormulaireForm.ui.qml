import QtQuick 2.4
import QtQuick 2.4
import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls 1.4

Item {

    property alias textEdit: textEdit
    property alias texte: texte
    property alias select: select
    property alias ins_db: ins_db
    property alias liste: liste
    property alias element: element

    width: 400
    height: 400

    TextEdit {
        id: textEdit
        x: 170
        y: 130
        width: 80
        height: 20
        text: qsTr("Text Area")
        font.pixelSize: 12
    }

    Text {
        id: texte
        x: 81
        y: 130
        text: qsTr("Nom convention")
        font.pixelSize: 12
    }

    Text {
        id: liste
        x: 200
        y: 8
        text: qsTr("liste")
        font.pixelSize: 12
    }

    Button {
        id: select
        text: qsTr("Select")
        width: 200
    }

    Button {
        id: ins_db
        text: qsTr("Insertion")
    }

    Text {
        id: element
        x: 200
        y: 28
        text: qsTr("Text")
        font.pixelSize: 12
    }
}
