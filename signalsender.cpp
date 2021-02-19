#include <QtDebug>
#include "signalsender.h"

SignalSender::SignalSender(QObject *parent) : QObject(parent)
{

}

int SignalSender::mySlot(int add)
{
    qDebug() << "MySlot activated";
    return add + 5;
}

int SignalSender::myOtherSlot(int add)
{
    qDebug() << "myOtherSlot activated";
    return add + 10;
}