// Created by kleymuner on 12.09.2025.

#include "interface.h"
#include "ui_interface.h"


interface::interface(QWidget *parent) : QWidget(parent), ui(new Ui::interface) {
    ui->setupUi(this);
}

interface::~interface() {
    delete ui;
}

