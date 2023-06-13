#pragma once
#include <regex>
#include <string>



bool isOctave(const std::string& str) {

    std::regex numRegex(R"(^[0-7]+$)");
    return regex_match(str, numRegex);
}

bool isNumber(const std::string& str) {

    std::regex numRegex(R"(^\d+$)");
    return regex_match(str, numRegex);
}

bool isHex(const std::string& str) {

    std::regex numRegex(R"(^(\d|[A-F])+$)");
    return regex_match(str, numRegex);
}




