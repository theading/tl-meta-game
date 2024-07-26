#include <QApplication>

#include "ui/main-window.h"

int main(int argc, char** argv)
{
    QApplication application{ argc, argv };
    MainWindow mainWindow;
    mainWindow.show();
    return application.exec();
}