#ifndef DZIENNIK_H
#define DZIENNIK_H

#include <QMainWindow>
#include "student.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class dziennik;
}
QT_END_NAMESPACE

class dziennik : public QMainWindow
{
    Q_OBJECT

public:
    dziennik(QWidget *parent = nullptr);
    ~dziennik();
    void DodajStudentow(Student student);

private:
    Ui::dziennik *ui;
    int licznikstudentow = 2;
    Student studenci[30];
};
#endif // DZIENNIK_H
