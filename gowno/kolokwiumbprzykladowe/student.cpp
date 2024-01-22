#include "student.h"

Student::Student(QString imie_, QString nazwisko_, int ocena1_, int ocena2_)
{
    imie = imie_;
    nazwisko = nazwisko_;
    ocena1 = ocena1_;
    ocena2 = ocena2_;
}
Student::Student() {
    imie = "";
    nazwisko = "";
    ocena1 = 0;
    ocena2 = 0;
}

QString Student::getimie()
{
    return imie;
}

QString Student::getnazwisko()
{
    return nazwisko;
}

int Student::getocena1()
{
    return ocena1;
}

int Student::getocena2()
{
    return ocena2;
}
