#include "registeration.h"
registeration::registeration(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton_2,SIGNAL(clicked()),this,SLOT(back()));
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(success()));
} 

void registeration::back()
{
	emit display(0);
}

bool registeration::sendmessage(QString id, QString password)
{
	if (id.compare("123") != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void registeration::success()
{
	QString id = ui.lineEdit->text();
	QString password = ui.lineEdit_2->text();
	QString doublecheck = ui.lineEdit_3->text();
	if (id.isEmpty()) {
		ui.label_3->setText("Not NULL");
	}
	else if (password.isEmpty())
	{
		ui.label_4->setText("Not NULL");
	}
	else {
		bool temp = sendmessage(id, password);
		if (password.compare(doublecheck) != 0)
		{
			ui.label_4->setText("Unmatched");
			if (temp)
			{
				ui.label_3->setText("Pass");
			}
			else
			{
				ui.label_3->setText("Used");
			}
		}
		else
		{
			ui.label_4->setText("Pass");
			if (temp)
			{
				emit display(2);
			}
			else
			{
				ui.label_3->setText("Used");
			}
		}
	}
}