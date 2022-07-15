#include "mylib.h"

#include <QDebug>

DuarteCorporation::Mylib::Mylib()
{
    qDebug() << "constructor!!!";
}

DuarteCorporation::Mylib::~Mylib()
{
    qDebug() << "destructor!!!";
}

void DuarteCorporation::Mylib::start()
{
    qDebug() << "start!!!";
}

void DuarteCorporation::function1()
{
    qDebug() << "function1...";
}

void DuarteCorporation::function2()
{
    qDebug() << "function2...";
}
