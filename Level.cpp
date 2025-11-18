#include "Level.h"
#include "GameScene.h"
#include "Entity.h"


Level::Level(GameScene* scene, QObject* parent)
    :QObject(parent),
    scene(scene)
{}

Level::~Level(){

    for(Entity* e: entities){
        delete e;
    }

    entities.clear();
}
