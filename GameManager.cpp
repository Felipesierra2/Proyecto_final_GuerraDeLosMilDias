#include "GameManager.h"
#include "GameScene.h"
#include "Level1.h"
#include "Level2.h"
#include "Level3.h"

#include <QDebug>


GameManager::GameManager(GameScene* scene, QObject* parent)
    : QObject(parent),
    scene(scene),
    level(nullptr)
{}

GameManager::~GameManager(){
    delete level;
}

void GameManager::loadLevel(int levelNumber){

    if(level){
        delete level;
        level = nullptr;
    }

    switch (levelNumber) {
    case 1:
        qDebug() << "====Cargando Level 1=======";
        level = new Level1(scene);
        break;
    case 2:
        qDebug() << "=====Cargando Level 2=======";
        level = new Level2(scene);
        break;
    case 3:
        qDebug() << "=====Cargando level 3=======";
        level = new Level3(scene);
        break;
    default:
        qDebug() << "Nivel invalido";
        return;
    }

    level -> load();
}
