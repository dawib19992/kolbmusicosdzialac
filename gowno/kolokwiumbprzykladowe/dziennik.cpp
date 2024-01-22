#include "dziennik.h"
#include "ui_dziennik.h"

dziennik::dziennik(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dziennik)
{
    ui->setupUi(this);
    Student student1("Dawid", "Kuś", 3, 4);
    DodajStudentow(student1);
    for(int i = 0; i < licznikstudentow;i++)
    {
        ui->plainTextEdit->setPlainText(studenci[i].getimie() + " " + studenci[i].getnazwisko() + ": " + QString::number(studenci[i].getocena1())+" "+QString::number(studenci[i].getocena2()));
    }
}

dziennik::~dziennik()
{
    delete ui;
}

void dziennik::DodajStudentow(Student student)
{
    if(licznikstudentow == 30)
    {
        qDebug()<<"Klasa jest pełna";
    }
    else
    {
        studenci[licznikstudentow] = student;
        licznikstudentow++;
    }
}
