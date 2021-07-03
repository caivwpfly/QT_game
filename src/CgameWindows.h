#ifndef CGAMEWINDOWS_H
#define CGAMEWINDOWS_H
#include <QMainWindow> 
#include <QPaintEvent> 
class CgameWindows : public QMainWindow
{
public:
    CgameWindows();
    ~CgameWindows();
    void paintEvent(QPaintEvent *event);
};

#endif