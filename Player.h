#pragma once
#include "Entity.h"


class Player : public Entity {
    Q_OBJECT
public:
    explicit Player(QGraphicsItem* parent = nullptr);
    void tick(qreal dt) override;
};
