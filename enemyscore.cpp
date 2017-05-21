#include"enemyscore.h"
#include<QFont>

Enemyscore::Enemyscore(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    enemyscore = 0;
    setPlainText(QString("Enemy score: ") + QString::number(enemyscore));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",30));

}

void Enemyscore::increase()
{
    enemyscore = enemyscore +5;
    setPlainText(QString("Enemy score: ") +QString::number(enemyscore));
}

int Enemyscore::get_enemy_score()
{
    return enemyscore;
}

