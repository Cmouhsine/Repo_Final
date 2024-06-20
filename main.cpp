/**
 * @file main.cpp
 * @brief Main function demonstrating mathemtic functions .
 */

#include "fibonacci.h"
#include "factorial.h"
#include "palindrome.h"
#include "prime.h"
#include "example_classe.h"
#include <iostream>

int main() {
    std::cout << "factorial: " << factorial(5) << std::endl;
    std::cout << "fiboancci: " << fibonacci(5) << std::endl;
    std::cout << "checking if num  is prime: " << prime(7) << std::endl;
	//std::cout << "checking if is palindrome: " << palindrome("Mouhsine") << std::endl;
    MyClass obj(10);
    std::cout << "Value: " << obj.getValue() << std::endl;
    obj.setValue(20);
    std::cout << "New Value: " << obj.getValue() << std::endl;

    return 0;
}
