import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: "Excel Data Viewer"

    ListView {
        anchors.fill: parent
        model: dataModel

        delegate: Item {
            width: parent.width
            height: 40
            Row {
                spacing: 10
                Text {
                    text: "ID: " + modelData.id
                }
                Text {
                    text: "Name: " + modelData.name
                }
                Text {
                    text: "Value: " + modelData.value
                }
            }
        }
    }
}
