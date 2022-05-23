/********************************************************************************
** Form generated from reading UI file 'foldervewer.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOLDERVEWER_H
#define UI_FOLDERVEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_FolderVewer
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *CurrFolder;
    QLineEdit *lineEdit;
    QTreeView *treeView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FolderVewer)
    {
        if (FolderVewer->objectName().isEmpty())
            FolderVewer->setObjectName(QString::fromUtf8("FolderVewer"));
        FolderVewer->resize(633, 393);
        gridLayout_2 = new QGridLayout(FolderVewer);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
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

        treeView = new QTreeView(FolderVewer);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        gridLayout->addWidget(treeView, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(FolderVewer);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(FolderVewer);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FolderVewer, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FolderVewer, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FolderVewer);
    } // setupUi

    void retranslateUi(QDialog *FolderVewer)
    {
        FolderVewer->setWindowTitle(QCoreApplication::translate("FolderVewer", "Dialog", nullptr));
        CurrFolder->setText(QCoreApplication::translate("FolderVewer", "Current folder:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FolderVewer: public Ui_FolderVewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOLDERVEWER_H
