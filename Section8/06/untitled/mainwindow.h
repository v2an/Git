#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include "settwindget.h"
#include <QTranslator>
#include <QDir>
#include "foldervewer.h"
#include <QPrinter>
#include <QPrintDialog>
#include <QTextDocumentFragment>
#include <QTextDocument>
#include <QTextCharFormat>


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
    void keyReleaseEvent(QKeyEvent *event) override;
    void onButtonSend();
    void New();
    void Open();
    void ROOpen();
    void Exit();
    void Save();
    void About();
    void FolderOpen();
    void ChangeDark();
    void ChangeLight();
    void RuTransl();
    void EnTransl();
    void PrintDialog();

    void CopyFormat();
    void PasteFormat();

private:
    Ui::MainWindow *ui;
    Dialog *dialog;
    SettWindget* setwidg;
    FolderVewer* fldvew;
    QTranslator transl;
    QTextCharFormat currFormat;

    int currtheme;
    QString currfolder = QDir::currentPath();

signals:
    void SendData(QList<QKeySequence> &KeyBinds, Qt::KeyboardModifier &ModifierBind, int lang);
    void SendLang(int lang);
    void SendFolder(QString &folder);

public slots:
    void ReciveBack(QList<QKeySequence> &RKeyBinds, Qt::KeyboardModifier &RModifierBind);

};
#endif // MAINWINDOW_H
