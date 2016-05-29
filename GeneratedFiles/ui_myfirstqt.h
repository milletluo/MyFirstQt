/********************************************************************************
** Form generated from reading UI file 'myfirstqt.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFIRSTQT_H
#define UI_MYFIRSTQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyFirstQtClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyFirstQtClass)
    {
        if (MyFirstQtClass->objectName().isEmpty())
            MyFirstQtClass->setObjectName(QStringLiteral("MyFirstQtClass"));
        MyFirstQtClass->resize(600, 400);
        menuBar = new QMenuBar(MyFirstQtClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MyFirstQtClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyFirstQtClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MyFirstQtClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MyFirstQtClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MyFirstQtClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MyFirstQtClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MyFirstQtClass->setStatusBar(statusBar);

        retranslateUi(MyFirstQtClass);

        QMetaObject::connectSlotsByName(MyFirstQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyFirstQtClass)
    {
        MyFirstQtClass->setWindowTitle(QApplication::translate("MyFirstQtClass", "MyFirstQt", 0));
    } // retranslateUi

};

namespace Ui {
    class MyFirstQtClass: public Ui_MyFirstQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFIRSTQT_H
