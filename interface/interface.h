// Created by kleymuner on 12.09.2025.

#ifndef TYPING_SPEED_TESTER_INTERFACE_H
#define TYPING_SPEED_TESTER_INTERFACE_H

#include <QWidget>
#include <QLabel>

QT_BEGIN_NAMESPACE

namespace Ui {
    class interface;
}

QT_END_NAMESPACE

class interface : public QWidget {
    Q_OBJECT

public:
    explicit interface(QWidget *parent = nullptr);

    ~interface() override;

private:
    Ui::interface *ui;
};


#endif //TYPING_SPEED_TESTER_INTERFACE_H