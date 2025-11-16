#pragma once
#include <QMainWindow>

class GameScene;
class QGraphicsView;

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;
private:
    QGraphicsView *view_;
    GameScene *scene_;
};

