#include "Widge.h"

Widge::Widge(QWidget *parent)
	: QMainWindow(parent)
{
	//ui.setupUi(this);
}
Widge::~Widge() {

}
void Widge::mouseMoveEvent(QMouseEvent *event) {
	endPt = event->pos();
	update();
}
void Widge::mouseReleaseEvent(QMouseEvent *event) {
	endPt = event->pos();
	update();
}
void Widge::mousePressEvent(QMouseEvent *event) {
	startPt = event->pos();
}
void drawLine(QImage &image, QPoint pt1, QPoint pt2) {
	QPainter painter(&image);
	
	int dx = pt2.x() - pt1.x(); 
	int dy = pt2.y() - pt1.y(), steps, k;  //计算dx,dy
	float xincrement, yincrement, x = pt1.x(), y = pt1.y();
	if (abs(dx) > abs(dy)) steps = abs(dx); //比较dx,dy大小，abs(m)<1时取dx
	else steps = abs(dy);
	xincrement = dx / (float)steps;  //x方向增量
	yincrement = dy / (float)steps;  //y方向增量
	painter.drawPoint(x, y);   //从（xa,ya）像素开始
	for (k = 0; k < steps; k++)
	{
		x = x + xincrement;  //下一个像素x位置
		y = y + yincrement;  //下一个像素y位置
		painter.drawPoint(x, y);
	}
}

void drawLine(QImage &image, QPoint pt1, QPoint pt2) {
	QPainter painter(&image);
	int x = pt1.x(), y = pt1.y();
	int a = pt1.y()-pt2.y(), b = pt2.x() - pt1.x();
	int cx = (b >= 0 ? 1 : (b = -b, -1));
	int cy = (a <= 0 ? 1 : (a = -a, -1));
	painter.drawPoint(x, y);
	int d, d1, d2;
	if (-a <= b)		// 斜率绝对值 <= 1
	{
		d = 2 * a + b;
		d1 = 2 * a;
		d2 = 2 * (a + b);
		while (x != pt2.x())
		{
			if (d < 0)
				y += cy, d += d2;
			else
				d += d1;
			x += cx;
			painter.drawPoint(x, y);
		}
	}
	else				// 斜率绝对值 > 1
	{
		d = 2 * b + a;
		d1 = 2 * b;
		d2 = 2 * (a + b);
		while (y != pt2.y())
		{
			if (d < 0)
				d += d1;
			else
				x += cx, d += d2;
			y += cy;
			painter.drawPoint(x, y);
		}
	}

}

void Widge::paintEvent(QPaintEvent *event) {
	QPainter painter(this);
	QImage image = QImage(800, 600, QImage::Format_RGB888);
	image.fill(QColor(255, 255, 255));
	drawLine(image, startPt, endPt);
	painter.drawImage(0,0,image);
}