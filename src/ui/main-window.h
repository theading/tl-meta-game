#ifndef UI__MAIN_WINDOW_H_
#define UI__MAIN_WINDOW_H_

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(
        QWidget *parent = nullptr,
        Qt::WindowFlags flags = Qt::WindowFlags()
    );

    virtual ~MainWindow() = default;
};

#endif