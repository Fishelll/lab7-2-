#include <iostream> 
#include <iomanip> 
#include <math.h> 

int main()
{
    float a, b, d = 1, h = 0.1, c = 2; // d(початкове Х), h(крок), c(кінцеве X) 
    std::cout << "Enter value a: ";
    std::cin >> a;
    std::cout << "Enter value b: ";
    std::cin >> b;
    float y, x = d;
    while (x <= c) {
        y = a * b + std::pow(std::sin(x), 2) - x * 1 / 2;
        std::cout << std::setw(10) << "x= " << x << std::setw(10) << "y= " << y << std::endl;
        x += h;
    }
    return 0;
}
