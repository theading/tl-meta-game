#ifndef SCENE__SCENE_H_
#define SCENE__SCENE_H_

#include <QGraphicsScene>

class Scene : public QGraphicsScene
{
    Q_OBJECT
public:
    Scene(
        QObject *parent = nullptr
    );

    virtual ~Scene() = default;
};

#endif