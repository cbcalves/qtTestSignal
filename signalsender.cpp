#include "signalsender.h"

SignalSender::SignalSender(QObject *parent) : QObject(parent)
{

}

int SignalSender::mySlot(int add)
{
    return add + 5;
}
