#include"win.h"
#include<QPixmap>
#include<QGraphicsScene>

Win::Win(QGraphicsItem *parent) : QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/Desktop/win.png"));
    setPos(450,110);
}
