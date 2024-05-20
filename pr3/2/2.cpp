#include <iostream>
#include "Time.h"



int main() {
    setlocale(LC_ALL, "Russian");
    int hours, minutes, seconds;
    std::cout << "Введите часы: ";
    std::cin >> hours;
    std::cout << "Введите минуты: ";
    std::cin >> minutes;
    std::cout << "Введите секунды: ";
    std::cin >> seconds;

    Time t(hours, minutes, seconds);

    std::cout << "Количество полных минут в указанном времени: " << t.calculateTotalMinutes() << std::endl;

    t.decreaseTimeBy10Minutes();
    std::cout << "Время после уменьшения на 10 минут: " << t.getHours() << ":" << t.getMinutes() << ":" << t.getSeconds() << std::endl;

    return 0;
}