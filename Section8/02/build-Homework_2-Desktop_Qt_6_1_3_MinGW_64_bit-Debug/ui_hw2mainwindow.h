/********************************************************************************
** Form generated from reading UI file 'hw2mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HW2MAINWINDOW_H
#define UI_HW2MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HW2MainWindow
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QCheckBox *IconsCheck;
    QLineEdit *AddInput;
    QPushButton *AddButton;
    QPushButton *UpButton;
    QPushButton *DownButton;
    QPushButton *DeleteButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HW2MainWindow)
    {
        if (HW2MainWindow->objectName().isEmpty())
            HW2MainWindow->setObjectName(QString::fromUtf8("HW2MainWindow"));
        HW2MainWindow->resize(640, 407);
        centralwidget = new QWidget(HW2MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 10, 371, 351));
        IconsCheck = new QCheckBox(centralwidget);
        IconsCheck->setObjectName(QString::fromUtf8("IconsCheck"));
        IconsCheck->setGeometry(QRect(400, 340, 101, 19));
        AddInput = new QLineEdit(centralwidget);
        AddInput->setObjectName(QString::fromUtf8("AddInput"));
        AddInput->setGeometry(QRect(400, 80, 141, 21));
        AddButton = new QPushButton(centralwidget);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setGeometry(QRect(550, 80, 80, 21));
        UpButton = new QPushButton(centralwidget);
        UpButton->setObjectName(QString::fromUtf8("UpButton"));
        UpButton->setGeometry(QRect(400, 20, 111, 21));
        DownButton = new QPushButton(centralwidget);
        DownButton->setObjectName(QString::fromUtf8("DownButton"));
        DownButton->setGeometry(QRect(520, 20, 111, 21));
        DeleteButton = new QPushButton(centralwidget);
        DeleteButton->setObjectName(QString::fromUtf8("DeleteButton"));
        DeleteButton->setGeometry(QRect(400, 140, 231, 31));
        HW2MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HW2MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 20));
        HW2MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(HW2MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HW2MainWindow->setStatusBar(statusbar);

        retranslateUi(HW2MainWindow);

        QMetaObject::connectSlotsByName(HW2MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HW2MainWindow)
    {
        HW2MainWindow->setWindowTitle(QCoreApplication::translate("HW2MainWindow", "HW2MainWindow", nullptr));
        IconsCheck->setText(QCoreApplication::translate("HW2MainWindow", "\320\230\320\272\320\276\320\275\320\272\320\270", nullptr));
        AddInput->setInputMask(QString());
        AddInput->setText(QString());
        AddButton->setText(QCoreApplication::translate("HW2MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        UpButton->setText(QCoreApplication::translate("HW2MainWindow", "\320\222\320\262\320\265\321\200\321\205", nullptr));
        DownButton->setText(QCoreApplication::translate("HW2MainWindow", "\320\222\320\275\320\270\320\267", nullptr));
        DeleteButton->setText(QCoreApplication::translate("HW2MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HW2MainWindow: public Ui_HW2MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HW2MAINWINDOW_H
