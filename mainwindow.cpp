#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include<QInputDialog>

void MainWindow::addTask(){

    bool ok;
    QString name = QInputDialog::getText(this,
                                         tr("add task"),
                                         tr("Task name"),
                                         QLineEdit::Normal,
                                         tr("Unitled task"), &ok);
    if(ok && !name.isEmpty()){
        qDebug() << "User clicked on the button";
        TASK* task = new TASK("Untitled task");
        mTasks.append(task);
        ui->taskslayout->addWidget(task);
    }
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mTasks()
{
    ui->setupUi(this);
    connect(ui->addtaskbutton, &QPushButton::clicked, this, &MainWindow::addTask);
    ui->statuslabel->setText("hello");
};

MainWindow::~MainWindow()
{
    delete ui;
}
