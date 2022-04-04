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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
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
    QLabel *MainLable_2;
    QLabel *ASide;
    QLabel *BSide;
    QLabel *Andgle;
    QLineEdit *ASideValue;
    QLineEdit *BSideValue;
    QLineEdit *AngleValue;
    QPushButton *CSideCalculate;
    QLabel *RandomTXT;
    QLabel *CSideValue;
    QRadioButton *CheckDegrees;
    QRadioButton *CheckRadians;
    QLabel *RandomTXT_2;
    QPlainTextEdit *InputWindow;
    QTextEdit *OutputWindow;
    QPushButton *AddButton;
    QPushButton *OverrideButton;
    QPushButton *EditAddButton;
    QLabel *RandomTXT_3;
    QLabel *RandomTXT_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(747, 524);
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
        MainLable->setGeometry(QRect(10, 10, 221, 16));
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
        MainLable_2 = new QLabel(centralwidget);
        MainLable_2->setObjectName(QString::fromUtf8("MainLable_2"));
        MainLable_2->setGeometry(QRect(10, 140, 301, 16));
        ASide = new QLabel(centralwidget);
        ASide->setObjectName(QString::fromUtf8("ASide"));
        ASide->setGeometry(QRect(30, 180, 21, 16));
        BSide = new QLabel(centralwidget);
        BSide->setObjectName(QString::fromUtf8("BSide"));
        BSide->setGeometry(QRect(30, 220, 21, 16));
        Andgle = new QLabel(centralwidget);
        Andgle->setObjectName(QString::fromUtf8("Andgle"));
        Andgle->setGeometry(QRect(30, 260, 21, 16));
        ASideValue = new QLineEdit(centralwidget);
        ASideValue->setObjectName(QString::fromUtf8("ASideValue"));
        ASideValue->setGeometry(QRect(50, 170, 113, 31));
        BSideValue = new QLineEdit(centralwidget);
        BSideValue->setObjectName(QString::fromUtf8("BSideValue"));
        BSideValue->setGeometry(QRect(50, 210, 113, 31));
        AngleValue = new QLineEdit(centralwidget);
        AngleValue->setObjectName(QString::fromUtf8("AngleValue"));
        AngleValue->setGeometry(QRect(50, 250, 113, 31));
        CSideCalculate = new QPushButton(centralwidget);
        CSideCalculate->setObjectName(QString::fromUtf8("CSideCalculate"));
        CSideCalculate->setGeometry(QRect(300, 170, 80, 111));
        RandomTXT = new QLabel(centralwidget);
        RandomTXT->setObjectName(QString::fromUtf8("RandomTXT"));
        RandomTXT->setGeometry(QRect(420, 180, 71, 16));
        CSideValue = new QLabel(centralwidget);
        CSideValue->setObjectName(QString::fromUtf8("CSideValue"));
        CSideValue->setGeometry(QRect(420, 210, 171, 16));
        CheckDegrees = new QRadioButton(centralwidget);
        CheckDegrees->setObjectName(QString::fromUtf8("CheckDegrees"));
        CheckDegrees->setGeometry(QRect(190, 240, 69, 19));
        CheckRadians = new QRadioButton(centralwidget);
        CheckRadians->setObjectName(QString::fromUtf8("CheckRadians"));
        CheckRadians->setGeometry(QRect(190, 260, 70, 19));
        RandomTXT_2 = new QLabel(centralwidget);
        RandomTXT_2->setObjectName(QString::fromUtf8("RandomTXT_2"));
        RandomTXT_2->setGeometry(QRect(190, 220, 71, 16));
        InputWindow = new QPlainTextEdit(centralwidget);
        InputWindow->setObjectName(QString::fromUtf8("InputWindow"));
        InputWindow->setGeometry(QRect(20, 330, 261, 151));
        OutputWindow = new QTextEdit(centralwidget);
        OutputWindow->setObjectName(QString::fromUtf8("OutputWindow"));
        OutputWindow->setGeometry(QRect(460, 330, 261, 151));
        AddButton = new QPushButton(centralwidget);
        AddButton->setObjectName(QString::fromUtf8("AddButton"));
        AddButton->setGeometry(QRect(300, 330, 141, 41));
        OverrideButton = new QPushButton(centralwidget);
        OverrideButton->setObjectName(QString::fromUtf8("OverrideButton"));
        OverrideButton->setGeometry(QRect(300, 380, 141, 41));
        EditAddButton = new QPushButton(centralwidget);
        EditAddButton->setObjectName(QString::fromUtf8("EditAddButton"));
        EditAddButton->setGeometry(QRect(300, 430, 141, 41));
        RandomTXT_3 = new QLabel(centralwidget);
        RandomTXT_3->setObjectName(QString::fromUtf8("RandomTXT_3"));
        RandomTXT_3->setGeometry(QRect(130, 310, 71, 16));
        RandomTXT_4 = new QLabel(centralwidget);
        RandomTXT_4->setObjectName(QString::fromUtf8("RandomTXT_4"));
        RandomTXT_4->setGeometry(QRect(570, 310, 71, 16));
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
        MainLable_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\262\320\265 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 \321\202\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272\320\260 \320\270 \321\203\320\263\320\276\320\273 \320\274\320\265\320\266\320\264\321\203 \320\275\320\270\320\274\320\270:", nullptr));
        ASide->setText(QCoreApplication::translate("MainWindow", "A:", nullptr));
        BSide->setText(QCoreApplication::translate("MainWindow", "B:", nullptr));
        Andgle->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-family:'arial','sans-serif'; font-size:14px; color:#000000; background-color:#ffffff;\">\316\261</span>:</p></body></html>", nullptr));
        CSideCalculate->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        RandomTXT->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        CSideValue->setText(QString());
        CheckDegrees->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\320\264\321\203\321\201\321\213", nullptr));
        CheckRadians->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\264\320\270\320\260\320\275\321\213", nullptr));
        RandomTXT_2->setText(QCoreApplication::translate("MainWindow", "\320\243\320\263\320\276\320\273 \320\262 \321\200\320\260\320\264\320\270\320\260\320\275\320\260\321\205!", nullptr));
        AddButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        OverrideButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        EditAddButton->setText(QCoreApplication::translate("MainWindow", "\"\320\240\320\260\320\275\320\264\320\276\320\274\320\275\321\213\320\271\" \321\202\320\265\320\272\321\201\321\202", nullptr));
        RandomTXT_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264", nullptr));
        RandomTXT_4->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\321\207\321\202\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
