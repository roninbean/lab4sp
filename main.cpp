#include <iostream>
#include "calculator.h"

int main() {
    int result_add = Calculator::add(6, 9);
    int result_subtract = Calculator::subtract(7, 3);

    std::cout << "Result of addition: " << result_add << std::endl;
    std::cout << "Result of subtraction: " << result_subtract << std::endl;

    return 0;
}
