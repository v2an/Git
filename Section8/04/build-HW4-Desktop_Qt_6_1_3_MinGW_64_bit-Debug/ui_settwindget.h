/********************************************************************************
** Form generated from reading UI file 'settwindget.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTWINDGET_H
#define UI_SETTWINDGET_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SettWindget
{
public:
    QGridLayout *Settings;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout;
    QLabel *NewCurr;
    QLabel *Buttons;
    QLabel *OpenCurr;
    QLineEdit *OpenEdit;
    QLabel *CloseLable;
    QLineEdit *CloseEdit;
    QLineEdit *NewEdit;
    QLineEdit *SaveEdit;
    QLabel *NewLable;
    QLabel *SaveCurr;
    QLabel *Current;
    QLabel *SaveLable;
    QLabel *CloseCurr;
    QLabel *OpenLable;
    QPushButton *OpenApply;
    QPushButton *SaveApply;
    QPushButton *CloseApply;
    QPushButton *NewApply;
    QGridLayout *gridLayout_2;
    QRadioButton *AltChecker;
    QLabel *ModsLable;
    QRadioButton *ShiftChecker;
    QPushButton *ApplyMod;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_3;
    QDialogButtonBox *buttonBox;
    QPushButton *AppChange;
    QPushButton *Reset;

    void setupUi(QDialog *SettWindget)
    {
        if (SettWindget->objectName().isEmpty())
            SettWindget->setObjectName(QString::fromUtf8("SettWindget"));
        SettWindget->resize(400, 300);
        Settings = new QGridLayout(SettWindget);
        Settings->setObjectName(QString::fromUtf8("Settings"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        NewCurr = new QLabel(SettWindget);
        NewCurr->setObjectName(QString::fromUtf8("NewCurr"));

        gridLayout->addWidget(NewCurr, 4, 2, 1, 1);

        Buttons = new QLabel(SettWindget);
        Buttons->setObjectName(QString::fromUtf8("Buttons"));

        gridLayout->addWidget(Buttons, 0, 0, 1, 1);

        OpenCurr = new QLabel(SettWindget);
        OpenCurr->setObjectName(QString::fromUtf8("OpenCurr"));

        gridLayout->addWidget(OpenCurr, 1, 2, 1, 1);

        OpenEdit = new QLineEdit(SettWindget);
        OpenEdit->setObjectName(QString::fromUtf8("OpenEdit"));

        gridLayout->addWidget(OpenEdit, 1, 1, 1, 1);

        CloseLable = new QLabel(SettWindget);
        CloseLable->setObjectName(QString::fromUtf8("CloseLable"));

        gridLayout->addWidget(CloseLable, 3, 0, 1, 1);

        CloseEdit = new QLineEdit(SettWindget);
        CloseEdit->setObjectName(QString::fromUtf8("CloseEdit"));

        gridLayout->addWidget(CloseEdit, 3, 1, 1, 1);

        NewEdit = new QLineEdit(SettWindget);
        NewEdit->setObjectName(QString::fromUtf8("NewEdit"));

        gridLayout->addWidget(NewEdit, 4, 1, 1, 1);

        SaveEdit = new QLineEdit(SettWindget);
        SaveEdit->setObjectName(QString::fromUtf8("SaveEdit"));

        gridLayout->addWidget(SaveEdit, 2, 1, 1, 1);

        NewLable = new QLabel(SettWindget);
        NewLable->setObjectName(QString::fromUtf8("NewLable"));

        gridLayout->addWidget(NewLable, 4, 0, 1, 1);

        SaveCurr = new QLabel(SettWindget);
        SaveCurr->setObjectName(QString::fromUtf8("SaveCurr"));

        gridLayout->addWidget(SaveCurr, 2, 2, 1, 1);

        Current = new QLabel(SettWindget);
        Current->setObjectName(QString::fromUtf8("Current"));

        gridLayout->addWidget(Current, 0, 2, 1, 1);

        SaveLable = new QLabel(SettWindget);
        SaveLable->setObjectName(QString::fromUtf8("SaveLable"));

        gridLayout->addWidget(SaveLable, 2, 0, 1, 1);

        CloseCurr = new QLabel(SettWindget);
        CloseCurr->setObjectName(QString::fromUtf8("CloseCurr"));

        gridLayout->addWidget(CloseCurr, 3, 2, 1, 1);

        OpenLable = new QLabel(SettWindget);
        OpenLable->setObjectName(QString::fromUtf8("OpenLable"));

        gridLayout->addWidget(OpenLable, 1, 0, 1, 1);

        OpenApply = new QPushButton(SettWindget);
        OpenApply->setObjectName(QString::fromUtf8("OpenApply"));

        gridLayout->addWidget(OpenApply, 1, 3, 1, 1);

        SaveApply = new QPushButton(SettWindget);
        SaveApply->setObjectName(QString::fromUtf8("SaveApply"));

        gridLayout->addWidget(SaveApply, 2, 3, 1, 1);

        CloseApply = new QPushButton(SettWindget);
        CloseApply->setObjectName(QString::fromUtf8("CloseApply"));

        gridLayout->addWidget(CloseApply, 3, 3, 1, 1);

        NewApply = new QPushButton(SettWindget);
        NewApply->setObjectName(QString::fromUtf8("NewApply"));

        gridLayout->addWidget(NewApply, 4, 3, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 4);
        gridLayout->setColumnStretch(2, 2);

        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        AltChecker = new QRadioButton(SettWindget);
        AltChecker->setObjectName(QString::fromUtf8("AltChecker"));
        AltChecker->setChecked(false);

        gridLayout_2->addWidget(AltChecker, 2, 0, 1, 1);

        ModsLable = new QLabel(SettWindget);
        ModsLable->setObjectName(QString::fromUtf8("ModsLable"));

        gridLayout_2->addWidget(ModsLable, 0, 0, 1, 1);

        ShiftChecker = new QRadioButton(SettWindget);
        ShiftChecker->setObjectName(QString::fromUtf8("ShiftChecker"));
        ShiftChecker->setChecked(true);

        gridLayout_2->addWidget(ShiftChecker, 1, 0, 1, 1);

        ApplyMod = new QPushButton(SettWindget);
        ApplyMod->setObjectName(QString::fromUtf8("ApplyMod"));

        gridLayout_2->addWidget(ApplyMod, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        buttonBox = new QDialogButtonBox(SettWindget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 0, 0, 1, 1);

        AppChange = new QPushButton(SettWindget);
        AppChange->setObjectName(QString::fromUtf8("AppChange"));

        gridLayout_3->addWidget(AppChange, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 2, 1, 1);

        Reset = new QPushButton(SettWindget);
        Reset->setObjectName(QString::fromUtf8("Reset"));

        gridLayout_4->addWidget(Reset, 3, 2, 1, 1);

        gridLayout_4->setRowStretch(0, 4);
        gridLayout_4->setRowStretch(1, 1);
        gridLayout_4->setRowStretch(3, 3);
        gridLayout_4->setColumnStretch(0, 6);
        gridLayout_4->setColumnStretch(1, 1);
        gridLayout_4->setColumnStretch(2, 2);

        Settings->addLayout(gridLayout_4, 0, 0, 1, 1);


        retranslateUi(SettWindget);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SettWindget, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SettWindget, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SettWindget);
    } // setupUi

    void retranslateUi(QDialog *SettWindget)
    {
        SettWindget->setWindowTitle(QCoreApplication::translate("SettWindget", "Dialog", nullptr));
        NewCurr->setText(QCoreApplication::translate("SettWindget", "New", nullptr));
        Buttons->setText(QCoreApplication::translate("SettWindget", "Buttons:", nullptr));
        OpenCurr->setText(QCoreApplication::translate("SettWindget", "Open", nullptr));
        CloseLable->setText(QCoreApplication::translate("SettWindget", "Close", nullptr));
        NewLable->setText(QCoreApplication::translate("SettWindget", "New", nullptr));
        SaveCurr->setText(QCoreApplication::translate("SettWindget", "Save", nullptr));
        Current->setText(QCoreApplication::translate("SettWindget", "Current", nullptr));
        SaveLable->setText(QCoreApplication::translate("SettWindget", "Save", nullptr));
        CloseCurr->setText(QCoreApplication::translate("SettWindget", "Close", nullptr));
        OpenLable->setText(QCoreApplication::translate("SettWindget", "Open", nullptr));
        OpenApply->setText(QCoreApplication::translate("SettWindget", "Apply", nullptr));
        SaveApply->setText(QCoreApplication::translate("SettWindget", "Apply", nullptr));
        CloseApply->setText(QCoreApplication::translate("SettWindget", "Apply", nullptr));
        NewApply->setText(QCoreApplication::translate("SettWindget", "Apply", nullptr));
        AltChecker->setText(QCoreApplication::translate("SettWindget", "Alt", nullptr));
        ModsLable->setText(QCoreApplication::translate("SettWindget", "Modifiers", nullptr));
        ShiftChecker->setText(QCoreApplication::translate("SettWindget", "Shift", nullptr));
        ApplyMod->setText(QCoreApplication::translate("SettWindget", "Apply modifier", nullptr));
        AppChange->setText(QCoreApplication::translate("SettWindget", "Apply changes", nullptr));
        Reset->setText(QCoreApplication::translate("SettWindget", "Reset changes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettWindget: public Ui_SettWindget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTWINDGET_H
