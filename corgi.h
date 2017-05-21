#ifndef CORGI_H
#define CORGI_H

#include<QGraphicsPixmapItem>
#include<QObject>

class Corgi : public QObject,public QGraphicsPixmapItem{

    Q_OBJECT

public:
    Corgi();
public slots:
    void attack();
};
#endif // CORGI_H
