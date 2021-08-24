#include <QApplication>
#include <QVBoxLayout>
#include <QScrollArea>
#include <QLabel>
#include <QDebug>
#include "../headers/QuestionListContainer.h"
#include "../headers/QuestionList.h"

QuestionListContainer::QuestionListContainer(QWidget *parent) : QFrame(parent) {
    setObjectName("BaseContainer");

    auto *grid = new QGridLayout(this);

    auto *scrollArea = new QScrollArea(this);
    auto *q = new QuestionList(this);
    scrollArea->setWidget(q);

    auto *title = new QLabel("Questions list");
    title->setObjectName("QuestionListTitle");
    title->setFont(QFont("Light Roboto", 18, QFont::Light));
    title->setMargin(10);

    grid->addWidget(title, 0, 0);
    grid->addWidget(scrollArea, 1, 0);

    setLayout(grid);
}