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
	int size;		//������
	int current;	//������� ������� 
	struct Node		//����
	{
		Node* next;	//��. �� ���� �������
		Object* data;	//��������� �� ������
	};
	Node* Head;		//������
public:
	List();
	List(int n);
	~List();

	void Add();		//���������� �������� � ������ ������
	void Del();		//�������� � ������
	void Show();

	int operator()();//������ ������
};
