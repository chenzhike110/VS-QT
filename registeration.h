#include <QtWidgets/QDialog>
#include "ui_registeration.h"

class registeration : public QDialog
{
	Q_OBJECT

public:
	registeration(QWidget *parent = Q_NULLPTR);
	bool sendmessage(QString id, QString password);

signals:
	void display(int number);

private slots:
	void back();
	void success();

private:
	Ui::Dialog ui;
};
