#include "Level3.h"
#include "GameScene.h"
#include <QDebug>


Level3::Level3(GameScene* scene)
    :Level(scene)
{}

Level3::~Level3()
{
}

void Level3::load(){
    qDebug() << "Cargando desde Level 3...";

}

void Level3::update(float dt){
    Q_UNUSED(dt);
}
