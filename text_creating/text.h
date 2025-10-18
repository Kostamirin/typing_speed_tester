// Created by kleymuner on 12.09.2025.

#ifndef TYPING_SPEED_TESTER_TEXT_H
#define TYPING_SPEED_TESTER_TEXT_H

#include <random>
#include <string>

#include "database/database.h"

#include <stdio.h>
#include <mysqlStubs.h>

class text {
public:
    std::string set_base_text();

private:
    vector<bool> chosen_parts;
};



#endif //TYPING_SPEED_TESTER_TEXT_H