#ifndef MYFIRSTQT_H
#define MYFIRSTQT_H

#include <QtWidgets/QMainWindow>
#include "ui_myfirstqt.h"

class MyFirstQt : public QMainWindow
{
	Q_OBJECT

public:
	MyFirstQt(QWidget *parent = 0);
	~MyFirstQt();

private:
	Ui::MyFirstQtClass ui;
};

#endif // MYFIRSTQT_H
