/********************************************************************************
** Form generated from reading UI file 'settings2.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS2_H
#define UI_SETTINGS2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QLabel *label_8;
    QKeySequenceEdit *keySequenceEdit_5;
    QLabel *label_9;
    QKeySequenceEdit *keySequenceEdit_6;
    QLabel *label_10;
    QKeySequenceEdit *keySequenceEdit_7;
    QLabel *label_11;
    QKeySequenceEdit *keySequenceEdit_8;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_4;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_6;
    QRadioButton *radioButton_5;
    QLabel *label_12;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->resize(400, 300);
        gridLayout_9 = new QGridLayout(Settings);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_7 = new QLabel(Settings);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(Settings);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_5->addWidget(label_8, 1, 0, 1, 1);

        keySequenceEdit_5 = new QKeySequenceEdit(Settings);
        keySequenceEdit_5->setObjectName(QString::fromUtf8("keySequenceEdit_5"));

        gridLayout_5->addWidget(keySequenceEdit_5, 1, 1, 1, 1);

        label_9 = new QLabel(Settings);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_5->addWidget(label_9, 2, 0, 1, 1);

        keySequenceEdit_6 = new QKeySequenceEdit(Settings);
        keySequenceEdit_6->setObjectName(QString::fromUtf8("keySequenceEdit_6"));

        gridLayout_5->addWidget(keySequenceEdit_6, 2, 1, 1, 1);

        label_10 = new QLabel(Settings);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 3, 0, 1, 1);

        keySequenceEdit_7 = new QKeySequenceEdit(Settings);
        keySequenceEdit_7->setObjectName(QString::fromUtf8("keySequenceEdit_7"));

        gridLayout_5->addWidget(keySequenceEdit_7, 3, 1, 1, 1);

        label_11 = new QLabel(Settings);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 4, 0, 1, 1);

        keySequenceEdit_8 = new QKeySequenceEdit(Settings);
        keySequenceEdit_8->setObjectName(QString::fromUtf8("keySequenceEdit_8"));

        gridLayout_5->addWidget(keySequenceEdit_8, 4, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_5, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        pushButton_2 = new QPushButton(Settings);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_7->addWidget(pushButton_2, 2, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_4, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(Settings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_7->addWidget(buttonBox, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 1, 2, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        radioButton_5 = new QRadioButton(Settings);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        gridLayout_6->addWidget(radioButton_5, 2, 1, 1, 1);

        label_12 = new QLabel(Settings);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_6->addWidget(label_12, 1, 0, 1, 1);

        radioButton_6 = new QRadioButton(Settings);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        gridLayout_6->addWidget(radioButton_6, 3, 0, 1, 1);

        radioButton_7 = new QRadioButton(Settings);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        gridLayout_6->addWidget(radioButton_7, 3, 1, 1, 1);

        radioButton_8 = new QRadioButton(Settings);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));

        gridLayout_6->addWidget(radioButton_8, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 1, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 0, 1, 1);


        retranslateUi(Settings);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Settings, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Settings, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QCoreApplication::translate("Settings", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("Settings", "\320\232\320\275\320\276\320\277\320\272\320\270:", nullptr));
        label_8->setText(QCoreApplication::translate("Settings", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214:", nullptr));
        label_9->setText(QCoreApplication::translate("Settings", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214:", nullptr));
        label_10->setText(QCoreApplication::translate("Settings", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214:", nullptr));
        label_11->setText(QCoreApplication::translate("Settings", "\320\235\320\276\320\262\321\213\320\271 \321\204\320\260\320\271\320\273:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Settings", "PushButton", nullptr));
        radioButton_5->setText(QCoreApplication::translate("Settings", "Alt", nullptr));
        label_12->setText(QCoreApplication::translate("Settings", "\320\234\320\276\320\264\320\270\321\204\320\270\320\272\320\260\321\202\320\276\321\200:", nullptr));
        radioButton_6->setText(QCoreApplication::translate("Settings", "Ctrl", nullptr));
        radioButton_7->setText(QCoreApplication::translate("Settings", "\320\235\320\265\321\202", nullptr));
        radioButton_8->setText(QCoreApplication::translate("Settings", "Shift", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsApp: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS2_H
