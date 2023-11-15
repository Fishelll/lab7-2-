#include <iostream> 
#include <iomanip> 
#include <math.h> 
#include <windows.h> 
using namespace std; 
int main() 
{ 
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251); 
    float a,b, d = 1, h = 0.1, c = 2; // d(початкове Х), h(крок), c(кінцеве X) 
    cout << "Введіть значення a: "; 
    cin >> a; 
    cout << "Введіть значення b: "; 
    cin >> b; 
    float y, x = d; 
    while (x <= c) { 
        y = a * b + pow(sin(x), 2) - x * 1 / 2; 
        cout << setw(10) << "x= " << x << setw(10) << "y= " << y << endl; 
        x += h; 
    } 
    return 0; 
}
