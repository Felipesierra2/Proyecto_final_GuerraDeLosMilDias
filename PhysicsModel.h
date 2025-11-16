#pragma once
#include <QObject>


class Entity;


class PhysicsModel : public QObject{
    Q_OBJECT
public:
    explicit PhysicsModel(QObject* parent = nullptr) : QObject(parent){
    }
    virtual ~PhysicsModel(){
    }
    virtual void apply(Entity *e, qreal dt) = 0;
};
