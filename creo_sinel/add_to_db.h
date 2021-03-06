#ifndef ADD_TO_DB_H
#define ADD_TO_DB_H

#include <QDialog>
#include <QDebug>


namespace Ui {
class add_to_db;
}

class add_to_db : public QDialog
{
    Q_OBJECT

public:
    QStringList addEntry;

    explicit add_to_db(QWidget *parent = 0);
    ~add_to_db();

signals:
    void foo(const QStringList args);

private slots:
    void on_addToDbButtonBox_accepted();

private:
    Ui::add_to_db *ui;
    QStringList newProject;
};


#endif // ADD_TO_DB_H
