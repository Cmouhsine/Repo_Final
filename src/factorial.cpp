#include "factorial.h"
/**
*@file factorial.cpp
*brief this the implemenataion of factorial function
/
int factorial(int n) {
    if (n <= 1) return 1;
    else return n * factorial(n - 1);
}
