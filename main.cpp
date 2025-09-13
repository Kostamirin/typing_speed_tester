#include <QApplication>
#include <QPushButton>

#include "interface/interface.h"
#include "text_creating/text.h"
//#inlucde "calculation/"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    interface();
    
    QPushButton button("Hello world!", nullptr);

    return QApplication::exec();
}