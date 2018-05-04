#include "scaling.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Scaling w;
	w.show();
	return a.exec();

}
