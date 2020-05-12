#pragma once
#include "Object.h"
//#include "Event.h"
#include <string>
#include <iostream>
using namespace std;

class Person : public Object
{
protected:
	string name;
	int age;
public:
	Person(void);			//конструктор без параметров
	Person(string, int);	//конструктор с параметрами
	Person(const Person&);	//конструктор копирования
	virtual ~Person(void);	//деструктор

	void Show();			//функция для просмотра полей
	void Input();			//функция для ввода значений 
	
	string GetName() { return name; } //селекторы
	int GetAge() { return age; }

	void SetName(string);	//модификаторы
	void SetAge(int);

	Person& operator=(const Person&);

};