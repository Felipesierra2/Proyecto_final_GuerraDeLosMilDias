#pragma once
#include "Entity.h"

class AIController;

class Enemy : public Entity{
    Q_OBJECT
public:
    explicit Enemy(QGraphicsItem *parent = nullptr);
    ~Enemy() override;
    void tick(qreal dt) override;
private:
    AIController* ai_;
};
