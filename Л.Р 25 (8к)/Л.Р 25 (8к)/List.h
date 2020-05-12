#pragma once
#include "Object.h"
#include "Person.h"
#include "Student.h"
//#include "Event.h"
#include <iostream>
using namespace std;

class List
{
protected:
	int size;		//размер
	int current;	//текущая позиция 
	struct Node		//узел
	{
		Node* next;	//ук. на след элемент
		Object* data;	//указатель на объект
	};
	Node* Head;		//начало
public:
	List();
	List(int n);
	~List();

	void Add();		//добавление элемента в начало списка
	void Del();		//удаление с начала
	void Show();

	int operator()();//размер списка
};
