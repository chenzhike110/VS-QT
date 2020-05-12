#include "widget.h"
#include <QtWidgets/QApplication>
#include <QDir>
#include <QDebug>
#include<iostream>

int main(int argc, char *argv[])
{
	QDir dir;
	QString pathname;
	//修改相对路径为exe目录路径
	QDir::setCurrent(QCoreApplication::applicationDirPath());
	pathname = dir.currentPath();
	std::cout << pathname.toStdString();
	qDebug() << pathname;
	QApplication a(argc, argv);
	Widget w;
	w.setWindowTitle(QString::fromUtf8("Account Manager"));
	w.show();
	return a.exec();
}
