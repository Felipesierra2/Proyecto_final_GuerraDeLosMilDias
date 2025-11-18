#pragma once
#include "Level.h"


class Level1 : public Level{
    Q_OBJECT
public:
    explicit Level1(GameScene* scene);
    ~Level1();

    void load() override;
    void update(float dt) override;
};

