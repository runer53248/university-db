#pragma once
#include <array>
#include <string>

enum class Gender : char {
    Male,
    Female,
    Undefined
};

Gender textToGender(const std::string& text);
std::string translateGender(Gender gender);
