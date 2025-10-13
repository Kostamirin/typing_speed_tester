// Created by kleymuner on 12.09.2025.

#ifndef TYPING_SPEED_TESTER_INTERFACE_H
#define TYPING_SPEED_TESTER_INTERFACE_H

#include <QWidget>
#include <QMainWindow>
#include <QLabel>
#include <QElapsedTimer>

#include "../text_creating/text.h"
text text_generation;

//const QString typing_text = QString::fromStdString(text_generation.set_base_test());

QT_BEGIN_NAMESPACE

namespace Ui {
    class interface;
}

QT_END_NAMESPACE

class interface : public QMainWindow {
    Q_OBJECT

public:
    explicit interface(QWidget *parent = nullptr);
    ~interface();

    // Set target text (will be used in future to populate the text to type)
    void setTargetText(const QString &text);

private slots:
    void on_lineEdit_textChanged(const QString &text);

private:
    Ui::interface *ui;
    QElapsedTimer m_timer;
    bool m_started = false;
};

#endif //TYPING_SPEED_TESTER_INTERFACE_H
