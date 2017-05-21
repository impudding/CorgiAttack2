#include"catbullet.h"
#include"doghouse.h"
#include<QPixmap>
#include<QTimer>
#include<QGraphicsScene>
#include<QList>
#include"health.h"
#include"lose.h"
#include"enemyscore.h"

extern Health *health;
extern Enemyscore *enemyscore;

CatBullet::CatBullet()
{
    setPixmap(QPixmap(":/Desktop/catbullet.png"));

    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(shoot_cat()));
    timer->start(70);
    if (health->health == 0){
        timer->stop();
    }
}

void CatBullet::shoot_cat()
{
    QList <QGraphicsItem *>colliding_items = collidingItems();
    for (int i = 0,n = colliding_items.size();i < n; ++i){

        //hit doghouse
        if (typeid(*(colliding_items[i])) == typeid(DogHouse)){

                health->decrease();
                enemyscore->increase();


                if (health->health == 0){
                    scene()->removeItem(colliding_items[i]);
                    delete colliding_items[i];

                    Lose *lose = new Lose();
                    scene()->addItem(lose);
                }

                scene()->removeItem(this);
                delete this;

                return;
        }
    }

    setPos(x()-10,y());
    if(pos().x() < 0){
        scene()->removeItem(this);
        delete this;

    }
}
