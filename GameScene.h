#pragma once
#include "GameManager.h"
#include <QGraphicsScene>
#include <QTimer>

class GameScene : public QGraphicsScene{
    Q_OBJECT

public:
    explicit GameScene(QObject *parent = nullptr);
    ~GameScene() override;

    void setManager(GameManager* manager);

public slots:
    void gameloop();
private:
    QTimer updateTimer_;
    GameManager* manager_;
};
