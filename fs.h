#pragma once
#include <regex>
#include <string>



bool isOctave(const std::string& str) {

    std::regex numRegex(R"(^[0-7]+$)");
    return regex_match(str, numRegex);
}

bool isNumber(const string& str) {

    regex numRegex(R"(^\d+$)");
    return regex_match(str, numRegex);
}





