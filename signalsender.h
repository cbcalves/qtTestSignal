#ifndef SIGNALSENDER_H
#define SIGNALSENDER_H

#include <QObject>

class SignalSender : public QObject
{
    Q_OBJECT
public:
    explicit SignalSender(QObject *parent = nullptr);

signals:
    int mySignal(int add);

public slots:
    int mySlot(int add);
    int myOtherSlot(int add);

};

#endif // SIGNALSENDER_H
