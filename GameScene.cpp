#include "GameScene.h"
#include "GameManager.h"
#include "Player.h"
#include "Enemy.h"
#include "Entity.h"
#include "Level.h"
#include <QGraphicsTextItem>
#include <QDateTime>


GameScene::GameScene(QObject* parent) : QGraphicsScene(parent), manager_(nullptr){
    setSceneRect(0,0,2000,1200);

    updateTimer_.setInterval(16);
    connect(&updateTimer_,&QTimer::timeout, this, &GameScene::gameloop);
    updateTimer_.start();

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

void GameScene::setManager(GameManager* manager){
    manager = manager;
}

void GameScene::gameloop(){
    if (!manager_)return;

    static qint64 lastTime = QDateTime::currentMSecsSinceEpoch();
    qint64 now = QDateTime::currentMSecsSinceEpoch();
    float dt = (now - lastTime) / 1000.0f;
    lastTime = now;

    if(manager_->currentLevel())
        manager_->currentLevel()->update(dt);
}
