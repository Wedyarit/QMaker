#include "../headers/qmaker.h"
#include "../headers/QuestionListContainer.h"
#include "../headers/QuestionContainer.h"
#include "../headers/QuestionTypeContainer.h"
#include <QApplication>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QDebug>

QMaker::QMaker(QWidget *parent) : QWidget(parent) {
    auto *grid = new QGridLayout(this);
    grid->setHorizontalSpacing(50);
    grid->setMargin(40);

    auto *questionListContainer = new QuestionListContainer(this);
    grid->addWidget(questionListContainer, 0, 0);
    grid->setColumnStretch(0, 4);

    auto *question = new QuestionContainer(this);
    grid->addWidget(question, 0, 1);
    grid->setColumnStretch(1, 6);

    auto *questionType = new QuestionTypeContainer(this);
    grid->addWidget(questionType, 0, 2);
    grid->setColumnStretch(2, 5);

    setLayout(grid);
}