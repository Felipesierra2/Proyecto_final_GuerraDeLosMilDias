#pragma once
#include <QObject>


class Enemy;


class AIController : public QObject {
    Q_OBJECT
public:
    explicit AIController(Enemy* owner, QObject* parent = nullptr);
    void update(qreal dt);
private:
    Enemy *owner_;
};
