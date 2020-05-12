#include "widget.h"
#include "ui_widget.h"
#include "login.h"
#include "registeration.h"
#include <QStackedLayout>
#include <QPushButton>
#include <QVBoxLayout>

Widget::Widget(QWidget *parent) :
	QWidget(parent)
{
	setFixedSize(550, 400);
	login1 = new login;
	registers = new registeration;
	stackLayout = new QStackedLayout;
	stackLayout->addWidget(login1);
	stackLayout->addWidget(registers);
	connect(login1, &login::display, stackLayout, &QStackedLayout::setCurrentIndex);
	connect(registers, &registeration::display, stackLayout, &QStackedLayout::setCurrentIndex);

	setLayout(stackLayout);

}

Widget::~Widget()
{
}