#include "Person.h"


//����������� ��� ����������
Person::Person()
{
	name = "";
	age = 0;
}
//����������
Person::~Person()
{
}
//���������� � �����������
Person::Person(string M, int C)
{
	name = M;
	age = C;
}
//����������� �����������
Person::Person(const Person& p)
{
	name = p.name;
	age = p.age;
}

//���������
void Person::SetAge(int C)
{
	age = C;
}
void Person::SetName(string M)
{
	name = M;
}

//�������� ������������
Person& Person::operator=(const Person& c)
{
	if (&c == this)
		return *this;
	name = c.name;
	age = c.age;
	return *this;
}
//����� ��� ��������� ���������
void Person::Show()
{
	cout << "\nName: " << name;
	cout << "\nAge: " << age;
	cout << endl;
}
//����� ��� ����� �������� ���������
void Person::Input()
{
	cout << "Name:"; cin >> name;
	cout << "Age:"; cin >> age;
}