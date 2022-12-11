import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.12
import QtQuick.Layouts

/*
Window {
    id: mainFrame
    color: "#c9c9c9"
    width: 640
    height: 480
    visible: true
    title: qsTr("Площадь треугольника.lol")

    function calculationABC()
    {
        let dAsize = Number(aInput.text);
        let dBsize = Number(bInput.text);
        let dCsize = Number(cInput.text);
        let PValue = (dAsize + dBsize + dCsize)/2;
        let answer = Math.sqrt(PValue * (PValue - dAsize) * (PValue - dBsize) * (PValue - dCsize));
        sOutput.text = answer;
    }

        Rectangle
        {
            id: secondaryFrame
            color: "white"
            anchors.centerIn: parent
            radius: 5
            width: 300
            height: 250

            Column
            {
                anchors.centerIn: parent
                GridLayout
                {
                    id: grid
                    columns: 2

                    Text { text: "a:"; }
                    TextField { id: aInput; placeholderText: qsTr("Input side a"); }
                    Text { text: "b:"; }
                    TextField { id: bInput; placeholderText: qsTr("Input side b"); }
                    Text { text: "c:"; }
                    TextField { id: cInput; placeholderText: qsTr("Input side c"); }
                    Text { text: "Answer:"; }
                    Text { id: sOutput; text: "Answer" }
                }

                Button
                {
                    id: calculateButtonABC
                    width: 200
                    height: 40
                    background: Rectangle { color: parent.down ? "#bbbbbb" :
                                                    (parent.hovered ? "#d6d6d6" : "#f6f6f6")  }
                    text: qsTr("Calculate")
                    anchors.horizontalCenter: parent.horizontalCenter
                    onClicked: calculationABC()
                }
            }

        }
}

*/
Window {
    id: mainFrame2
    color: "#c9c9c9"
    width: 640
    height: 480
    visible: true
    title: qsTr("Площадь треугольника.lol")

    function calculationABC()
    {
        let dAsize = Math.sqrt((Number(xBInput.text) - Number(xAInput.text)) ** 2 + (Number(yBInput.text) - Number(yAInput.text)) ** 2);
        let dBsize = Math.sqrt((Number(xCInput.text) - Number(xBInput.text)) ** 2 + (Number(yCInput.text) - Number(yBInput.text)) ** 2);
        let dCsize = Math.sqrt((Number(xAInput.text) - Number(xCInput.text)) ** 2 + (Number(yAInput.text) - Number(yCInput.text)) ** 2);
        let PValue = (dAsize + dBsize + dCsize)/2;
        let answer = Math.sqrt(PValue * (PValue - dAsize) * (PValue - dBsize) * (PValue - dCsize));
        sOutput.text = answer;
    }

        Rectangle
        {
            id: secondaryFrame
            color: "white"
            anchors.centerIn: parent
            radius: 5
            width: 300
            height: 250


            Column
            {
                anchors.centerIn: parent
                GridLayout
                {
                    id: grid
                    columns: 5

                    Text { text: "Point A:"; }
                    Text { text: "X:"; }
                    TextField { id: xAInput; placeholderText: qsTr("Xa"); }
                    Text { text: "Y:"; }
                    TextField { id: yAInput; placeholderText: qsTr("Ya"); }

                    Text { text: "Point B:"; }
                    Text { text: "X:"; }
                    TextField { id: xBInput; placeholderText: qsTr("Xb"); }
                    Text { text: "Y:"; }
                    TextField { id: yBInput; placeholderText: qsTr("Yb"); }

                    Text { text: "Point C:"; }
                    Text { text: "X:"; }
                    TextField { id: xCInput; placeholderText: qsTr("Xc"); }
                    Text { text: "Y:"; }
                    TextField { id: yCInput; placeholderText: qsTr("Yc"); }

                }

                GridLayout
                {
                    id: answerGrid
                    columns: 2
                    anchors.horizontalCenter: parent.horizontalCenter
                    Text { text: "Answer:"; }
                    Text { id: sOutput; text: "answer" }
                }

                Button
                {
                    id: calculateButtonABC
                    width: 200
                    height: 40
                    background: Rectangle { color: parent.down ? "#bbbbbb" :
                                                    (parent.hovered ? "#d6d6d6" : "#f6f6f6")  }
                    text: qsTr("Calculate")
                    anchors.horizontalCenter: parent.horizontalCenter
                    onClicked: calculationABC()
                }
            }

        }
}
