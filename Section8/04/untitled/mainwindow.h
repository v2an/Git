#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include "settwindget.h"
#include <QTranslator>

/*
struct HotKeys
{
    Qt::KeyboardModifier mod = Qt::ShiftModifier;
    Qt::Key open = Qt::Key_O;
    Qt::Key save = Qt::Key_S;
    Qt::Key exit = Qt::Key_Q;
    Qt::Key newdoc = Qt::Key_N;
};

Q_DECLARE_METATYPE(HotKeys);
*/

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void saveToFile(QString);
    void loadFromFile();

private slots:
    void on_SaveButton_clicked();

    void on_OpenButton_clicked();

    void on_HelpButton_clicked();

    void on_ROOpenButton_clicked();

    void on_TrEng_clicked();

    void on_TrRus_clicked();

    void keyReleaseEvent(QKeyEvent *event) override;

    //void on_Setts_clicked();

    void onButtonSend();

private:
    Ui::MainWindow *ui;
    Dialog *dialog;
    SettWindget* setwidg;
    QTranslator transl;
    void Open();
    void Exit();
    void Save();
    void New();
    void About();

signals:
    void SendData(QList<QKeySequence> &KeyBinds, Qt::KeyboardModifier &ModifierBind, int lang);
    void SendLang(int lang);

public slots:
    void ReciveBack(QList<QKeySequence> &RKeyBinds, Qt::KeyboardModifier &RModifierBind);

};
#endif // MAINWINDOW_H
