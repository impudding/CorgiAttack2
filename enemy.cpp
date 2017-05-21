#include"enemy.h"
#include"catbullet.h"
#include<QGraphicsScene>


void Enemy::random_attack()
{
        CatBullet *catbullet = new CatBullet();

        catbullet->setPos(950,240);
        scene()->addItem(catbullet);

}
