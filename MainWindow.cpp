#include "MainWindow.h"
#include "GameScene.h"
#include <QGraphicsView>
#include <QVBoxLayout>


MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent){
    view_ = new QGraphicsView(this);
    scene_ = new GameScene(this);
    view_->setScene(scene_);
    setCentralWidget(view_);
    setWindowTitle("Guerra de los mil días - Proyecto");
    resize(1024,786);
}

MainWindow::~MainWindow(){}
