#ifndef ENEMYSCORE_H
#define ENEMYSCORE_H

#include<QGraphicsTextItem>


class Enemyscore : public QGraphicsTextItem{

    Q_OBJECT

public:
    Enemyscore(QGraphicsItem *parent = 0);
    int get_enemy_score();
    void increase();
    int enemyscore;
};

#endif // ENEMYSCORE_H
