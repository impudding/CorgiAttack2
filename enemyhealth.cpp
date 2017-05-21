#include"enemyhealth.h"
#include<QFont>

EnemyHealth::EnemyHealth(QGraphicsItem *parent)
{
    enemyhealth = 120;

    setPlainText(QString("Enemy health:") + QString::number(enemyhealth));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",30));

}

void EnemyHealth::decrease()
{
    enemyhealth = enemyhealth -5;
    setPlainText(QString("Enemy health:") + QString::number(enemyhealth));
}

int EnemyHealth::get_e_health()
{
    return enemyhealth;
}


