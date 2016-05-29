#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "ui_login.h"

class Login : public QWidget
{
	Q_OBJECT

public:
	Login(QWidget *parent = 0);
	~Login();

private:
	Ui::Login ui;
};

#endif // LOGIN_H
