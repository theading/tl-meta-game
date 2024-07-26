#ifndef UI__SCENE_VIEWER_H_
#define UI__SCENE_VIEWER_H_

#include <QGraphicsView>

class Scene;

class SceneViewer : public QGraphicsView
{
    Q_OBJECT
public:
    SceneViewer(
        Scene *scene,
        QWidget *parent = nullptr
    );

    virtual ~SceneViewer() = default;
};

#endif