#ifndef DEFENDER_H
#define DEFENDER_H

#include <QtQml>
#include <QObject>
#include "player.hpp"

class Defender : public Player
{
    Q_OBJECT
    QML_ELEMENT
public:
    explicit Defender(QObject *po_parent = nullptr);

    void play();

    void defend();

signals:

public slots:
};

#endif // DEFENDER_H
