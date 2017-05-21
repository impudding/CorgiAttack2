#ifndef CATBULLET_H
#define CATBULLET_H

#include<QGraphicsPixmapItem>
#include<QObject>

class CatBullet : public QObject,public QGraphicsPixmapItem{

    Q_OBJECT

public:

    CatBullet();
public slots:
    void shoot_cat();
};

#endif // CATBULLET_H
