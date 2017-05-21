#include"myscore.h"
#include<QFont>

Myscore::Myscore(QGraphicsItem *parent) : QGraphicsTextItem(parent){

    myscore = 0;
    setPlainText(QString("My score: ") + QString::number(myscore));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",30));

}

void Myscore::increase()
{
    myscore = myscore + 5;
    setPlainText(QString("My score:") + QString::number(myscore));
}

int Myscore::get_my_score()
{
    return myscore;
}
