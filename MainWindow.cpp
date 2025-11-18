#include "MainWindow.h"
#include "GameManager.h"
#include "GameScene.h"
#include <QGraphicsView>
#include <QVBoxLayout>


MainWindow::MainWindow(QWidget* parent)
    :QMainWindow(parent){

    view_ = new QGraphicsView(this);
    scene_ = new GameScene(this);
    manager = new GameManager(scene_,this);

    scene_->setManager(manager);
    manager->loadLevel(1);

    view_->setScene(scene_);
    setCentralWidget(view_);

    setWindowTitle("Guerra de los mil días - Proyecto");
    resize(1024,786);
}

MainWindow::~MainWindow(){}
