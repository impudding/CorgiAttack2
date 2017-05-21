#ifndef BULLET_H
#define BULLET_H

#include<QGraphicsPixmapItem>
#include<QObject>

class Bullet : public QObject,public QGraphicsPixmapItem{

    Q_OBJECT

public:
    Bullet();
public slots:
    void shoot();
};

#endif // BULLET_H
