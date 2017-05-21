#ifndef CORGIBUTT_H
#define CORGIBUTT_H

#include<QGraphicsPixmapItem>
#include<QObject>

class Corgibutt : public QObject,public QGraphicsPixmapItem{

    Q_OBJECT

public:
    Corgibutt();
public slots:
    void attack();
};

#endif // MINION_H
