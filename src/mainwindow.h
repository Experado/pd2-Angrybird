#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QList>
#include <QDesktopWidget>
#include <QTimer>
#include <Box2D/Box2D.h>
#include <QMouseEvent>
#include <iostream>
#include <QPushButton>
#include <QPoint>


#include <gameitem.h>
#include <land.h>
#include <bird.h>
#include <woods.h>
#include <steel.h>
#include <pig.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int flag;
    pig *bird1;
    Bird *bird2;
    pig *bird3;
    pig *bird4;
    pig *birda;
    pig *birdb;
    pig *birdc;
    pig *birdd;
    pig *pig1;
    pig *pig2;
    pig *pig3;
    pig *pig4;
    pig *pig5;
    pig *pig6;

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void showEvent(QShowEvent *);
    bool eventFilter(QObject *,QEvent *event);
    void closeEvent(QCloseEvent *);

    signals:
    // Signal for closing the game
    void quitGame();

private slots:
    void tick();
    // For debug slot
    void QUITSLOT();
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:

    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    b2World *world;
    QList<GameItem *> itemList;
    QList<Bird*> birdlist;
    QTimer timer;
    QPoint pos;
    QPoint endpoint;
    float p1,p2,p3,p4,p5,p6;
    bool kill1,kill2,kill3,kill4,kill5,kill6;
    int score;
    bool result;


};

#endif // MAINWINDOW_H
