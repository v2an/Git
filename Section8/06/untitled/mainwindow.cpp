#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QFile>
#include <QDataStream>
#include <QFileDialog>
#include <QMessageBox>
#include <QTranslator>
#include <QApplication>
#include <QMenuBar>
#include <QStringList>
#include <QPainter>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMenu* filemenu = menuBar()->addMenu("File");
    QAction* mNew = filemenu->addAction("New");
    filemenu->addSeparator();
    QAction* mSave = filemenu->addAction("Save");
    filemenu->addSeparator();
    QAction* mOpen = filemenu->addAction("Open");
    QAction* mROOpen = filemenu->addAction("Read only open");
    filemenu->addSeparator();
    QAction* mPrint = filemenu->addAction("Print");
    filemenu->addSeparator();
    QAction* mDir = filemenu->addAction("Directory");
    filemenu->addSeparator();
    QAction* mExit = filemenu->addAction("Exit");

    connect(mNew, SIGNAL(triggered(bool)), this, SLOT(New()));
    connect(mSave, SIGNAL(triggered(bool)), this, SLOT(Save()));
    connect(mOpen, SIGNAL(triggered(bool)), this, SLOT(Open()));
    connect(mROOpen, SIGNAL(triggered(bool)), this, SLOT(ROOpen()));
    connect(mDir, SIGNAL(triggered(bool)), this, SLOT(FolderOpen()));
    connect(mExit, SIGNAL(triggered(bool)), this, SLOT(Exit()));
    connect(mPrint, SIGNAL(triggered(bool)), this, SLOT(PrintDialog()));


    QMenu* toolsMenu = menuBar()->addMenu("Tools");
    QMenu* mLangChangeMenu = toolsMenu->addMenu("Language");
    QAction* mRus = mLangChangeMenu->addAction("Russian");
    QAction* mEng = mLangChangeMenu->addAction("English");
    QMenu* mThemeMenu = toolsMenu->addMenu("Theme");
    QAction* mDark = mThemeMenu->addAction("Dark");
    QAction* mLight = mThemeMenu->addAction("Light");
    toolsMenu->addSeparator();
    QAction* mButtonSettings = toolsMenu->addAction("Buttons");
    toolsMenu->addSeparator();
    QAction* mAbout = toolsMenu->addAction("About");

    connect(mRus, SIGNAL(triggered(bool)), this, SLOT(RuTransl()));
    connect(mEng, SIGNAL(triggered(bool)), this, SLOT(EnTransl()));
    connect(mDark, SIGNAL(triggered(bool)), this, SLOT(ChangeDark()));
    connect(mLight, SIGNAL(triggered(bool)), this, SLOT(ChangeLight()));
    connect(mAbout, SIGNAL(triggered(bool)), this, SLOT(About()));


    setwidg = new SettWindget(this);
    connect(mButtonSettings, SIGNAL(triggered(bool)), this, SLOT(onButtonSend()));
    connect(this, SIGNAL(SendData(QList<QKeySequence>&,Qt::KeyboardModifier&,int)), setwidg, SLOT(ReciveData(QList<QKeySequence>&,Qt::KeyboardModifier&,int)));
    connect(mButtonSettings, SIGNAL(triggered(bool)), setwidg, SLOT(exec()));
    qApp->setStyleSheet("QPushButton{font: bold 14 px; color: #DCDCDC; background-color: #505050; border-radius: 3px; min-width: 5em; min-height: 1.5em; border: 1px solid #787878;}"
                        "QPushButton:pressed{background-color: #696969;}"
                        "QMainWindow{background-color: #303030;}"
                        "QDialog{background-color: #303030;}"
                        "QSettWindget{background-color: #303030;}"
                        "QPlainTextEdit{background-color: #505050; color: #DCDCDC;}"
                        "QLineEdit{background-color: #505050; color: #DCDCDC;}"
                        "QTreeView{background-color: #505050; color: #DCDCDC;}"
                        "QHeaderView::section{background-color: #505050; color: #DCDCDC;}"
                        "QLabel{color: #DCDCDC;}"
                        "QRadioButton{color: #DCDCDC;}"
                        "QTextBrowser{background-color: #505050; color: #DCDCDC;}"
                        "QMenu::item{background-color: #505050; color: #DCDCDC}"
                        "QMenu::item::selected{background-color: #696969; color: #DCDCDC}"
                        "QMenu{background-color: #505050; color: #DCDCDC}"
                        "QMenuBar{background-color: #303030; color: #DCDCDC}"
                        "QMenuBar::item::selected{background-color: #696969; color: #DCDCDC}");
    currtheme = 1; // 1 - black, 2 - white
}

