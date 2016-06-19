#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->label_2->hide();
    ui->label->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->label_8->hide();
    ui->label_9->hide();

    // Enable the event Filter
    qApp->installEventFilter(this);


}

MainWindow::~MainWindow()
{
    delete ui;

}
void MainWindow::on_pushButton_clicked()
{
    MainWindow *u = new MainWindow;
    this->close();
    u->show();
    flag=-1;

}
int flag1;
int flag2;
int flag3;
int flag4;
int flag9;



void MainWindow::showEvent(QShowEvent *)
{

    score=0;
    result=false;
    kill1=false;
    kill2=false;
    kill3=false;
    kill4=false;
    kill5=false;
    kill6=false;
    // Setting the QGraphicsScene
    scene = new QGraphicsScene(0,0,960,540);
    ui->graphicsView->setScene(scene);

    // Create world
    world = new b2World(b2Vec2(0.0f, -9.8f));

    // Setting Size
    GameItem::setGlobalSize(QSizeF(32.0f,18.0f),size());

    // Create ground (You can edit here)
    itemList.push_back(new Land(16.0f,1.5f,32.0f,3.0f,QPixmap(":/ground.png").scaled(960,90),world,scene));


    // Setting the Velocity

    //create pigs

    pig1 =new pig (27.0f,9.0f,0.8f,&timer,QPixmap(":/image/XMAS_COOKIE_PIG.png").scaled(60,60),world,scene);
    itemList.push_back(pig1);

    pig2 =new pig (27.0f,6.0f,0.8f,&timer,QPixmap(":/image/XMAS_COOKIE_PIG.png").scaled(60,60),world,scene);
    itemList.push_back(pig2);

    pig3 =new pig (27.0f,10.5f,0.8f,&timer,QPixmap(":/image/XMAS_COOKIE_PIG.png").scaled(60,60),world,scene);
    itemList.push_back(pig3);

    pig4 =new pig (27.0f,14.0f,0.8f,&timer,QPixmap(":/image/XMAS_COOKIE_PIG.png").scaled(60,60),world,scene);
    itemList.push_back(pig4);

    pig5 =new pig (15.0f,7.5f,0.6f,&timer,QPixmap(":/image/XMAS_COOKIE_PIG.png").scaled(45,45),world,scene);
    itemList.push_back(pig5);

    pig6 =new pig (15.0f,13.0f,0.6f,&timer,QPixmap(":/image/XMAS_COOKIE_PIG.png").scaled(45,45),world,scene);
    itemList.push_back(pig6);


    //create steels
    steel *iron1 = new steel(15.0f,6.4f,8.8f,0.5f, &timer,QPixmap(":/image/BLOCK_ROCK_10X1_1.png").scaled(264,15),world,scene);
    itemList.push_back(iron1);
    steel *iron2 = new steel(15.0f,14.5f,8.8f,0.5f, &timer,QPixmap(":/image/BLOCK_ROCK_10X1_1.png").scaled(264,15),world,scene);
    itemList.push_back(iron2);
    steel *iron3 = new steel(27.0f,5.4f,5.0f,0.5f, &timer,QPixmap(":/image/BLOCK_ROCK_10X1_1.png").scaled(150,15),world,scene);
    itemList.push_back(iron3);
    steel *iron4 = new steel(27.0f,8.4f,5.0f,0.5f, &timer,QPixmap(":/image/BLOCK_ROCK_10X1_1.png").scaled(150,15),world,scene);
    itemList.push_back(iron4);
    steel *iron5 = new steel(27.0f,10.4f,5.0f,0.5f, &timer,QPixmap(":/image/BLOCK_ROCK_10X1_1.png").scaled(150,15),world,scene);
    itemList.push_back(iron5);
    steel *iron6 = new steel(27.0f,13.4f,5.0f,0.5f, &timer,QPixmap(":/image/BLOCK_ROCK_10X1_1.png").scaled(150,15),world,scene);
    itemList.push_back(iron6);

    steel *iron7 = new steel(15.0f,8.9f,8.8f,0.5f, &timer,QPixmap(":/image/BLOCK_ROCK_10X1_1.png").scaled(264,15),world,scene);
    steel *iron8 = new steel(15.0f,12.0f,8.8f,0.5f, &timer,QPixmap(":/image/BLOCK_ROCK_10X1_1.png").scaled(264,15),world,scene);
    itemList.push_back(iron7);
    itemList.push_back(iron8);

    steel *iron9 = new steel(5.0f,4.0f,2.0f,2.0f, &timer,QPixmap(":/image/BLOCK_PILLAR.png").scaled(60,60),world,scene);
    itemList.push_back(iron9);
    steel *iron10 = new steel(6.0f,4.0f,2.0f,2.0f, &timer,QPixmap(":/image/BLOCK_PILLAR.png").scaled(60,60),world,scene);
    itemList.push_back(iron10);

    steel *iron11 = new steel(0.0f,9.0f,0.5f,18.0f, &timer,QPixmap(":/image/white.png").scaled(15,540),world,scene);
    itemList.push_back(iron11);
    steel *iron12 = new steel(32.0f,9.0f,0.5f,18.0f, &timer,QPixmap(":/image/white.png").scaled(15,540),world,scene);
    itemList.push_back(iron12);
    steel *iron13 = new steel(16.0f,19.0f,32.0f,0.5f, &timer,QPixmap(":/image/white.png").scaled(960,15),world,scene);
    itemList.push_back(iron13);
    // create barriers


    woods *brick1 = new woods(18.0f,2.8f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick2 = new woods(12.0f,2.8f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick3 = new woods(18.0f,2.1f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick4 = new woods(12.0f,2.1f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick5 = new woods(18.0f,3.4f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick6 = new woods(12.0f,3.4f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick7 = new woods(14.0f,2.8f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick8 = new woods(16.0f,2.8f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick9= new woods(14.0f,2.1f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick10= new woods(16.0f,2.1f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick11= new woods(14.0f,3.4f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick12= new woods(16.0f,3.4f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick13 = new woods(18.0f,4.1f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick14 = new woods(12.0f,4.1f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick15 = new woods(18.0f,4.8f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick16 = new woods(12.0f,4.8f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick17 = new woods(18.0f,5.5f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick18 = new woods(12.0f,5.5f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick19 = new woods(14.0f,4.1f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick20 = new woods(16.0f,4.1f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick21= new woods(14.0f,4.8f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick22= new woods(16.0f,4.8f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick23= new woods(14.0f,5.5f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick24= new woods(16.0f,5.5f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);




    itemList.push_back(brick1);
    itemList.push_back(brick2);
    itemList.push_back(brick3);
    itemList.push_back(brick4);
    itemList.push_back(brick5);
    itemList.push_back(brick6);
    itemList.push_back(brick7);
    itemList.push_back(brick8);
    itemList.push_back(brick9);
    itemList.push_back(brick10);
    itemList.push_back(brick11);
    itemList.push_back(brick12);
    itemList.push_back(brick13);
    itemList.push_back(brick14);
    itemList.push_back(brick15);
    itemList.push_back(brick16);
    itemList.push_back(brick17);
    itemList.push_back(brick18);
    itemList.push_back(brick19);
    itemList.push_back(brick20);
    itemList.push_back(brick21);
    itemList.push_back(brick22);
    itemList.push_back(brick23);
    itemList.push_back(brick24);


    woods *brick25 = new woods(18.0f,14.9f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick26 = new woods(12.0f,14.9f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick27 = new woods(18.0f,18.3f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick28 = new woods(12.0f,18.3f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick29 = new woods(18.0f,15.5f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick30 = new woods(12.0f,15.5f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick31 = new woods(14.0f,14.9f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick32 = new woods(16.0f,14.9f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick33= new woods(14.0f,18.3f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick34= new woods(16.0f,18.3f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick35= new woods(14.0f,15.5f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick36= new woods(16.0f,15.5f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick37 = new woods(18.0f,16.2f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick38 = new woods(12.0f,16.2f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick39 = new woods(18.0f,16.9f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick40 = new woods(12.0f,16.9f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick41 = new woods(18.0f,17.6f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick42 = new woods(12.0f,17.6f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick43 = new woods(14.0f,16.2f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick44 = new woods(16.0f,16.2f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick45= new woods(14.0f,16.9f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick46= new woods(16.0f,16.9f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick47= new woods(14.0f,17.6f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);
    woods *brick48= new woods(16.0f,17.6f,2.0f,0.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(60,15),world,scene);

    itemList.push_back(brick25);
    itemList.push_back(brick26);
    itemList.push_back(brick27);
    itemList.push_back(brick28);
    itemList.push_back(brick29);
    itemList.push_back(brick30);
    itemList.push_back(brick31);
    itemList.push_back(brick32);
    itemList.push_back(brick33);
    itemList.push_back(brick34);
    itemList.push_back(brick35);
    itemList.push_back(brick36);
    itemList.push_back(brick37);
    itemList.push_back(brick38);
    itemList.push_back(brick39);
    itemList.push_back(brick40);
    itemList.push_back(brick41);
    itemList.push_back(brick42);
    itemList.push_back(brick43);
    itemList.push_back(brick44);
    itemList.push_back(brick45);
    itemList.push_back(brick46);
    itemList.push_back(brick47);
    itemList.push_back(brick48);


    woods *brick61= new woods(18.0f,14.5f,1.5f,1.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(45,45),world,scene);
    woods *brick62= new woods(18.0f,8.0f,1.5f,1.5f, &timer,QPixmap(":/image/INGAME_BLOCKS_WOOD_A.png").scaled(45,45),world,scene);

    itemList.push_back(brick61);
    itemList.push_back(brick62);

    // Timer
    connect(&timer,SIGNAL(timeout()),this,SLOT(tick()));
    connect(this,SIGNAL(quitGame()),this,SLOT(QUITSLOT()));
    timer.start(100/6);

}

bool MainWindow::eventFilter(QObject *, QEvent *event)
{


    if(flag==-1)
    {
        flag1=0;
        flag=0;
    }
    // Hint: Notice the Number of every event!
    if(event->type() == QEvent::MouseButtonPress)
    {
     QMouseEvent *mouse_press = static_cast<QMouseEvent*>(event);

        if (mouse_press->button() == Qt::LeftButton)
        {
                     // Create bird (You can edit here)
            if (flag1==0)
            {
                bird1 =(new pig(5.85f,5.5f,0.4f,&timer,QPixmap(":/image/BIRD_BLUE.png").scaled(30,30),world,scene));
                itemList.push_back(bird1);
                flag1=flag1+1;
                return true;
            }
            if (flag1==2)
            {
                b2Vec2 now=bird1->g_body->GetPosition();
                birda =(new pig(now.x-0.5,now.y+1.5,0.4f,&timer,QPixmap(":/image/BIRD_BLUE.png").scaled(30,30),world,scene));
                itemList.push_back(birda);
                birdb =(new pig(now.x+0.5,now.y+1.0,0.4f,&timer,QPixmap(":/image/BIRD_BLUE.png").scaled(30,30),world,scene));
                itemList.push_back(birdb);
                birdc =(new pig(now.x+1.5,now.y-1.0,0.4f,&timer,QPixmap(":/image/BIRD_BLUE.png").scaled(30,30),world,scene));
                itemList.push_back(birdc);
                birdd =(new pig(now.x+1.0,now.y-1.5,0.4f,&timer,QPixmap(":/image/BIRD_BLUE.png").scaled(30,30),world,scene));
                itemList.push_back(birdd);

                flag1++;
                flag9=0;
                return true;
            }

           }


        if (mouse_press->button() == Qt::LeftButton)
        {
           if (flag2==0)
            {
                bird2 =(new Bird(5.85f,5.5f,0.8f,&timer,QPixmap(":/image/BIRD_BIG_BROTHER.png").scaled(60,60),world,scene));
                itemList.push_back(bird2);
                flag2=flag2+1;
                return true;
            }

               if (flag2==2)
               {
                 bird2->g_body->SetLinearVelocity(b2Vec2(0,-1000));
                 flag2++;
                 flag3=0;
                   return true;
               }


        }
        if (mouse_press->button() == Qt::LeftButton)
        {
            if (flag3==0)
            {
                bird3 =(new pig(5.85f,5.5f,0.5f,&timer,QPixmap(":/image/BIRD_YELLOW_SPECIAL.png").scaled(37.5,37.5),world,scene));
                itemList.push_back(bird3);
                flag3=flag3+1;
                return true;
            }
            if (flag3==2)
            {
              bird3->g_body->SetLinearVelocity(b2Vec2(100,0));
              flag3++;
              flag4=0;
                return true;
            }

        }
        if (mouse_press->button() == Qt::LeftButton)
        {
            if (flag4==0)
            {
                bird4 =(new pig(5.85f,5.5f,0.5f,&timer,QPixmap(":/bird.png").scaled(37.5,37.5),world,scene));
                itemList.push_back(bird4);
                flag4=flag4+1;
                return true;
            }
            if(flag4==2)
            {
                b2Vec2 now=bird4->g_body->GetPosition();
                now += b2Vec2(10,0);
                bird4->g_body->SetTransform(now,bird4->g_body->GetAngle());
                b2Vec2 last=bird4->g_body->GetLinearVelocity();
                if (last.x<1 && last.x>-1)
                    result=true;
                flag4++;
                return true;
            }

        }
     }
    if( event->type() == QEvent::MouseMove)
    {
        QMouseEvent *mouse_move = static_cast<QMouseEvent*>(event);
         if (mouse_move->button() & Qt::LeftButton)
         {

         }
    }
    if(event->type() == QEvent::MouseButtonRelease)
    {

        {
            QMouseEvent *mouse_move = static_cast<QMouseEvent*>(event);
             if (mouse_move->button() & Qt::LeftButton)
             {
                 endpoint= mouse_move->pos();
             }
             QMouseEvent *mouse_release = static_cast<QMouseEvent*>(event);

            if (flag1==1 && mouse_release->button() == Qt::LeftButton)
            {
                float r=pow((endpoint.x()-5.85)*(endpoint.x()-5.85)+(endpoint.y()-4.0)*(endpoint.y()-4.0),0.5);
                float cos=(endpoint.x()-5.85)/r;
                float sin=(endpoint.y()-4.0)/r;


                if(flag1==1)
                {
                    bird1->g_body->SetLinearVelocity(b2Vec2(r/15*cos,r/20*sin));
                    flag1++;
                    flag2=0;
                    return true;
                }
            }
            if (flag9==0 && mouse_release->button() == Qt::LeftButton)
            {

                    b2Vec2 need = bird1->g_body->GetLinearVelocity();
                    birda->g_body->SetLinearVelocity(b2Vec2(100,need.y));
                    birdb->g_body->SetLinearVelocity(b2Vec2(100,need.y));
                    birdc->g_body->SetLinearVelocity(b2Vec2(100,need.y));
                    birdd->g_body->SetLinearVelocity(b2Vec2(100,need.y));
                    flag9++;
                    return true;


            }
            if (flag2==1 && mouse_release->button() == Qt::LeftButton)
            {
                float r=pow((endpoint.x()-5.85)*(endpoint.x()-5.85)+(endpoint.y()-4.0)*(endpoint.y()-4.0),0.5);
                float cos=(endpoint.x()-5.85)/r;
                float sin=(endpoint.y()-4.0)/r;


                if(flag2==1)
                {
                    bird2->g_body->SetLinearVelocity(b2Vec2(r*cos/15,r*sin/20));
                    flag2++;
                    flag3=0;
                    return true;
                }

            }
            if (flag3==1 && mouse_release->button() == Qt::LeftButton)
            {
                float r=pow((endpoint.x()-5.85)*(endpoint.x()-5.85)+(endpoint.y()-4.0)*(endpoint.y()-4.0),0.5);
                float cos=(endpoint.x()-5.85)/r;
                float sin=(endpoint.y()-4.0)/r;


                if(flag3==1)
                {
                    bird3->g_body->SetLinearVelocity(b2Vec2(r*cos/20,r*sin/20));
                    flag3++;
                    flag4=0;
                   return true;
                }

            }
            if (flag4==1 && mouse_release->button() == Qt::LeftButton)
            {
                float r=pow((endpoint.x()-5.85)*(endpoint.x()-5.85)+(endpoint.y()-4.0)*(endpoint.y()-4.0),0.5);
                float cos=(endpoint.x()-5.85)/r;
                float sin=(endpoint.y()-4.0)/r;

                if(flag4==1)
                {
                    bird4->g_body->SetLinearVelocity(b2Vec2(r*cos/15,r*sin/20));
                    flag4++;
                   return true;

                }

            }
        }

    }
    return false;
}
void MainWindow::closeEvent(QCloseEvent *)
{
    // Close event
    emit quitGame();
}

void MainWindow::tick()
{
    world->Step(1.0/60.0,6,2);
    scene->update();
    //kill the pig

    if (kill1==false)
    {
        p1=pig1->get_velocity().x+pig1->get_velocity().y;
        if(p1>3.0 || p1<-3.0)
        {
            kill1=true;
            score+=20;
            delete pig1;

        }
    }
    if (kill2==false)
    {
        p2=pig2->get_velocity().x+pig2->get_velocity().y;
        if(p2>3.0 || p2<-3.0)
        {
            kill2=true;
            score+=20;
            delete pig2;

        }
    }
    if (kill3==false)
    {
        p3=pig3->get_velocity().x+pig3->get_velocity().y;
        if(p3>3.0 || p3<-3.0)
        {

            kill3=true;
            score+=20;
            delete pig3;

        }
    }
    if (kill4==false)
    {
        p4=pig4->get_velocity().x+pig4->get_velocity().y;
        if(p4>3.0 || p4<-3.0)
        {
            kill4=true;
            score+=20;
            delete pig4;

        }
    }
    if (kill5==false)
    {
        p5=pig5->get_velocity().x+pig5->get_velocity().y;
        if(p5>3.0 || p5<-3.0)
        {
            kill5=true;
            score+=20;
            delete pig5;

        }
    }
    if (kill6==false)
    {
        p6=pig6->get_velocity().x+pig6->get_velocity().y;
        if(p6>3.0 || p6<-3.0)
        {
            kill6=true;
            score+=20;
            delete pig6;

        }
    }






}

void MainWindow::QUITSLOT()
{
    // For debug
    std::cout << "Quit Game Signal receive !" << std::endl ;
}



void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_3_clicked()
{
    if (score==0)
    {
        ui->label_2->show();
        ui->graphicsView->hide();
        ui->label_3->show();
    }
    if (score==20)
    {
        ui->label_2->show();
        ui->graphicsView->hide();
        ui->label_4->show();
    }
    if (score==40)
    {
        ui->label_2->show();
        ui->graphicsView->hide();
        ui->label_5->show();
    }
    if (score==60)
    {
        ui->label_2->show();
        ui->graphicsView->hide();
        ui->label_6->show();
    }
    if (score==80)
    {
        ui->label_2->show();
        ui->graphicsView->hide();
        ui->label_7->show();
    }
    if (score==100)
    {
        ui->label->show();
        ui->graphicsView->hide();
        ui->label_8->show();
    }
    if (score>=120)
    {
        ui->label->show();
        ui->graphicsView->hide();
        ui->label_9->show();
    }


}
