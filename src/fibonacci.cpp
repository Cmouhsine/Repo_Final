#include "fibonacci.h"
/**
*@file fiboanacci 
*@brief impl  of fiboancci funct
*/
int fibonacci(int n) {
    if (n <= 1) return n;
    else return fibonacci(n - 1) + fibonacci(n - 2);
}
