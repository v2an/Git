/********************************************************************************
** Form generated from reading UI file 'settwindget.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTWINDGET_H
#define UI_SETTWINDGET_H

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
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QDialogButtonBox *buttonBox;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *ApplyButton;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_9;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_8;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_11;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QLabel *label_10;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *SettWindget)
    {
        if (SettWindget->objectName().isEmpty())
            SettWindget->setObjectName(QString::fromUtf8("SettWindget"));
        SettWindget->resize(400, 300);
        gridLayout_5 = new QGridLayout(SettWindget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        buttonBox = new QDialogButtonBox(SettWindget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 0, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(SettWindget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        radioButton = new QRadioButton(SettWindget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout_2->addWidget(radioButton, 1, 0, 1, 1);

        radioButton_2 = new QRadioButton(SettWindget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_2->addWidget(radioButton_2, 2, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 2, 0, 1, 1);

        ApplyButton = new QPushButton(SettWindget);
        ApplyButton->setObjectName(QString::fromUtf8("ApplyButton"));

        gridLayout_4->addWidget(ApplyButton, 2, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(SettWindget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_7 = new QLabel(SettWindget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        label_2 = new QLabel(SettWindget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(SettWindget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label_9 = new QLabel(SettWindget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 2, 1, 1);

        label_3 = new QLabel(SettWindget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(SettWindget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 2, 1, 1, 1);

        label_8 = new QLabel(SettWindget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 2, 2, 1, 1);

        label_4 = new QLabel(SettWindget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_3 = new QLineEdit(SettWindget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 3, 1, 1, 1);

        label_11 = new QLabel(SettWindget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 3, 2, 1, 1);

        label_5 = new QLabel(SettWindget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        lineEdit_4 = new QLineEdit(SettWindget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 4, 1, 1, 1);

        label_10 = new QLabel(SettWindget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 4, 2, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 4);
        gridLayout->setColumnStretch(2, 2);

        gridLayout_4->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 1, 1, 1);

        gridLayout_4->setRowStretch(0, 4);
        gridLayout_4->setRowStretch(1, 1);
        gridLayout_4->setRowStretch(2, 2);
        gridLayout_4->setColumnStretch(0, 5);
        gridLayout_4->setColumnStretch(1, 1);
        gridLayout_4->setColumnStretch(2, 1);

        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);


        retranslateUi(SettWindget);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SettWindget, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SettWindget, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SettWindget);
    } // setupUi

    void retranslateUi(QDialog *SettWindget)
    {
        SettWindget->setWindowTitle(QCoreApplication::translate("SettWindget", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("SettWindget", "Modifiers", nullptr));
        radioButton->setText(QCoreApplication::translate("SettWindget", "Shift", nullptr));
        radioButton_2->setText(QCoreApplication::translate("SettWindget", "Alt", nullptr));
        ApplyButton->setText(QCoreApplication::translate("SettWindget", "Apply", nullptr));
        label->setText(QCoreApplication::translate("SettWindget", "Buttons:", nullptr));
        label_7->setText(QCoreApplication::translate("SettWindget", "Current", nullptr));
        label_2->setText(QCoreApplication::translate("SettWindget", "Open", nullptr));
        label_9->setText(QCoreApplication::translate("SettWindget", "Open", nullptr));
        label_3->setText(QCoreApplication::translate("SettWindget", "Save", nullptr));
        label_8->setText(QCoreApplication::translate("SettWindget", "Save", nullptr));
        label_4->setText(QCoreApplication::translate("SettWindget", "Close", nullptr));
        label_11->setText(QCoreApplication::translate("SettWindget", "Close", nullptr));
        label_5->setText(QCoreApplication::translate("SettWindget", "New", nullptr));
        label_10->setText(QCoreApplication::translate("SettWindget", "New", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettWindget: public Ui_SettWindget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTWINDGET_H
