#ifndef STUDENT_H
#define STUDENT_H
#include <QString>

class Student
{
    QString imie;
    QString nazwisko;
    int ocena1;
    int ocena2;
public:
    Student(QString imie_, QString nazwisko_, int ocena1_, int ocena2_);
    Student();
    QString getimie();
    QString getnazwisko();
    int getocena1();
    int getocena2();
};

#endif // STUDENT_H
