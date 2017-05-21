#include"doghouse.h"
#include<QKeyEvent>
#include<QGraphicsScene>
#include"bullet.h"
#include"corgibutt.h"
#include"bone.h"
#include"corgi.h"

void DogHouse::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Space){
        Bullet *bullet = new Bullet();
        bullet->setPos(x()+140,y()+110);
        scene()->addItem(bullet);
    }

    else if(event->key() == Qt::Key_Z){
        Corgibutt *corgibutt = new Corgibutt();
        corgibutt->setPos(x()+150,y()+110);
        scene()->addItem(corgibutt);
    }

    else if(event->key() == Qt::Key_X){
        Bone *bone = new Bone();
        bone->setPos(x()+150,y()+110);
        scene()->addItem(bone);
    }

    else if (event->key() == Qt::Key_C){
        Corgi *corgi = new Corgi();
        corgi->setPos(x()+150,y()+110);
        scene()->addItem(corgi);
    }



}


