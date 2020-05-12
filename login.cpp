#include "login.h"
#include <QCoreApplication>
#include <QMainWindow>

login::login(QWidget *parent)
	:QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(registe()));
}
int login::sendmessage(QString id,QString password) {
	return 1;
}
void login::registe()
{
	emit display(1);
}
void login::enter()
{
	QString id = ui.lineEdit->text();
	QString password = ui.lineEdit_2->text();
	//if (sendmessage() == 2)
	//{
	//	user user1(id.toStdString(), password.toStdString());
	//	//enter main applicaton
	//}
	//else if (sendmessage() == 1)
	//{
	//	label_5->setText("Password error!");
	//}
	//else if (sendmessage() == 0)
	//{
	//	label_5->setText("ID does not exist!");
	//}
}

