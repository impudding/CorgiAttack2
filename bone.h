#ifndef BONE_H
#define BONE_H

#include<QGraphicsPixmapItem>
#include<QObject>

class Bone : public QObject,public QGraphicsPixmapItem{

    Q_OBJECT

public:
    Bone();

public slots:
    void attack();
};
#endif // BONE_H
