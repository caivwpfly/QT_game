#include "CgameWindows.h"
#include <QPainter>
#include <QPen> 
#include <QIcon> 
#include <QPushButton>
#include <QDebug> 
#include <iostream> 
#include <QPixmap> 
CgameWindows::CgameWindows()
{
    resize(1200,800);
}
CgameWindows::~CgameWindows()
{

}
void CgameWindows::paintEvent(QPaintEvent *event)
{
    const int kBoardMargin = 10; 
    const int kBlockSize = 40; 
    const int widthBoardMargin = (size().height() - kBoardMargin)% kBlockSize; // 棋盘边缘空隙
    QPainter painter(this);
    for (int i = 0; i < (size().width() - kBoardMargin) / kBlockSize +1; i++)
    {
        painter.drawLine(kBoardMargin + kBlockSize * i, kBoardMargin, kBoardMargin + kBlockSize * i, size().height() - widthBoardMargin);
        //painter.drawLine(kBoardMargin, kBoardMargin + kBlockSize * i, size().width() - kBoardMargin, kBoardMargin + kBlockSize * i);
    }
    const int heightBoardMargin = (size().width() - kBoardMargin)  % kBlockSize; // 棋盘边缘空隙

    for (int i = 0; i < (size().height() - kBoardMargin) / kBlockSize +1; i++)
    {
        //painter.drawLine(kBoardMargin + kBlockSize * i, 10, kBoardMargin + kBlockSize * i, size().height() - widthBoardMargin);
        painter.drawLine(kBoardMargin, kBoardMargin + kBlockSize * i, size().width() - heightBoardMargin, kBoardMargin + kBlockSize * i);
    }
}
