#ifndef ENEMYHEALTH_H
#define ENEMYHEALTH_H

#include<QGraphicsTextItem>

class EnemyHealth : public QGraphicsTextItem{
public:
    EnemyHealth(QGraphicsItem *parent = 0);
    void decrease();
    int get_e_health();
    int enemyhealth;
};

#endif // ENEMYHEALTH_H
