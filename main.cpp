#include <QApplication>
#include "interface/interface.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    interface w;
    // By default, the target text field is empty; later it can be set via setTargetText()
    w.show();

    return app.exec();
}