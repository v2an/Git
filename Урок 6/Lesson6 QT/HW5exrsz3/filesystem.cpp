#include "filesystem.h"
#include <QFileSystemModel>
#include <QLineEdit>
#include <QTreeView>
#include <QString>
#include <QLayout>

filesystem::filesystem(QWidget *parent) : QWidget(parent)
{
    QFileSystemModel* model = new QFileSystemModel;
    QGridLayout* layout = new QGridLayout(this);
    QTreeView* tree = new QTreeView(this);
    QLineEdit* line = new QLineEdit(this);
    this->setLayout(layout);
    tree->setModel(model);
    layout->addWidget(line);
    layout->addWidget(tree);

}
