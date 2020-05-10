#include <iostream>
#include <string>
#include <Windows.h>
#include "Compuxter.h"

using namespace std;

//функция для возврата объекта как результата
Comp make_apartment()
{
	string f;
	int s;
	int b;
	cout << "Введите процессор: ";
	cin >> f;
	cout << "Введите объем ОП: ";
	cin >> s;
	cout << "Введите объем ЖД: ";
	cin >> b;
	Comp a(f, s, b);
	return a;

}

//функция для передачи объекта как параметра 
void print_apartment(Comp a)
{
	a.show();
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// конструктор без параметров
	Comp a1;
	a1.show();

	// конструктор с параметрами
	Comp a2("i15.duo", 16, 256);
	a2.show();
	
	//конструктор копирования 
	Comp a3 = a2;
	a3.set_processor("rz54");
	a3.set_objem_mm(8);
	a3.set_objem_hdd(1024);

	// конструктор копирования 
	print_apartment(a3);

	//конструктор копирования 
	a1 = make_apartment();
	a1.show();
}

