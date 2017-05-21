#include"bullet.h"
#include<QPixmap>
#include<QTimer>
#include<QGraphicsScene>
#include<QList>
#include"enemy.h"
#include"catbullet.h"
#include"myscore.h"
#include"win.h"
#include"enemyhealth.h"


extern Myscore *myscore;
extern EnemyHealth *enemyhealth;

Bullet::Bullet()
{
    setPixmap(QPixmap(":/Desktop/artillery.png"));

    QTimer *timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(shoot()));
    timer->start(50);
}

void Bullet::shoot()
{

    //get a list of all the items currently colliding with this bullet
    QList <QGraphicsItem *>colliding_items = collidingItems();
    for (int i = 0,n = colliding_items.size();i < n; ++i){

        //bullet hit enemy
        if (typeid(*(colliding_items[i])) == typeid(Enemy)){
            enemyhealth->decrease();
            myscore->increase();

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

        else if (typeid(*(colliding_items[i])) == typeid(CatBullet)){
            //when hit the cat,destroy both
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);

            delete this;
            delete colliding_items[i];

            return;
        }
    }

    setPos(x()+10,y());
    if(pos().x() > 1200){
        scene()->removeItem(this);
        delete this;
    }

}
