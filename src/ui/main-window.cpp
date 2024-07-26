#include "ui/main-window.h"

#include "scene/scene.h"

#include "ui/scene-viewer.h"

MainWindow::MainWindow(
    QWidget *parent,
    Qt::WindowFlags flags
)
:   QMainWindow{ parent, flags }
{
    /* init Scene */
    Scene *scene = new Scene{ this };

    /* init SceneViewer and set to central widget */
    SceneViewer *sceneViewer = new SceneViewer{ scene, this };
    this->setCentralWidget(sceneViewer);
}