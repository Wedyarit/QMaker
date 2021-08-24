#include <QApplication>
#include <QPushButton>
#include <QGridLayout>
#include <QGuiApplication>
#include <QScreen>
#include <QResource>
#include <QIODevice>
#include <QFile>
#include "widgets/headers/qmaker.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QResource::registerResource("./application.qrc");

    QMaker window;

    window.resize(1280, 720);

    int x = (QGuiApplication::screens()[0]->size().width() - window.width()) / 2;
    int y = (QGuiApplication::screens()[0]->size().height() - window.height()) / 2;
    window.move(x, y);

    QFile file(":/resources/stylesheet.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    a.setStyleSheet(styleSheet);

    window.setWindowTitle("Questionnaire maker");
    window.setToolTip("QWidget");
    window.setWindowIcon(QIcon(":/resources/app.png"));
    window.show();

    return QApplication::exec();
}