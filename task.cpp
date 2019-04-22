#include "task.h"
#include "ui_task.h"

TASK::TASK(const QString& name, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TASK)
{
    ui->setupUi(this);
    setName(name);
}

TASK::~TASK()
{
    delete ui;
}

void TASK::setName(const QString& name){
    ui->checkBox->setText(name);
}

QString TASK::name() const{
    return ui->checkBox->text();
}

bool TASK::isCompleted() const{
    return ui->checkBox->isChecked();
}
