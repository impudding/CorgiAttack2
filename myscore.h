#ifndef MYSCORE_H
#define MYSCORE_H

#include<QGraphicsTextItem>

class Myscore : public QGraphicsTextItem{
public:
    Myscore(QGraphicsItem *parent = 0);
    int myscore;
    void increase();
    int get_my_score();
};



#endif // MYSCORE_H
