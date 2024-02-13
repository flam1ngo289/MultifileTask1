#include <iostream>
#include "math.hpp"

int main(int argc, const char * argv[]) {
    int a, b, oper;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    
    std::cout << "Введите второе число: ";
    std::cin >> b;
    
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> oper;
    
    switch (oper) {
        case 1:
            std::cout << a << " плюс " << b << " = " << sum(a, b) << std::endl;
            break;
        case 2:
            std::cout << a << " минус " << b << " = " << sub(a, b) << std::endl;
            break;
        case 3:
            std::cout << a << " умножить " << b << " = " << multyply(a, b) << std::endl;
            break;
        case 4:
            std::cout << a << " разделить на " << b << " = " << division(a, b) << std::endl;
            break;
        case 5:
            std::cout << a << " в степени " << b << " = " << pow(a, b) << std::endl;
            break;
    }
    
    return 0;
}
