#include <stdio.h>
#include <windows.h>
#include <iostream>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c, d, h;
	float S, P;
	cout << "������ �������� a: ";
	cin >> a;
	cout << "������ �������� b: ";
	cin >> b;
	cout << "������ �������� c: ";
	cin >> c;
	cout << "������ �������� d: ";
	cin >> d;
	P = a + b + c + d;
	cout << "P = " << P << " �� " << endl;
	cout << "������ �������� a: ";
	cin >> a;
	cout << "������ �������� b: ";
	cin >> b;
	cout << "������ �������� h: ";
	cin >> h;
	S = 1.0 / 2 * (a + b) * h;
	cout << "S = " << S << " �� " << endl;
	system("pause");
	return 0;
}
