#ifndef STEEL_H
#define STEEL_H

#include <gameitem.h>
#include <QPixmap>
#include <QGraphicsScene>
#include <QTimer>

#define STEEL_DENSITY 100.0f
#define STEEL_FRICTION 0.2f
#define STEEL_RESTITUTION 0.5f

class steel:public GameItem
{
public:
    steel(float x,float y, float width, float height,
          QTimer *timer, QPixmap pixmap, b2World *world,
            QGraphicsScene *scene);
};

#endif // STEEL_H
