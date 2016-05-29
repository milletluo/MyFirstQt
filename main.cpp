#include "myfirstqt.h"
#include "login.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
// 	Login *LoginChild=new Login();
// 	LoginChild->setFixedSize(300,200);
// 	//w->setStyleSheet("background-color:blue");
// 	QPalette palette = LoginChild->palette();
// 	QPixmap pixmap("./Resources/img24.jpg");
// 	palette.setBrush(LoginChild->backgroundRole(), QBrush(pixmap));
// 	LoginChild->setPalette(palette);
// 	LoginChild->show();

	MyFirstQt *LoginParent = new MyFirstQt();
	LoginParent->setObjectName("LoginParent");
	LoginParent->setStyleSheet("QMainWindow#LoginParent{border-image:url(./Resources/img1.jpg)}");
	LoginParent->show();

	return a.exec();
}
