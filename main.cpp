#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	QMainWindow mw;
	mw.setWindowTitle("Strong file sync");
	mw.show();

	return a.exec();
}
