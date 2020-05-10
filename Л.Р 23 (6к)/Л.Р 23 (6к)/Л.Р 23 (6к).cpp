#include <iostream>
#include "lib.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Формируем 2 множества длиной 10,заполненные нулями\n";
	mnojestvo a(10), b(10);
	cout << "Выводим множества\n";
	cout << "a: ";
	cout << a << endl;
	cout << "b: ";
	cout << b << endl << endl;
	cout << "Заполняем множества\n";
	cin >> a;
	cin >> b;
	cout << "\nВыводим множества\n";
	cout << "a: ";
	cout << a << endl;
	cout << "b: ";
	cout << b << endl << endl;
	cout << "Доступ по индексу в множестве b\nВведите индекс: ";
	int in;
	cin >> in;
	cout << "Элемент с " << in << " индексом: ";
	cout << b[in] << endl << endl;
	cout << "Определение размера множества а\nРазмер списка а: ";
	cout << a() << endl << endl;
	cout << "Пересечение множеств\n";
	mnojestvo g(10);
	g = a * b;
	cout << g;
	cout << endl;

	cout << "Переход к предыдущему эл \n";
	--g;
}