#include "Entity.h"
#include "PhysicsModel.h"

Entity::Entity(QGraphicsItem* parent)
    : QObject(), QGraphicsPixmapItem(parent), physics_(nullptr)
{
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFlag(QGraphicsItem::ItemSendsScenePositionChanges);

}

Entity::~Entity(){
}

void Entity::tick(qreal dt){
    if (physics_){
        physics_->apply(this,dt);
    }
}


void Entity::setPhysicsModel(PhysicsModel* m){
    physics_=m;
}
