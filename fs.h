#pragma once
#include <regex>
#include <string>



bool isOctave(const std::string& str) {

    std::regex numRegex(R"(^[0-7]+$)");
    return regex_match(str, numRegex);
}





