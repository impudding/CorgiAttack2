#include"corgi.h"
#include<QPixmap>
#include<QTimer>
#include<QGraphicsScene>
#include<QList>
#include"enemy.h"
#include"catbullet.h"
#include"myscore.h"
#include"enemyhealth.h"
#include"win.h"

extern Myscore *myscore;
extern EnemyHealth *enemyhealth;

Corgi::Corgi()
{
    setPixmap(QPixmap(":/Desktop/corgi.png"));

    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(attack()));
    timer->start(70);
}

void Corgi::attack()
{
    QList <QGraphicsItem *>colliding_items = collidingItems();
    for (int i = 0,n = colliding_items.size();i < n; ++i){

        if(typeid(*(colliding_items[i])) == typeid(CatBullet)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete this;
            delete colliding_items[i];

        return;
        }

        //hit enemy
        else if(typeid(*(colliding_items[i])) == typeid(Enemy)){
            myscore->increase();
            enemyhealth->decrease();

            if (enemyhealth->enemyhealth == 0){
                scene()->removeItem(colliding_items[i]);
                delete colliding_items[i];

                Win *win = new Win();
                scene()->addItem(win);
            }

            scene()->removeItem(this);
            delete this;

            return;
        }
    }

    setPos(x()+10,y());
    if(pos().x() > 1200){
        scene()->removeItem(this);
        delete this;
    }
}
