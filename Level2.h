#pragma once

#include "Level.h"


class Level2 : public Level
{
    Q_OBJECT

public:
    explicit Level2(GameScene* scene);
    ~Level2();


    void load() override;
    void update(float dt) override;
};

