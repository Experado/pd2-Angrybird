#include "steel.h"

steel::steel(float x, float y, float width, float height, QTimer *timer, QPixmap pixmap, b2World *world, QGraphicsScene *scene) : GameItem(world)
{
    g_pixmap.setPixmap(pixmap);
    g_pixmap.setTransformOriginPoint(g_pixmap.boundingRect().width() / 2,g_pixmap.boundingRect().height() / 2);
    g_size = QSizeF(width, height);
    b2BodyDef bodydef;
    bodydef.type = b2_staticBody;
    bodydef.bullet = true;
    bodydef.position.Set(x,y);
    bodydef.userData = this;
    g_body = world->CreateBody(&bodydef);

    b2PolygonShape bodyshape;
    bodyshape.SetAsBox(width/2,height/2);

    b2FixtureDef fixturedef;
    fixturedef.shape = &bodyshape;
    fixturedef.density = STEEL_DENSITY;
    fixturedef.friction = STEEL_FRICTION;
    fixturedef.restitution = STEEL_RESTITUTION;

    g_body->SetAngularDamping(3);
    g_body->CreateFixture(&fixturedef);

    connect(timer, SIGNAL(timeout()), this,SLOT(paint()));
    scene->addItem(&g_pixmap);

}

