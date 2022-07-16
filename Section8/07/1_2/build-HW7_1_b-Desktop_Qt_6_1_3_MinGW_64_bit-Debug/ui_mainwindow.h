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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *ChFont;
    QPushButton *FPaste;
    QPushButton *FCopy;
    QPushButton *ALeft;
    QPushButton *ARight;
    QPushButton *AMiddle;
    QTextEdit *Editor;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        ChFont = new QPushButton(centralwidget);
        ChFont->setObjectName(QString::fromUtf8("ChFont"));

        gridLayout->addWidget(ChFont, 0, 7, 1, 1);

        FPaste = new QPushButton(centralwidget);
        FPaste->setObjectName(QString::fromUtf8("FPaste"));

        gridLayout->addWidget(FPaste, 0, 1, 1, 1);

        FCopy = new QPushButton(centralwidget);
        FCopy->setObjectName(QString::fromUtf8("FCopy"));

        gridLayout->addWidget(FCopy, 0, 0, 1, 1);

        ALeft = new QPushButton(centralwidget);
        ALeft->setObjectName(QString::fromUtf8("ALeft"));

        gridLayout->addWidget(ALeft, 0, 3, 1, 1);

        ARight = new QPushButton(centralwidget);
        ARight->setObjectName(QString::fromUtf8("ARight"));

        gridLayout->addWidget(ARight, 0, 5, 1, 1);

        AMiddle = new QPushButton(centralwidget);
        AMiddle->setObjectName(QString::fromUtf8("AMiddle"));

        gridLayout->addWidget(AMiddle, 0, 4, 1, 1);

        Editor = new QTextEdit(centralwidget);
        Editor->setObjectName(QString::fromUtf8("Editor"));

        gridLayout->addWidget(Editor, 1, 0, 1, 8);


        verticalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

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
        ChFont->setText(QCoreApplication::translate("MainWindow", "Font", nullptr));
        FPaste->setText(QCoreApplication::translate("MainWindow", "Paste format", nullptr));
        FCopy->setText(QCoreApplication::translate("MainWindow", "Copy format", nullptr));
        ALeft->setText(QCoreApplication::translate("MainWindow", "Left", nullptr));
        ARight->setText(QCoreApplication::translate("MainWindow", "Right", nullptr));
        AMiddle->setText(QCoreApplication::translate("MainWindow", "Center", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
