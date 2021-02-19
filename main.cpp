#include <QCoreApplication>
#include <QtDebug>

#include "signalsender.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    auto signalSender = new SignalSender();

    // First signal not connected
    auto firstSignal = Q_EMIT signalSender->mySignal(2);

    // Second signal is connected
    signalSender->connect(signalSender, &SignalSender::mySignal, signalSender, &SignalSender::mySlot);
    auto secondSignal = Q_EMIT signalSender->mySignal(2);

    // Show results
    qDebug() << firstSignal;
    qDebug() << secondSignal;

    return a.exec();
}
