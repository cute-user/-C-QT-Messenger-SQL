#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Login_Button_clicked();

    void on_Reg_Button_clicked();

private:
    Ui::MainWindow *ui;

    QSqlDatabase dataBase = QSqlDatabase::addDatabase("QSQLITE");
    QSqlQuery *querry;
};
#endif // MAINWINDOW_H
