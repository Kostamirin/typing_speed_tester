// Created by kleymuner on 12.09.2025.

#include "interface.h"
#include "ui_interface.h"

#include <QtMath>
#include <QRegularExpression>


static int countWords(const QString &s) {
    // Simple word count: sequences of non-space characters separated by whitespace
    return s.split(QRegularExpression("\\s+"), Qt::SkipEmptyParts).size();
}

interface::interface(QWidget *parent) : QMainWindow(parent), ui(new Ui::interface) {
    ui->setupUi(this);

    // Ensure the target text area is empty by default and read-only
    if (ui->textEdit) {
        ui->textEdit->setReadOnly(true);
        ui->textEdit->clear();
    }

    // If UI has a label named speedLabel, initialize it; otherwise, create one dynamically
    QLabel *speedLabel = this->findChild<QLabel*>("speedLabel");
    if (!speedLabel) {
        speedLabel = new QLabel("Speed: 0.0 WPM", this);
        speedLabel->setObjectName("speedLabel");
        speedLabel->setGeometry(80, 480, 300, 30); // fallback placement if not in .ui
    } else {
        speedLabel->setText("Speed: 0.0 WPM");
    }
}

interface::~interface() {
    delete ui;
}

void interface::setTargetText(const QString &text) {
    if (ui->textEdit) ui->textEdit->setPlainText(text);
}

void interface::on_lineEdit_textChanged(const QString &text) {
    QLabel *speedLabel = this->findChild<QLabel*>("speedLabel");
    if (text.isEmpty()) {
        m_started = false;
        if (speedLabel) speedLabel->setText("Speed: 0.0 WPM");
        return;
    }

    if (!m_started) {
        m_timer.restart();
        m_started = true;
    }

    qint64 ms = m_timer.elapsed();
    if (ms <= 0) ms = 1; // avoid division by zero
    double minutes = ms / 60000.0;
    if (minutes <= 0) minutes = 1.0/60000.0;

    int words = countWords(text);
    double wpm = words / minutes;

    if (speedLabel) {
        speedLabel->setText(QString("Speed: %1 WPM").arg(QString::number(wpm, 'f', 1)));
    }
}

