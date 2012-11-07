#include <QApplication>
#include <Test.h>

int main(int argc, char** argv)
{
	QApplication app (argc, argv);
	
	Test test;
	test.resize(600,600);
	test.show();
	
	return app.exec();
}
