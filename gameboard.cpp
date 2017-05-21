#include"gameboard.h"
#include<QPixmap>
#include<QGraphicsScene>


GameBoard::GameBoard(QGraphicsItem *parent) : QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/Desktop/gameboard"));
    setPos(150,310);
}

