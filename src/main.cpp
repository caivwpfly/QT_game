#include<QApplication>
#include<QWidget>
#include "Cwindows.h"

int main(int argc,char ** argv)
{
    QApplication app(argc,argv);
    //QWidget* pWidget = new QWidget();
    //pWidget->show();
    Cwindows cwin;
    cwin.show();
    return app.exec();

}
