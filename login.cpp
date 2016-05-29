#include "login.h"
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QGridLayout>

Login::Login(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	//git debug
	QLabel *NameLabel = new QLabel(QStringLiteral("�û�����"));
	QLabel *PasswordLabel = new QLabel(QStringLiteral("�� �룺"));

	QLineEdit *NameEdit = new QLineEdit;
	QLineEdit *PasswordEdit = new QLineEdit;

	QPushButton *LoginButton = new QPushButton(QStringLiteral("�� ¼"));
	QPushButton *BackButton = new QPushButton(QStringLiteral("�� ��"));

// 	QHBoxLayout *HLayout = new QHBoxLayout;
// 	HLayout->addWidget(NameLabel);
// 	HLayout->addWidget(NameEdit);

// 	QVBoxLayout *VLaout = new QVBoxLayout;
// 	VLaout->addWidget(NameEdit);
// 	VLaout->addWidget(PasswordEdit);

	QGridLayout *MainLayout = new QGridLayout;
	MainLayout->addWidget(NameLabel,0,0);
	MainLayout->addWidget(NameEdit,0,1,1,2);
	MainLayout->addWidget(PasswordLabel, 1, 0);
	MainLayout->addWidget(PasswordEdit, 1, 1, 1, 2);
	MainLayout->addWidget(LoginButton, 2, 0);
	MainLayout->addWidget(BackButton, 2, 2);

	setLayout(MainLayout);
}

Login::~Login()
{

}
