#include "Cwindows.h"
#include <QPainter>
#include <QPen> 
Cwindows::Cwindows(/* args */)
{
    resize(1200,800);
}

Cwindows::~Cwindows()
{
}

void Cwindows::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen pen(Qt::green, 3, Qt::DashDotLine, Qt::RoundCap, Qt::RoundJoin);
    painter.setPen(pen);
    painter.drawRect(200, 100, 300, 50);
}

