#include "Enemy.h"
#include "AIController.h"

Enemy::Enemy(QGraphicsItem *parent) : Entity(parent), ai_(nullptr){
    ai_ = new AIController(this);
}

Enemy::~Enemy(){
    delete ai_;
}

void Enemy::tick(qreal dt){

    if(ai_) ai_->update(dt);
    Entity::tick(dt);
}
