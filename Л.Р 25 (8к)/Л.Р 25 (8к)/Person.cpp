#include "Person.h"


//конструктор без параметров
Person::Person()
{
	name = "";
	age = 0;
}
//деструктор
Person::~Person()
{
}
//констрктор с параметрами
Person::Person(string M, int C)
{
	name = M;
	age = C;
}
//конструктор копирования
Person::Person(const Person& p)
{
	name = p.name;
	age = p.age;
}

//селекторы
void Person::SetAge(int C)
{
	age = C;
}
void Person::SetName(string M)
{
	name = M;
}

//оператор присваивания
Person& Person::operator=(const Person& c)
{
	if (&c == this)
		return *this;
	name = c.name;
	age = c.age;
	return *this;
}
//метод для просмотра атрибутов
void Person::Show()
{
	cout << "\nName: " << name;
	cout << "\nAge: " << age;
	cout << endl;
}
//метод для ввода значений атрибутов
void Person::Input()
{
	cout << "Name:"; cin >> name;
	cout << "Age:"; cin >> age;
}