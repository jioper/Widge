#ifndef WIDGE_H
#define WIDGE_H
#include <QtWidgets/QMainWindow>
#include "ui_Widge.h"
#include <QtWidgets>
class Widge : public QMainWindow
{
	Q_OBJECT

public:
	Widge(QWidget *parent = 0);
	~Widge();
private:
	//Ui::WidgeClass ui;
	QPoint startPt, endPt;
protected:
	virtual void paintEvent(QPaintEvent *event);
	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);
};
#endif