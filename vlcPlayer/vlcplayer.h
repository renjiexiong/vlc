#ifndef VLCPLAYER_H
#define VLCPLAYER_H

#include <QObject>
#include <QFileDialog>
#include <QTimer>
#include <QMutex>

struct libvlc_media_track_info_t;
struct libvlc_media_t;
struct libvlc_instance_t;
struct libvlc_media_player_t;
struct libvlc_event_t;

class VLCPlayer : public QObject
{
    Q_OBJECT
public:
    explicit VLCPlayer(QObject *parent = nullptr);

    bool load(const QString &filepath,QWidget *wid);//加载
    void play();//播放
    void pause();//暂停
    void stop();//停止
    bool loadVlc(const QString &filepath,QWidget *wid);//加载
    void freeVlc();//释放


    int volume() const;
    void setVolume(int volume);

    long long length() const;

    long long current();
    void setCurrent(long long current);

protected:
    static void vlcEvents(const libvlc_event_t *ev, void *param);//VLC事件
signals:
    void changeDurtion(long long duration);
    void changeCurrent(long long current);

private:
    libvlc_instance_t *m_vlcInstance = Q_NULLPTR;
    libvlc_media_t *m_media = Q_NULLPTR;
    libvlc_media_player_t *m_mediaPlayer = Q_NULLPTR;

    QFileDialog *m_fileDialog = Q_NULLPTR;
    QTimer *m_timer = Q_NULLPTR;

    QMutex m_mutex;
    qint64 m_duration = 0;
    bool m_bPlaying = false;
    int m_volume = 100;
    long long m_current = 0;
};

#endif // VLCPLAYER_H
