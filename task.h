#ifndef TASK_H
#define TASK_H

#include <QWidget>
#include<QString>

namespace Ui {
class TASK;
}

class TASK : public QWidget
{
    Q_OBJECT

public:
    explicit TASK(const QString& name, QWidget *parent = nullptr);
    ~TASK();
    void  setName(const QString& name);
    QString name() const;
    bool isCompleted() const;

private:
    Ui::TASK *ui;
};

#endif // TASK_H
