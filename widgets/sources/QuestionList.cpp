#include <QApplication>
#include <QVBoxLayout>
#include <QLabel>
#include <QDebug>
#include "../headers/QuestionList.h"
#include "../headers/QuestionItem.h"

QuestionList::QuestionList(QWidget *parent) : QWidget(parent) {
    setObjectName("QuestionList");

    auto *vbox = new QVBoxLayout();
    vbox->setSpacing(5);

    for (int i = 0; i < 50; i++) {
        auto *questionItem = new QuestionItem();
        vbox->addWidget(questionItem);
    }

    setLayout(vbox);
}