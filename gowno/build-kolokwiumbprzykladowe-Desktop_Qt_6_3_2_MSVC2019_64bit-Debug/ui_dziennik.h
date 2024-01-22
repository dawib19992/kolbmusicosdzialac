/********************************************************************************
** Form generated from reading UI file 'dziennik.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DZIENNIK_H
#define UI_DZIENNIK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dziennik
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dziennik)
    {
        if (dziennik->objectName().isEmpty())
            dziennik->setObjectName(QString::fromUtf8("dziennik"));
        dziennik->resize(435, 357);
        centralwidget = new QWidget(dziennik);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 40, 411, 141));
        plainTextEdit->setReadOnly(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 190, 391, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 220, 391, 24));
        dziennik->setCentralWidget(centralwidget);
        menubar = new QMenuBar(dziennik);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 435, 21));
        dziennik->setMenuBar(menubar);
        statusbar = new QStatusBar(dziennik);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        dziennik->setStatusBar(statusbar);

        retranslateUi(dziennik);

        QMetaObject::connectSlotsByName(dziennik);
    } // setupUi

    void retranslateUi(QMainWindow *dziennik)
    {
        dziennik->setWindowTitle(QCoreApplication::translate("dziennik", "dziennik", nullptr));
        pushButton->setText(QCoreApplication::translate("dziennik", "Oblicz \305\233rednia", nullptr));
        pushButton_2->setText(QCoreApplication::translate("dziennik", "Dodaj studenta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dziennik: public Ui_dziennik {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DZIENNIK_H
