#include "prime.h"
#include <cmath>
/**
*@file prisme.cpp
*@brief prisme impl function
*/
bool prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
