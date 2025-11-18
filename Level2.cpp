#include "Level2.h"
#include "GameScene.h"
#include <QDebug>

Level2::Level2(GameScene* scene)
    : Level(scene)
{}

Level2::~Level2(){}

void Level2::load(){
    qDebug() << "Cargando level 2...";
}

void Level2::update(float dt){
    Q_UNUSED(dt);
}
