#ifndef WOODS_H
#define WOODS_H

#include <gameitem.h>
#include <QPixmap>
#include <QGraphicsScene>
#include <QTimer>

#define WOODS_DENSITY 15.0f
#define WOODS_FRICTION 0.2f
#define WOODS_RESTITUTION 0.5f


class woods:public GameItem
{
public:
    woods(float x,float y, float width, float height,
        QTimer *timer, QPixmap pixmap, b2World *world,
          QGraphicsScene *scene);
};

#endif // WOODS_H
