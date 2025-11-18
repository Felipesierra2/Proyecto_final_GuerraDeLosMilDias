#pragma once
#include "Level.h"


class Level3 : public Level
{
    Q_OBJECT
public:
    explicit Level3(GameScene* scene);
    ~Level3();

    void load() override;
    void update(float dt) override;
};
