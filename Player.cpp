#include "Player.h"

Player::Player(QGraphicsItem* parent) : Entity() {}

void Player::tick(qreal dt){
    qDebug() << "player tick" << dt;
    Entity::tick(dt);
}
