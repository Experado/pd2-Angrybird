#ifndef PIG_H
#define PIG_H


#include <gameitem.h>
#include <QPixmap>
#include <QGraphicsScene>
#include <QTimer>

#define PIG_DENSITY 20.0f
#define PIG_FRICTION 0.2f
#define PIG_RESTITUTION 0.5f

class pig : public GameItem
{
public:
    pig(float x, float y, float radius, QTimer *timer, QPixmap pixmap, b2World *world, QGraphicsScene *scene);
    b2Vec2 get_velocity();

};

#endif // PIG_H
