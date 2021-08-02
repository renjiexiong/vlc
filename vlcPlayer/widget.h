#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "vlcplayer.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

protected:
    void timerEvent(QTimerEvent *event);
private:
    Ui::Widget *ui;
    VLCPlayer *m_player =nullptr;
    int currentChang_id = -1;
};

#endif // WIDGET_H
