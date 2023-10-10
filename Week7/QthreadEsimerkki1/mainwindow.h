#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
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
    void shutDownThreads();
    void testHandler();

private:
    Ui::MainWindow *ui;
    QThread myThread1;
    QThread myThread2;

    Worker Worker1;
    Worker Worker2;
};
#endif // MAINWINDOW_H
