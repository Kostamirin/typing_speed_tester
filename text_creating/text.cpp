// Created by kleymuner on 12.09.2025
#include "text.h"

std::mt19937 gen(std::random_device{}());
std::uniform_int_distribution<> dist(1, 10);
int random_number = dist(gen); // Число от 1 до 10


std::string text::set_base_text()
{
    // Placeholder: actual text generation will be implemented later
    std::string random_string = "Simple text and a random number - " + std::to_string(random_number);
    return std::string(random_string);
}
