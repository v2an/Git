#ifndef SETTWINDGET_H
#define SETTWINDGET_H

#include <QDialog>

namespace Ui {
class SettWindget;
}

class SettWindget : public QDialog
{
    Q_OBJECT

public:
    explicit SettWindget(QWidget *parent = nullptr);
    ~SettWindget();

private:
    Ui::SettWindget *ui;
};

#endif // SETTWINDGET_H
