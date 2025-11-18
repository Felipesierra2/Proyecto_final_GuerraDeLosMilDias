#pragma once

#include <QObject>

class GameScene;
class Level;

class GameManager : public QObject{
    Q_OBJECT

public:
    explicit GameManager(GameScene* scene, QObject* parent = nullptr);
    ~GameManager();

    void loadLevel(int levelNumber);
    Level* currentLevel() const {return level; }

private:
    GameScene* scene;
    Level* level;
};
