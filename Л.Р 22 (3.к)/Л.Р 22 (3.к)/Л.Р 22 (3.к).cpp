#include <iostream>
#include "lib.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	long rub;
	int kop;
	cout << "a: ";
	cout << "Рубли: "; cin >> rub;
	cout << "Копейки: "; cin >> kop;

	Money a(rub, kop);
	cout << "b: ";
	cout << "Рубли: "; cin >> rub;
	cout << "Копейки: "; cin >> kop;

	Money b(rub, kop);

	cout << "a: ";
	cout << a;
	cout << "b: ";
	cout << b;
	
	a = a / b;
	cout << "Деление:";
	cout << "a: ";
	cout << a;

	double s;
	cout << "Введите дробь на которую надо умножить: ";
	cin >> s;

	b = b * s;
	cout << "b: ";
	cout << b;

}