QList<QKeySequence> KeyBinds = { Qt::Key_O, Qt::Key_S, Qt::Key_Q, Qt::Key_N };
Qt::KeyboardModifier ModifierBind = Qt::ShiftModifier;
int Language = 1; //1 - Ru, 2 - En


MainWindow::~MainWindow()
{
    delete ui;
}


// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// ============================================================================================================================== Functions
// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


void MainWindow::Save()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save Text"), "", tr("Text file (*.txt);;All Files (*)"));
    if (fileName.isEmpty())
        return;
    else
    {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly))
        {
            QMessageBox::information(this, tr("Unable to open file"),
                file.errorString());
            return;
        }
        QTextStream out(&file);
        out << ui->Editor->toPlainText();
        QChar last = fileName.back();
        while (last != '/')
        {
            fileName.chop(1);
            last = fileName.back();
        }
        fileName.chop(1);
        currfolder = fileName;
    }
}


void MainWindow::Open()
{
    ui->Editor->setReadOnly(false);
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Address Book"), "", tr("Text file (*.txt);;All Files (*)"));
    if (fileName.isEmpty())
        return;
    else
    {
        QFile file(fileName);

        if (!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(this, tr("Unable to open file"), file.errorString());
            return;
        }

        QTextStream in(&file);
        ui->Editor->setPlainText(in.readAll());
        QChar last = fileName.back();
        while (last != '/')
        {
            fileName.chop(1);
            last = fileName.back();
        }
        fileName.chop(1);
        currfolder = fileName;
    }
}

void MainWindow::ROOpen()
{
    MainWindow::Open();
    ui->Editor->setReadOnly(true);
}



void MainWindow::About()
{
    dialog = new Dialog(this);
    emit SendLang(Language);
    connect(this, SIGNAL(SendLang(int)), dialog, SLOT(ReciveLang(int)));
    dialog->exec();
}


void MainWindow::Exit()
{
    qApp->closeAllWindows();
}


void MainWindow::New()
{
    ui->Editor->clear();
}


void MainWindow::FolderOpen()
{
    fldvew = new FolderVewer(this, currfolder);
    emit SendLang(Language);
    connect(this, SIGNAL(SendLang(int)), fldvew, SLOT(ReciveLang(int)));
    fldvew->exec();
}


void MainWindow::ChangeDark()
{
    if (currtheme == 2)
    {
        qApp->setStyleSheet("QPushButton{font: bold 14 px; color: #DCDCDC; background-color: #505050; border-radius: 3px; min-width: 5em; min-height: 1.5em; border: 1px solid #787878;}"
                            "QPushButton:pressed{background-color: #696969;}"
                            "QMainWindow{background-color: #303030;}"
                            "QDialog{background-color: #303030;}"
                            "QSettWindget{background-color: #303030;}"
                            "QPlainTextEdit{background-color: #505050; color: #DCDCDC;}"
                            "QLineEdit{background-color: #505050; color: #DCDCDC;}"
                            "QTreeView{background-color: #505050; color: #DCDCDC;}"
                            "QHeaderView::section{background-color: #505050; color: #DCDCDC;}"
                            "QLabel{color: #DCDCDC;}"
                            "QRadioButton{color: #DCDCDC;}"
                            "QTextBrowser{background-color: #505050; color: #DCDCDC;}"
                            "QMenu::item{background-color: #505050; color: #DCDCDC}"
                            "QMenu::item::selected{background-color: #696969; color: #DCDCDC}"
                            "QMenu{background-color: #505050; color: #DCDCDC}"
                            "QMenuBar{background-color: #303030; color: #DCDCDC}"
                            "QMenuBar::item::selected{background-color: #696969; color: #DCDCDC}");
        currtheme = 1;
    }
    else
        return;
}

