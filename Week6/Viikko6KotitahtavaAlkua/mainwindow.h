#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myclass.h"
#include <QDebug>

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
    void handleCount();
    void handleReset();
    void handleSignal();
    void handleStart();

private:
    Ui::MainWindow *ui;
    int num;
    myClass * pmyClass;
};
#endif // MAINWINDOW_H
