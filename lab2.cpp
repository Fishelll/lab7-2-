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
	cout << "¬вед≥ть значенн€ a: ";
	cin >> a;
	cout << "¬вед≥ть значенн€ b: ";
	cin >> b;
	cout << "¬вед≥ть значенн€ c: ";
	cin >> c;
	cout << "¬вед≥ть значенн€ d: ";
	cin >> d;
	P = a + b + c + d;
	cout << "P = " << P << " см " << endl;
	cout << "¬вед≥ть значенн€ a: ";
	cin >> a;
	cout << "¬вед≥ть значенн€ b: ";
	cin >> b;
	cout << "¬вед≥ть значенн€ h: ";
	cin >> h;
	S = 1.0 / 2 * (a + b) * h;
	cout << "S = " << S << " см " << endl;
	system("pause");
	return 0;
}
