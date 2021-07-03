#include "Cwindows.h"
#include <QPainter>
#include <QPen> 
#include <QIcon> 
#include <QPushButton>
#include <QDebug> 
#include <iostream> 
#include <QPixmap> 

Cwindows::Cwindows(/* args */)
{
    setWindowIcon(QIcon(":/res/cKainan.png"));
    resize(1200,800);
    QPushButton *button = new QPushButton("&Start Game", this);
    //button->setIconSize(QSize(200,100));
    CgameWindows *gameWindows = new CgameWindows;
    
    button->move(500,350);
    button->setFixedSize(200,100);
    connect(button, &QPushButton::clicked, this, [=](){
        gameWindows->show();
    });
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
    QPixmap pix;
    pix.load(":/res/beijing.jpg");
    painter.drawPixmap(0, 0, this->width(), this->height(), pix);
}

