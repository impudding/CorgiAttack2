#include"health.h"
#include<QFont>

Health::Health(QGraphicsItem *parent) : QGraphicsTextItem(parent){
    health = 120;

    setPlainText(QString("My health:") + QString::number(health));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",30));

}

void Health::decrease()
{
    health = health - 5;
    setPlainText(QString("My health:") + QString::number(health));
}

int Health::get_my_health()
{
    return health;
}
