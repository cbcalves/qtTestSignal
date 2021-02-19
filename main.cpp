#include <QCoreApplication>
#include <QtDebug>

#include "signalsender.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    auto signalSender = new SignalSender();

    // First signal not connected
    auto firstSignal = Q_EMIT signalSender->mySignal(2);
    qDebug() << "first signal" << firstSignal;
    qDebug() << "";

    // Second signal is connected
    signalSender->connect(signalSender, &SignalSender::mySignal, signalSender, &SignalSender::mySlot, Qt::DirectConnection);
    auto secondSignal = Q_EMIT signalSender->mySignal(2);
    qDebug() << "second signal" << secondSignal;
    qDebug() << "";

    // Third signal with 2 connections
    signalSender->connect(signalSender, &SignalSender::mySignal, signalSender, &SignalSender::myOtherSlot, Qt::DirectConnection);
    auto thirdSignal = Q_EMIT signalSender->mySignal(2);
    qDebug() << "third signal" << thirdSignal;
    qDebug() << "";

    return a.exec();
}
