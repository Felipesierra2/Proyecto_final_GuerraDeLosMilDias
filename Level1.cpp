#include "Level1.h"
#include "GameScene.h"
#include <QDebug>

Level1::Level1(GameScene* scene)
    : Level(scene)
{}

Level1::~Level1(){}

void Level1::load(){
    qDebug() << "Cargando level 1...";
}

void Level1::update(float dt){
    Q_UNUSED(dt);
}
