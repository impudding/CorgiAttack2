#include"lose.h"
#include<QPixmap>
#include<QGraphicsScene>

Lose::Lose(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
  setPixmap(QPixmap(":/Desktop/lose.png"));
  setPos(450,110);
}
