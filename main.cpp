#include <QApplication>
#include <QPushButton>

#include "interface/interface.h"
#include "text_creating/text.h"
//#inlucde "calculation/"


int main(int argc, char *argv[]) {
    text text;

    QApplication a(argc, argv);
    QPushButton button("Hello world!", nullptr);


    std::string user_text = text.set_base_test();


    return QApplication::exec();
}