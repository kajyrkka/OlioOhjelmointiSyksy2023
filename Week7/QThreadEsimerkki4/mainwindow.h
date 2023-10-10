#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include <QDebug>
#include "worker.h"

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
    void updateUI();
    void clickHandler();
    void stopHandler();
    void startHandler();

signals:
    void stopThread();

private:
    Ui::MainWindow *ui;
    QThread * thread;
    Worker * worker;

    Worker olio;
};
#endif // MAINWINDOW_H
