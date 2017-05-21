#ifndef HEALTH_H
#define HEALTH_H

#include<QGraphicsTextItem>

class Health : public QGraphicsTextItem{
public:
    Health(QGraphicsItem *parent = 0);
    void decrease();
    int get_my_health();
    int health;
};

#endif // HEALTH_H
