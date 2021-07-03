#ifndef CWINDOWS_H
#define CWINDOWS_H
#include <QMainWindow> 
#include "CgameWindows.h"
#include <QPaintEvent> 
class Cwindows : public QMainWindow
{
public:
    Cwindows(/* args */);
    ~Cwindows();
    void paintEvent(QPaintEvent *event);
};

#endif