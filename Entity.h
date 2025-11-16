#pragma once
#include <QObject>
#include <QGraphicsPixmapItem>

class PhysicsModel;


class Entity : public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    explicit Entity(QGraphicsItem* parent = nullptr);
    virtual ~Entity();

    virtual void tick(qreal dt);
    void setPhysicsModel(PhysicsModel *m);
protected:
    PhysicsModel *physics_;
};
