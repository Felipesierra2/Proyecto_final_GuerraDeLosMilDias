#pragma once
#include <QGraphicsScene>
#include <QTimer>

class GameScene : public QGraphicsScene{
    Q_OBJECT

public:
    explicit GameScene(QObject *parent = nullptr);
    ~GameScene() override;
public slots:
    void gameloop();
private:
    QTimer updateTimer_;
};
