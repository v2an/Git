/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *LoginFrame;
    QWidget *gridLayoutWidget;
    QGridLayout *LoginGrid;
    QLineEdit *PasswordInput;
    QLineEdit *LoginInput;
    QPushButton *LoginEnter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(108, 108, 108);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        LoginFrame = new QWidget(centralwidget);
        LoginFrame->setObjectName(QString::fromUtf8("LoginFrame"));
        LoginFrame->setGeometry(QRect(210, 180, 301, 201));
        LoginFrame->setLayoutDirection(Qt::LeftToRight);
        LoginFrame->setAutoFillBackground(false);
        LoginFrame->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        gridLayoutWidget = new QWidget(LoginFrame);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 261, 161));
        LoginGrid = new QGridLayout(gridLayoutWidget);
        LoginGrid->setObjectName(QString::fromUtf8("LoginGrid"));
        LoginGrid->setContentsMargins(30, 0, 30, 0);
        PasswordInput = new QLineEdit(gridLayoutWidget);
        PasswordInput->setObjectName(QString::fromUtf8("PasswordInput"));

        LoginGrid->addWidget(PasswordInput, 1, 0, 1, 1);

        LoginInput = new QLineEdit(gridLayoutWidget);
        LoginInput->setObjectName(QString::fromUtf8("LoginInput"));

        LoginGrid->addWidget(LoginInput, 0, 0, 1, 1);

        LoginEnter = new QPushButton(gridLayoutWidget);
        LoginEnter->setObjectName(QString::fromUtf8("LoginEnter"));

        LoginGrid->addWidget(LoginEnter, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        PasswordInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        LoginInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        LoginEnter->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
