#ifndef SETTWINDGET_H
#define SETTWINDGET_H

#include <QDialog>
#include <QTranslator>

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
    QTranslator transl;

public slots:
    void ReciveData(QList<QKeySequence> &KeyBinds, Qt::KeyboardModifier &ModifierBind, int Lang);

private slots:
    void on_OpenApply_clicked();

    void on_ApplyMod_clicked();

    void onButtonApply();

    void on_AppChange_clicked();

    void on_SaveApply_clicked();

    void on_CloseApply_clicked();

    void on_NewApply_clicked();

    void on_Reset_clicked();

signals:
    void SendDataBack(QList<QKeySequence> &KeyBinds, Qt::KeyboardModifier &ModifierBind);
};

#endif // SETTWINDGET_H
