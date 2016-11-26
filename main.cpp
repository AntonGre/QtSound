#include "mainwindow.h"
#include "soundplayer.h"
#include <unistd.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    SoundPlayer p;
    p.playwav();
    w.show();
    sleep(10);
    return a.exec();
}
