#include <QDebug>
#include "defender.hpp"

Defender::Defender(QObject *po_parent) : Player(po_parent)
{

}

void Defender::play()
{
    qDebug() << name() << " is playing";
}

void Defender::defend()
{
    qDebug() << name() << " is defending";
}
