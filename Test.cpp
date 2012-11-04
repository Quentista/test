#include "Test.h"

#include <QPaintEvent>
#include <QPainter>

Test::Test(QWidget *parent) :
	QWidget(parent)
{

}
void Test::pEve(QPaintEvent* event)
{
	QPainter painter;
	painter.begin(this);
	painter.setRenderHint(QPainter::Antialiasing, true);
	painter.setBrush(QBrush(Qt::red, Qt::DiagCrossPattern));
	painter.setPen(QPen(Qt::black, 3, Qt::DashLine));
	painter.drawRect(QRect (20, 20, 100, 200));
	painter.end();
}
