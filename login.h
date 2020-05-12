#include <QtWidgets/QDialog>
#include "ui_login.h"
#include "user.h"

class registeration;

class login : public QDialog
{
	Q_OBJECT

public:
	login(QWidget *parent = Q_NULLPTR);
	// Í¨Ñ¶º¯Êý
	int sendmessage(QString id, QString password);

public slots:
	void enter();
	void registe();

signals:
	void display(int number);

private:
	Ui::Login ui;
	registeration *registers;
};