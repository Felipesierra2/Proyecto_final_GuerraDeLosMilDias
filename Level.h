#pragma once
#include <QObject>
#include <QList>

class GameScene;
class Entity;

class Level : public QObject{
    Q_OBJECT

public:
    explicit Level(GameScene* scene, QObject* parent = nullptr);
    virtual ~Level();

    virtual void load() = 0;
    virtual void update(float dt) = 0;

protected:
    GameScene* scene;
    QList<Entity*> entities;
};
