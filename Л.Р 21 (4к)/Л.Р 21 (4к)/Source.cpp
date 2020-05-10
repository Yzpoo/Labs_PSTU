#include "Triad.h"
#include <iostream>
#include"Data.h"
int k;
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	cout << "\nРаботаем с классом Triad\n";
	cout << "Введите поля объекта класса Triad\n";
	Triad a;
	cin >> a;
	cout << "\nОбъект 'a': ";
	cout << a;
	Triad b(4, 3, 2);
	cout << "\nОбъект 'b': ";
	cout << b;
	cout << "\nПрисвоим объекту 'a' поля объекта 'b'";
	a = b;
	cout << "\nОбъект 'a': ";
	cout << a;
	b++;
	cout << "Применим операцию ++ к обекту 'b'";
	cout << "\nОбъект 'b': ";
	cout << b;

	cout << "\nРаботаем с классом Data\n";
	Data d;
	cout << "\nВведите кол-во минут: ";
	cin >> k;
	cin >> d;
	cout << "\nОбъект 'd': ";
	cout << d;
	d.foo_min(k);
	cout << "\nОбъект 'd' после прибавления к нему " << k << " минут: ";
	cout << d;
}