void MainWindow::ChangeLight()
{
    if (currtheme == 1)
    {
        qApp->setStyleSheet("QPushButton{background-color: #E0E0E0; font: bold 14 px; border-radius: 3px; min-width: 5em; min-height: 1.5em; border: 1px solid #A9A9A9;}"
                            "QPushButton:pressed{background-color: #A9A9A9;}");
        currtheme = 2;
    }
    else
        return;
}


void MainWindow::onButtonSend()
{
    emit SendData(KeyBinds, ModifierBind, Language);
}


void MainWindow::ReciveBack(QList<QKeySequence> &RKeyBinds, Qt::KeyboardModifier &RModifierBind)
{
    KeyBinds = RKeyBinds;
    ModifierBind = RModifierBind;
}


void MainWindow::RuTransl()
{
    transl.load(":/HW4_ru");
    qApp->installTranslator(&transl);
    Language = 1;
    ui->retranslateUi(this);
}


void MainWindow::EnTransl()
{
    transl.load(":/HW4_en");
    qApp->installTranslator(&transl);
    Language = 2;
    ui->retranslateUi(this);
}


void MainWindow::PrintDialog()
{
    QPrinter printer;
    QPrintDialog dlg(&printer, this);
    dlg.setWindowTitle("Print");
    if (dlg.exec() != QDialog::Accepted)
        return;



    QPainter painter;
    painter.begin(&printer);
    int wide = painter.window().width();
    int hei = painter.window().height();

    QFont font = painter.font();
    QFontMetrics fmetrics(font);

    QString printStr = ui->Editor->toPlainText();
    QChar *list = printStr.data();
    QStringList strlst;
    int line = 0, cursor = 0;
    for (bool getst = true;getst;)
    {
        int index = printStr.indexOf("\n", cursor); // Ищем перевод каретки на новую строку
        QString s = "";
        if (index == -1)
        {
            getst = false;
            s.append(&list[cursor], printStr.length() - cursor);
        }
        else
            s.append(&list[cursor], index - cursor);
        int charwide = wide/fmetrics.averageCharWidth();
        while ((s.size() * fmetrics.averageCharWidth()) >= wide)
        {
            QString temp;
            temp = s;
            temp.resize(charwide);
            strlst << temp;
            s.remove(0, charwide);
        }
        strlst << s;
        cursor = index + 1;
    }
    int amount = strlst.count();

    for (int i = 0; i < amount; i++)
    {
        QPointF pf;
        pf.setX(10);
        pf.setY(line+20);
        painter.drawText(pf, strlst.at(i));
        line += fmetrics.height();
        if (hei - (line+20) <= fmetrics.height())
        {
            printer.newPage();
            line = 0;
        }
    }
    painter.end();
}

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// ============================================================================================================================== Events
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


void MainWindow::keyReleaseEvent(QKeyEvent *event)
{
    if (QKeySequence(event->key()) == KeyBinds[0] && event->modifiers() == ModifierBind)
    {
        Open();
    }
    else if (QKeySequence(event->key()) == KeyBinds[1] && event->modifiers() == ModifierBind)
    {
        Save();
    }
    else if (QKeySequence(event->key()) == KeyBinds[2] && event->modifiers() == ModifierBind)
    {
        Exit();
    }
    else if (QKeySequence(event->key()) == KeyBinds[3] && event->modifiers() == ModifierBind)
    {
        New();
    }
}

void MainWindow::CopyFormat()
{
    currFormat = ui->Editor->textCursor().charFormat();
}

void MainWindow::PasteFormat()
{

}


