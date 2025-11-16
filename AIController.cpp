#include "AIController.h"
#include "Enemy.h"


AIController::AIController(Enemy *owner, QObject* parent)
    :QObject(parent), owner_(owner)
{}

void AIController::update(qreal dt){
    Q_UNUSED(dt);
}
