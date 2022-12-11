#include "mainwindow.h"

#include <QApplication>
#include <QPushButton>
#include <QPropertyAnimation>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QSizePolicy>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow window;
    window.resize(640, 480);
    qApp->setStyleSheet("QPushButton:pressed{background-color: #696969;}"
                        "QWidget{border-radius: 5px; background-color: #dddddd}"
                        "QPushButton{font: bold 14 px; color: #DCDCDC; background-color: #505050; border-radius: 3px; min-width: 5em; min-height: 1.5em; border: 1px solid #787878;}"
                        "QMainWindow{background-color: #303030;}"
                        "QLineEdit{background-color: #505050; color: #DCDCDC;}");
    QWidget *LoginWindow = new QWidget(&window);
    LoginWindow->resize(300, 300);
    LoginWindow->show();
    QPropertyAnimation animation(LoginWindow, "geometry");
    animation.setDuration(500);
    animation.setStartValue(QRect(170, 480, 300, 300));
    animation.setEndValue(QRect(170, 90, 300, 300));
    animation.start();
    QVBoxLayout *LoginLayout = new QVBoxLayout(LoginWindow);
    QLineEdit *Login = new QLineEdit(LoginWindow);
    QLineEdit *Password = new QLineEdit(LoginWindow);
    Login->setText("Login");
    Password->setText("Password");
    QPushButton *button = new QPushButton(LoginWindow);
    button->setText("Enter");
    LoginLayout->addWidget(Login);
    LoginLayout->addWidget(Password);
    LoginLayout->addWidget(button);
    window.show();

    return a.exec();
}
