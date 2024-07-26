#ifndef UI__MAIN_WINDOW_H_
#define UI__MAIN_WINDOW_H_

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    using QMainWindow::QMainWindow;

    virtual ~MainWindow() = default;
};

#endif

