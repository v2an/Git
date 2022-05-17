#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTranslator>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

public slots:
    void ReciveLang(int Lang);

private:
    Ui::Dialog *ui;
    QTranslator transl;
};

#endif // DIALOG_H
