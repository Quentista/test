#ifndef TEST_H
#define TEST_H

#include <QWidget>

class QPaintEvent;

class Test : public QWidget
{
	Q_OBJECT
public:
	Test(QWidget *parent = 0);
	
	virtual void pEve(QPaintEvent* event);
signals:
	
public slots:
	
private:
};

#endif // TEST_H
