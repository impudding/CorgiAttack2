#ifndef DOGHOUSE_H
#define DOGHOUSE_H

#include<QGraphicsPixmapItem>
#include<QObject>

class DogHouse : public QObject, public QGraphicsPixmapItem{

    Q_OBJECT

public:
    void keyPressEvent(QKeyEvent *event);
};

#endif // DOGHOUSE_H
