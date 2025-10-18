#include <QApplication>
#include "interface/interface.h"
#include "text_creating/text.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    text text;
    interface w;

    // By default, the target text field is empty; later it can be set via setTargetText()
    w.show();
    w.interface::setTargetText(QString::fromStdString(text.set_base_text()));


    return app.exec();
}