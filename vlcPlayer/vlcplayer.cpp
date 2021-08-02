#include "vlcplayer.h"
#include <QDir>
#include <QFile>
#include <QGraphicsScene>
#include <QGraphicsProxyWidget>
#include <QGraphicsView>
#include "vlc/vlc.h"
#include <QDebug>
VLCPlayer::VLCPlayer(QObject *parent) : QObject(parent)
{

}
//加载
bool VLCPlayer::load(const QString &filepath,QWidget *wid)
{
    if(filepath.isEmpty()){
        qDebug() << "filepath isEmpty";
        return false;
    }
    if(!QFile::exists(filepath)){
        qDebug() << "QFile no exists";
        return false;
    }
    freeVlc();
    bool bload = loadVlc(QDir::toNativeSeparators(filepath).toUtf8().constData(),wid);
    if(!bload){
        qDebug() << "bload no isEmpty";
        return false;
    }
    return true;
}

//播放
void VLCPlayer::play()
{
    if(libvlc_Ended == libvlc_media_get_state(m_media)){
        stop();//vlc这个设定太奇怪了，当自然播放结束，重新播放还得主动调用一次stop();
    }
    libvlc_media_player_play(m_mediaPlayer);
}

//暂停
void VLCPlayer::pause()
{
    if((bool)libvlc_media_player_is_playing(m_mediaPlayer)){
        m_bPlaying = false;
        libvlc_media_player_set_pause(m_mediaPlayer, 1);//暂停
    }
}

//停止
void VLCPlayer::stop()
{
    m_bPlaying = false;
    libvlc_media_player_stop(m_mediaPlayer);
}

//加载
bool VLCPlayer::loadVlc(const QString &filepath,QWidget *wid)
{

    m_vlcInstance = libvlc_new(0, NULL);
    m_media = libvlc_media_new_path(m_vlcInstance, filepath.toUtf8().data());
    if(!m_media){
        freeVlc();
        return m_media;
    }
    qDebug() << "loadVlc" << qPrintable(filepath);
    m_mediaPlayer = libvlc_media_player_new_from_media(m_media);
    if(!m_mediaPlayer){
        freeVlc();
        return false;
    }
    libvlc_media_parse(m_media);
    libvlc_event_manager_t *em = libvlc_media_player_event_manager(m_mediaPlayer);
    libvlc_event_attach(em, libvlc_MediaPlayerTimeChanged, vlcEvents, this);
    libvlc_event_attach(em, libvlc_MediaPlayerEndReached, vlcEvents, this);
    libvlc_event_attach(em, libvlc_MediaPlayerStopped, vlcEvents, this);
    libvlc_event_attach(em, libvlc_MediaPlayerPlaying, vlcEvents, this);
    libvlc_event_attach(em, libvlc_MediaPlayerPaused, vlcEvents, this);

    libvlc_media_player_set_hwnd(m_mediaPlayer, (void *)wid->winId());
    return true;
}

//VLC事件
void VLCPlayer::vlcEvents(const libvlc_event_t *ev, void *param)
{
    Q_UNUSED(param);
    switch (ev->type) {
    case libvlc_MediaPlayerTimeChanged:
        break;
    case libvlc_MediaPlayerEndReached://不能在回调里调用stop();否则会卡死
        break;
    case libvlc_MediaPlayerStopped:
        qDebug() << "libvlc_MediaPlayerStopped";
        break;
    case libvlc_MediaPlayerPlaying:
        qDebug() << "libvlc_MediaPlayerPlay";
        break;
    case libvlc_MediaPlayerPaused:
        qDebug() << "libvlc_MediaPlayerPaused";
        break;
    }
}

long long VLCPlayer::current()
{
    m_current = libvlc_media_player_get_time(m_mediaPlayer);
    return m_current;
}

void VLCPlayer::setCurrent(long long current)
{

    m_current = current;

    libvlc_media_player_set_position(m_mediaPlayer,(float)m_current/length());

}

long long VLCPlayer::length() const
{
    return libvlc_media_player_get_length(m_mediaPlayer);

}

int VLCPlayer::volume() const
{
    //m_volume = libvlc_audio_get_volume(m_mediaPlayer);
    return m_volume;
}

void VLCPlayer::setVolume(int volume)
{
    m_volume = volume;
    libvlc_audio_set_volume( m_mediaPlayer, volume);

}

//释放
void VLCPlayer::freeVlc()
{
    if(m_media){
        libvlc_media_release(m_media);
        m_media = Q_NULLPTR;
    }
    if(m_mediaPlayer){
        libvlc_media_player_stop(m_mediaPlayer);
        libvlc_media_player_release(m_mediaPlayer);
        m_mediaPlayer = Q_NULLPTR;
    }
    if(m_vlcInstance){
        libvlc_release(m_vlcInstance);
        m_vlcInstance = Q_NULLPTR;
    }
}
