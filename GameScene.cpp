#include "GameScene.h"
#include "Player.h"
#include "Enemy.h"
#include "Entity.h"
#include <QGraphicsTextItem>

GameScene::GameScene(QObject* parent) : QGraphicsScene(parent){
    setSceneRect(0,0,2000,1200);

    connect(&updateTimer_,&QTimer::timeout, this, &GameScene::gameloop);
    updateTimer_.start(16);

    //Prueba para agregar un jugador y un enemigo
    Player *p = new Player();
    p->setPixmap(QPixmap(":/assets/player.png").scaled(48,48));
    p->setPos(200,400);
    addItem(p);

    Enemy *e = new Enemy();
    e->setPixmap(QPixmap(":/assets/player.png").scaled(48,48));
    e->setPos(200,400);
    addItem(e);
}

GameScene::~GameScene(){
}

void GameScene::gameloop(){
    qreal dt = 0.016;

    for(QGraphicsItem* item : items()){
        Entity *e = dynamic_cast<Entity*>(item);
        if(e){
            e->tick(dt);
        }
    }
    update();
}
