#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class login;
class registeration;
class QStackedLayout;
class QVBoxLayout;

class Widget : public QWidget
{
	Q_OBJECT

public:
	explicit Widget(QWidget *parent = 0);
	~Widget();

private:
	login *login1;
    registeration *registers;
	QStackedLayout *stackLayout;
	QVBoxLayout *mainLayout;
};

#endif // WIDGET_H
