/********************************************************************************
** Form generated from reading UI file 'foldervewer.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLDERVEWER_H
#define UI_FOLDERVEWER_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_FolderVewer
{
public:
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QPushButton *SButtonCurrent;
    QTextEdit *SResoult;
    QLabel *SNameL;
    QPushButton *SButton;
    QLabel *SLabel;
    QLineEdit *SInput;
    QLabel *SDiskL;
    QComboBox *SDiskB;
    QLabel *SStatus;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *CurrFolder;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;
    QTreeView *treeView;

    void setupUi(QDialog *FolderVewer)
    {
        if (FolderVewer->objectName().isEmpty())
            FolderVewer->setObjectName(QString::fromUtf8("FolderVewer"));
        FolderVewer->resize(1065, 565);
        gridLayout_4 = new QGridLayout(FolderVewer);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        SButtonCurrent = new QPushButton(FolderVewer);
        SButtonCurrent->setObjectName(QString::fromUtf8("SButtonCurrent"));
        SButtonCurrent->setLocale(QLocale(QLocale::Russian, QLocale::Russia));

        gridLayout_2->addWidget(SButtonCurrent, 1, 5, 1, 1);

        SResoult = new QTextEdit(FolderVewer);
        SResoult->setObjectName(QString::fromUtf8("SResoult"));

        gridLayout_2->addWidget(SResoult, 2, 0, 1, 6);

        SNameL = new QLabel(FolderVewer);
        SNameL->setObjectName(QString::fromUtf8("SNameL"));

        gridLayout_2->addWidget(SNameL, 1, 2, 1, 1);

        SButton = new QPushButton(FolderVewer);
        SButton->setObjectName(QString::fromUtf8("SButton"));

        gridLayout_2->addWidget(SButton, 1, 4, 1, 1);

        SLabel = new QLabel(FolderVewer);
        SLabel->setObjectName(QString::fromUtf8("SLabel"));
        SLabel->setLayoutDirection(Qt::LeftToRight);
        SLabel->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(SLabel, 0, 0, 1, 6);

        SInput = new QLineEdit(FolderVewer);
        SInput->setObjectName(QString::fromUtf8("SInput"));

        gridLayout_2->addWidget(SInput, 1, 3, 1, 1);

        SDiskL = new QLabel(FolderVewer);
        SDiskL->setObjectName(QString::fromUtf8("SDiskL"));

        gridLayout_2->addWidget(SDiskL, 1, 0, 1, 1);

        SDiskB = new QComboBox(FolderVewer);
        SDiskB->setObjectName(QString::fromUtf8("SDiskB"));

        gridLayout_2->addWidget(SDiskB, 1, 1, 1, 1);

        SStatus = new QLabel(FolderVewer);
        SStatus->setObjectName(QString::fromUtf8("SStatus"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SStatus->sizePolicy().hasHeightForWidth());
        SStatus->setSizePolicy(sizePolicy);
        SStatus->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(SStatus, 3, 0, 1, 6);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CurrFolder = new QLabel(FolderVewer);
        CurrFolder->setObjectName(QString::fromUtf8("CurrFolder"));

        horizontalLayout->addWidget(CurrFolder);

        lineEdit = new QLineEdit(FolderVewer);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(FolderVewer);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);

        treeView = new QTreeView(FolderVewer);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        retranslateUi(FolderVewer);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FolderVewer, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FolderVewer, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FolderVewer);
    } // setupUi

    void retranslateUi(QDialog *FolderVewer)
    {
        FolderVewer->setWindowTitle(QCoreApplication::translate("FolderVewer", "Dialog", nullptr));
        SButtonCurrent->setText(QCoreApplication::translate("FolderVewer", "Search in current!", nullptr));
        SNameL->setText(QCoreApplication::translate("FolderVewer", "Searching file:", nullptr));
        SButton->setText(QCoreApplication::translate("FolderVewer", "Search!", nullptr));
        SLabel->setText(QCoreApplication::translate("FolderVewer", "SEARCH", nullptr));
        SDiskL->setText(QCoreApplication::translate("FolderVewer", "Disk:", nullptr));
        SStatus->setText(QCoreApplication::translate("FolderVewer", "Status", nullptr));
        CurrFolder->setText(QCoreApplication::translate("FolderVewer", "Current folder:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FolderVewer: public Ui_FolderVewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLDERVEWER_H
