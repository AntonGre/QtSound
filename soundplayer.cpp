#include "soundplayer.h"
#include <QDebug>
#include <QSound>

SoundPlayer::SoundPlayer()
{

}


void SoundPlayer::playwav(void)
{
    QSound sound("/home/stud/Desktop/Sound_projekt/Sound/temp.wav");
    sound.play("/home/stud/Desktop/Sound_projekt/Sound/temp.wav");
    qDebug() << "HEJ\n";
}
