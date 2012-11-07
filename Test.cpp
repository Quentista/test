#include "Test.h"

#include <QPaintEvent>
#include <QPainter>

Test::Test(QWidget *parent) :
	QWidget(parent)
{

}
void Test::paintEvent(QPaintEvent* event)
{
	QPainter painter;
	painter.begin(this);
	painter.translate(10,10);
	painter.setRenderHint(QPainter::Antialiasing, true);
	painter.setBrush(Qt::white);
	painter.drawRect(QRect(0,0,500,500));
	painter.drawLine(250,0,250,500);
	painter.drawLine(0,250,500,250);
	painter.drawText(250,250,"0");
	painter.drawText(250,10,"Y");
	painter.drawText(490,250,"X");
	int n =10;
	QPointF a[n];
	int x=0;
	for (int i =0; i<n;x+=5, ++i)
	{
		int y = -1*(x*x-x);

		a[i]=QPointF(x,y);
	}
	painter.translate(250,250);
	painter.scale(0.5,0.5);
	painter.setPen(Qt::red);
	painter.drawPolyline(a,n);
	painter.end();
}
