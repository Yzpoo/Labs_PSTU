#include <iostream>
#include <string>
#include <Windows.h>
#include "Compuxter.h";

//конструтор без параметров 
Comp::Comp()
{
	processor = "Bell";
	objem_mm = 32;
	objem_hdd = 512;
	cout << "Конструктор без параметров для объекта" << this << endl;
}

//конструктор с параметрами
Comp::Comp(string f, int s, int b)
{
	processor = f;
	objem_mm = s;
	objem_hdd = b;
	cout << "Конструктор с параметрами для объекта" << this << endl;
}

//конструктор копирования 
Comp::Comp(const Comp& a)
{
	processor = a.processor;
	objem_mm = a.objem_mm;
	objem_hdd = a.objem_hdd;
	cout << "Конструктор копирования для объекта" << this << endl;
}

Comp::~Comp()
{
	cout << "Деструктор для объекта" << this << endl;
}

//селекторы
string Comp::get_processor()
{
	return processor;
}
int Comp::get_objem_mm()
{
	return objem_mm;
}
int Comp::get_objem_hdd()
{
	return objem_hdd;
}

//модификаторы
void Comp::set_processor(string processor)
{
	this->processor = processor;
}
void Comp::set_objem_mm(int objem_mm)
{
	this->objem_mm = objem_mm;
}
void Comp::set_objem_hdd(int objem_hdd)
{
	this->objem_hdd = objem_hdd;
}

//метод для просмотра атрибутов 
void Comp::show()
{
	cout << "Процессор:" << processor << endl;
	cout << "Объем ОП:" << objem_mm << endl;
	cout << "Объем ЖД:" << objem_hdd << endl;
}