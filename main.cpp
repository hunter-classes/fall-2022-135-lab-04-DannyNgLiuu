#include <iostream>
#include "box.h"

int main() { 
    std::string result;
    result = box(3,5);
    std::cout << "box(3,5):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = checkerboard(11,6);
    std::cout << "checkerboard(11,6):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = lower(6);
    std::cout << "lower(6):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = upper(5);
    std::cout << "upper(5):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = trapezoid(12,5);
    std::cout << "trapezoid(12,5):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = trapezoid(12,6);
    std::cout << "trapezoid(12,6):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = trapezoid(12,7);
    std::cout << "trapezoid(12,7):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = checkerboard3x3(16,11);
    std::cout << "checkerboard3x3(16,11):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
}