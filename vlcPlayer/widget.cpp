#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_player = new VLCPlayer;
    m_player->load("C:/Users/Admin/Desktop/music/Rec 3.mp3",ui->label);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{

    m_player->play();
    //ui->horizontalSlider->setRange(0,m_player->length());
    if(currentChang_id ==-1)
    {
        currentChang_id = startTimer(500);
    }

}

void Widget::on_pushButton_2_clicked()
{
    static int volume =50;
    volume+= 10;
    m_player->setVolume(volume);
}

void Widget::on_pushButton_3_clicked()
{
    qDebug()<<"m_player->length()/2" <<m_player->length()/2<<endl;
    m_player->setCurrent(m_player->length()/2);
}

void Widget::timerEvent(QTimerEvent *event)
{
    int timerid = event->timerId();
    if(timerid == currentChang_id)
    {
        ui->horizontalSlider->setValue(m_player->current());
        ui->horizontalSlider->setRange(0,m_player->length());
//        qDebug()<<"m_player->current()"<<m_player->current();
//        qDebug()<<"m_player->length()"<<m_player->length();

    }
}

void Widget::on_pushButton_4_clicked()
{
    QString file = QFileDialog::getOpenFileName(this,"ddddd","C:/Users/Admin/Desktop/music/convert_music","*.*");

    m_player->load(file,ui->label);
}
