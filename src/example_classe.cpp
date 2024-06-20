/**
 * @file example_class.cpp
 * @brief Implementation of example_Class.
 */

#include "myclass.h"

MyClass::MyClass(int value) : value_(value) {}

int MyClass::getValue() const {
    return value_;
}

void MyClass::setValue(int value) {
    value_ = value;
}
