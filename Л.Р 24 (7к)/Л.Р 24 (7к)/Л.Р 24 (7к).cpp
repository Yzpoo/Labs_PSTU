#include <iostream>
#include "Gib.h"
#include "list.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Формируем 2 множества длиной 10,заполненные нулями\n";
	mnojestvo<int> a(10), b(10);
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
	mnojestvo<int> g(10);
	g = a * b;
	cout << g;
	cout << endl;

	cout << "Формируем 2 множества длиной 10,заполненные нулями\n";
	mnojestvo<float> c(10), d(10);
	cout << "Выводим множества\n";
	cout << "a: ";
	cout << a << endl;
	cout << "b: ";
	cout << d << endl << endl;
	cout << "Заполняем множества\n";
	cin >> c;
	cin >> d;
	cout << "\nВыводим множества\n";
	cout << "a: ";
	cout << c << endl;
	cout << "b: ";
	cout << d << endl << endl;
	cout << "Доступ по индексу в множестве b\nВведите индекс: ";
	cin >> in;
	cout << "Элемент с " << in << " индексом: ";
	cout << d[in] << endl << endl;
	cout << "Определение размера множества а\nРазмер списка а: ";
	cout << c() << endl << endl;
	cout << "Пересечение множеств\n";
	mnojestvo<float> v(10);
	v = c * d;
	cout << v;
	cout << endl;

	cout << "Формируем 2 множества длиной 10,заполненные нулями\n";
	mnojestvo<double> f(10), j(10);
	cout << "Выводим множества\n";
	cout << "a: ";
	cout << f << endl;
	cout << "b: ";
	cout << j << endl << endl;
	cout << "Заполняем множества\n";
	cin >> f;
	cin >> j;
	cout << "\nВыводим множества\n";
	cout << "a: ";
	cout << f << endl;
	cout << "b: ";
	cout << j << endl << endl;
	cout << "Доступ по индексу в множестве b\nВведите индекс: ";
	cin >> in;
	cout << "Элемент с " << in << " индексом: ";
	cout << j[in] << endl << endl;
	cout << "Определение размера множества а\nРазмер списка а: ";
	cout << f() << endl << endl;
	cout << "Пересечение множеств\n";
	mnojestvo<double> gl(10);
	gl = f * j;
	cout << gl;
	cout << endl;

	cout << "Формируем 2 множества длиной 10,заполненные нулями\n";
	mnojestvo<Money> o(10), p(10);
	cout << "Выводим множества\n";
	cout << "a: ";
	cout << o << endl;
	cout << "b: ";
	cout << b << endl << endl;
	cout << "Заполняем множества\n";
	cin >> o;
	cin >> p;
	cout << "\nВыводим множества\n";
	cout << "a: ";
	cout << o << endl;
	cout << "b: ";
	cout << p << endl << endl;
	cout << "Доступ по индексу в множестве b\nВведите индекс: ";
	cin >> in;
	cout << "Элемент с " << in << " индексом: ";
	cout << p[in] << endl << endl;
	cout << "Определение размера множества а\nРазмер списка а: ";
	cout << o() << endl << endl;
	cout << "Пересечение множеств\n";
	mnojestvo<Money> gp(10);
	gp = o * p;
	cout << gp;
	cout << endl;

}
