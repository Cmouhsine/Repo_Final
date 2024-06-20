#include "palindrome.h"
/**
*@file palindrome.cpp
*@brief this is the impl of palindrome check  func!
*/
bool palindrome(const std::string& str){
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        if (str[i] != str[n - i - 1]) return false;
    }
    return true;
}
