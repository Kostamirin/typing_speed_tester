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
    text();
    ~text();
    static std::string set_base_text();

    vector<bool> choose_parts(database::words, vector<bool> chosen_parts);
    vector<string> generate_text(vector<bool> chosen_parts);

private:
    vector<bool> chosen_parts;
};



#endif //TYPING_SPEED_TESTER_TEXT_H