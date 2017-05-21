#include"deck.h"
#include<QPixmap>
#include<QGraphicsScene>

Deck::Deck(QGraphicsItem *parent)
{
    setPixmap(QPixmap(":/Desktop/deck.png"));
    setPos(460,335);


}
