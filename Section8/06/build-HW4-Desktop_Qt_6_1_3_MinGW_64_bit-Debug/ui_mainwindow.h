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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
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
    QPushButton *SaveButton;
    QPushButton *OpenButton;
    QPushButton *ROOpenButton;
    QPushButton *HelpButton;
    QPushButton *CurrFolderButton;
    QPlainTextEdit *Editor;
    QHBoxLayout *horizontalLayout;
    QPushButton *Setts;
    QSpacerItem *horizontalSpacer_2;
    QLabel *ThemeLable;
    QPushButton *ThemeChange;
    QSpacerItem *horizontalSpacer;
    QLabel *TrText;
    QPushButton *TrEng;
    QPushButton *TrRus;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(707, 505);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        SaveButton = new QPushButton(centralwidget);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));

        gridLayout->addWidget(SaveButton, 1, 0, 1, 1);

        OpenButton = new QPushButton(centralwidget);
        OpenButton->setObjectName(QString::fromUtf8("OpenButton"));

        gridLayout->addWidget(OpenButton, 1, 1, 1, 1);

        ROOpenButton = new QPushButton(centralwidget);
        ROOpenButton->setObjectName(QString::fromUtf8("ROOpenButton"));

        gridLayout->addWidget(ROOpenButton, 1, 2, 1, 1);

        HelpButton = new QPushButton(centralwidget);
        HelpButton->setObjectName(QString::fromUtf8("HelpButton"));

        gridLayout->addWidget(HelpButton, 1, 3, 1, 1);

        CurrFolderButton = new QPushButton(centralwidget);
        CurrFolderButton->setObjectName(QString::fromUtf8("CurrFolderButton"));

        gridLayout->addWidget(CurrFolderButton, 1, 4, 1, 1);

        Editor = new QPlainTextEdit(centralwidget);
        Editor->setObjectName(QString::fromUtf8("Editor"));

        gridLayout->addWidget(Editor, 0, 0, 1, 5);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Setts = new QPushButton(centralwidget);
        Setts->setObjectName(QString::fromUtf8("Setts"));

        horizontalLayout->addWidget(Setts);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        ThemeLable = new QLabel(centralwidget);
        ThemeLable->setObjectName(QString::fromUtf8("ThemeLable"));

        horizontalLayout->addWidget(ThemeLable);

        ThemeChange = new QPushButton(centralwidget);
        ThemeChange->setObjectName(QString::fromUtf8("ThemeChange"));

        horizontalLayout->addWidget(ThemeChange);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        TrText = new QLabel(centralwidget);
        TrText->setObjectName(QString::fromUtf8("TrText"));

        horizontalLayout->addWidget(TrText);

        TrEng = new QPushButton(centralwidget);
        TrEng->setObjectName(QString::fromUtf8("TrEng"));

        horizontalLayout->addWidget(TrEng);

        TrRus = new QPushButton(centralwidget);
        TrRus->setObjectName(QString::fromUtf8("TrRus"));

        horizontalLayout->addWidget(TrRus);

        horizontalLayout->setStretch(4, 5);
        horizontalLayout->setStretch(5, 1);
        horizontalLayout->setStretch(6, 1);
        horizontalLayout->setStretch(7, 1);

        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 707, 20));
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
        SaveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        OpenButton->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        ROOpenButton->setText(QCoreApplication::translate("MainWindow", "Read only", nullptr));
        HelpButton->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        CurrFolderButton->setText(QCoreApplication::translate("MainWindow", "Current folder", nullptr));
        Setts->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        ThemeLable->setText(QCoreApplication::translate("MainWindow", "Theme:", nullptr));
        ThemeChange->setText(QCoreApplication::translate("MainWindow", "Theme", nullptr));
        TrText->setText(QCoreApplication::translate("MainWindow", "Language", nullptr));
        TrEng->setText(QCoreApplication::translate("MainWindow", "Eng", nullptr));
        TrRus->setText(QCoreApplication::translate("MainWindow", "Rus", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
