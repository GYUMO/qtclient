#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "task.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT    //这个Q_object允许用户自定义slot和signal

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void addTask();
private:
    Ui::MainWindow *ui;    //我们通过这个指针和窗口上的组件进行数据交互
    QVector<TASK *> mTasks;
};

#endif // MAINWINDOW_H
