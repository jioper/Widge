#include "Widge.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Widge w;
	w.show();
	return a.exec();
}
