#include <iostream>
#include "RealNumbers.h"

int main() {
    setlocale(LC_ALL, "Russian");
    double left, right;
    std::cout << "Введите левую границу диапазона: ";
    std::cin >> left;
    std::cout << "Введите правую границу диапазона: ";
    std::cin >> right;

    RealNumbers numbers(left, right);

    std::cout << "Квадрат длины диапазона: " << numbers.calculateRangeSquare() << std::endl;

    return 0;
}