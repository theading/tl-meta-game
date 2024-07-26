#include "ui/scene-viewer.h"

#include "scene/scene.h"

SceneViewer::SceneViewer(
    Scene *scene,
    QWidget *parent
)
:   QGraphicsView{ scene, parent }
{}