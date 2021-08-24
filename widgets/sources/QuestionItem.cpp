#include <QApplication>
#include <QLabel>
#include <QVBoxLayout>
#include <QSvgWidget>

#include "../headers/QuestionItem.h"

QuestionItem::QuestionItem(QWidget *parent) : QFrame(parent) {
    setObjectName("QuestionItem");

    this->setFixedWidth(240);

    auto *svg = new QSvgWidget(parent);
    svg->load(QString(QCoreApplication::applicationDirPath() + "/../resources/icons/add.svg"));
    auto *lbl = new QLabel("What's 2 + 2?");

    auto layout = new QVBoxLayout();
    layout->addWidget(lbl, 10);
    layout->addWidget(svg, 10);
    setLayout(layout);
}