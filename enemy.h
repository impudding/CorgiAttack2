#ifndef ENEMY_H
#define ENEMY_H

#include<QGraphicsPixmapItem>
#include<QObject>

class Enemy : public QObject,public QGraphicsPixmapItem{

    Q_OBJECT
public:

public slots:
    void random_attack();

};

#endif // ENEMY_H
