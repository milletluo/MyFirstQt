#include "myfirstqt.h"
#include "login.h"

MyFirstQt::MyFirstQt(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	Login *LoginChild = new Login(this);
	LoginChild->setFixedSize(300, 200);
	QPalette palette = LoginChild->palette();
	QPixmap pixmap("./Resources/img24.jpg");
	palette.setBrush(LoginChild->backgroundRole(), QBrush(pixmap));
	LoginChild->setPalette(palette);
	LoginChild->setAutoFillBackground(true);
	LoginChild->move(100, 100);

	LoginChild->show();
	
}

MyFirstQt::~MyFirstQt()
{

}
