#include<QApplication>
#include<QPixmap>
#include"enemy.h"
#include<QTimer>
#include"health.h"
#include<QGraphicsView>
#include<QGraphicsScene>
#include"doghouse.h"
#include"myscore.h"
#include"gameboard.h"
#include"health.h"
#include"corgi.h"
#include"enemyscore.h"
#include"enemyhealth.h"
#include"deck.h"

Myscore *myscore;
Health *health;
Enemyscore *enemyscore;
EnemyHealth *enemyhealth;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene *scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1200,600);
    scene->setBackgroundBrush(QPixmap(":/Desktop/background.png"));

    QGraphicsView *view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(1200,600);

    DogHouse *doghouse = new DogHouse();
    doghouse->setPixmap(QPixmap(":/Desktop/doghouse.png"));
    doghouse->setPos(30,130);
    scene->addItem(doghouse);

    Enemy *enemy = new Enemy();
    enemy->setPixmap(QPixmap(":/Desktop/doghouse.png"));
    enemy->setPos(1000,130);
    scene->addItem(enemy);

    doghouse->setFlag(QGraphicsItem::ItemIsFocusable);
    doghouse->setFocus();

    GameBoard *gameboard = new GameBoard();
    scene->addItem(gameboard);

    myscore = new Myscore();
    myscore->setPos(myscore->x()+180,myscore->y() +400);
    scene->addItem(myscore);

    health = new Health();
    health->setPos(health->x() +180,health->y() +450);
    scene->addItem(health);

    enemyscore = new Enemyscore();
    enemyscore->setPos(enemyscore->x()+810,enemyscore->y()+400);
    scene->addItem(enemyscore);

    enemyhealth = new EnemyHealth();
    enemyhealth->setPos(enemyhealth->x()+810,enemyhealth->y()+450);
    scene->addItem(enemyhealth);

    Deck *deck = new Deck();
    scene->addItem(deck);

    //create catbullet
    QTimer *timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),enemy,SLOT(random_attack()));
    timer->start(1000);

    view->show();

    return a.exec();
}
