#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

struct koe
{
    int a;
    float b;
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void handleKruunu2Euro();
    void handleEuro2Kruunu();

private:
    Ui::MainWindow *ui;
    float kurssi;

    koe * pkoe;
};
#endif // MAINWINDOW_H
