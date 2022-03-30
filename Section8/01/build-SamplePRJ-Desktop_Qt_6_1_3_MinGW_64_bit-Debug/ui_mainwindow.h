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
#include <QtWidgets/QLabel>
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
    QPushButton *CalculateButton;
    QLineEdit *AInput;
    QLineEdit *CInput;
    QLineEdit *BInput;
    QLabel *Alabel;
    QLabel *Blabel;
    QLabel *Clabel;
    QLabel *MainLable;
    QLabel *SituationDisplay;
    QLabel *Answ1Display;
    QLabel *Answ2Display;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(747, 166);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        CalculateButton = new QPushButton(centralwidget);
        CalculateButton->setObjectName(QString::fromUtf8("CalculateButton"));
        CalculateButton->setGeometry(QRect(440, 10, 80, 111));
        AInput = new QLineEdit(centralwidget);
        AInput->setObjectName(QString::fromUtf8("AInput"));
        AInput->setGeometry(QRect(270, 10, 113, 31));
        CInput = new QLineEdit(centralwidget);
        CInput->setObjectName(QString::fromUtf8("CInput"));
        CInput->setGeometry(QRect(270, 90, 113, 31));
        BInput = new QLineEdit(centralwidget);
        BInput->setObjectName(QString::fromUtf8("BInput"));
        BInput->setGeometry(QRect(270, 50, 113, 31));
        Alabel = new QLabel(centralwidget);
        Alabel->setObjectName(QString::fromUtf8("Alabel"));
        Alabel->setGeometry(QRect(240, 20, 21, 16));
        Blabel = new QLabel(centralwidget);
        Blabel->setObjectName(QString::fromUtf8("Blabel"));
        Blabel->setGeometry(QRect(240, 60, 21, 16));
        Clabel = new QLabel(centralwidget);
        Clabel->setObjectName(QString::fromUtf8("Clabel"));
        Clabel->setGeometry(QRect(240, 100, 21, 16));
        MainLable = new QLabel(centralwidget);
        MainLable->setObjectName(QString::fromUtf8("MainLable"));
        MainLable->setGeometry(QRect(0, 10, 221, 16));
        SituationDisplay = new QLabel(centralwidget);
        SituationDisplay->setObjectName(QString::fromUtf8("SituationDisplay"));
        SituationDisplay->setGeometry(QRect(550, 50, 171, 16));
        Answ1Display = new QLabel(centralwidget);
        Answ1Display->setObjectName(QString::fromUtf8("Answ1Display"));
        Answ1Display->setGeometry(QRect(550, 80, 171, 16));
        Answ2Display = new QLabel(centralwidget);
        Answ2Display->setObjectName(QString::fromUtf8("Answ2Display"));
        Answ2Display->setGeometry(QRect(550, 100, 171, 16));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(540, 20, 71, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 747, 20));
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
        CalculateButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        Alabel->setText(QCoreApplication::translate("MainWindow", "A:", nullptr));
        Blabel->setText(QCoreApplication::translate("MainWindow", "B:", nullptr));
        Clabel->setText(QCoreApplication::translate("MainWindow", "C:", nullptr));
        MainLable->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\320\264\320\270\321\202\320\265 \321\207\320\273\320\265\320\275\321\213 \320\272\320\262\320\260\320\264\321\200\320\260\321\202\320\270\321\207\320\275\320\276\320\263\320\276 \321\203\321\200\320\260\320\262\320\275\320\265\320\275\320\270\321\217:", nullptr));
        SituationDisplay->setText(QString());
        Answ1Display->setText(QString());
        Answ2Display->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
