#include <QApplication>
#include "interface/interface.h"
#include "text_creating/text.h"

int main(int argc, char *argv[]) {
    QApplication application(argc, argv);
    text text;
    interface interface;

    // By default, the target text field is empty; later it can be set via setTargetText()
    interface.show();
    interface.interface::setTargetText(QString::fromStdString(text.set_base_text()));


    return application.exec();
}