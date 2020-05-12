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
	Person(void);			//����������� ��� ����������
	Person(string, int);	//����������� � �����������
	Person(const Person&);	//����������� �����������
	virtual ~Person(void);	//����������

	void Show();			//������� ��� ��������� �����
	void Input();			//������� ��� ����� �������� 
	
	string GetName() { return name; } //���������
	int GetAge() { return age; }

	void SetName(string);	//������������
	void SetAge(int);

	Person& operator=(const Person&);

};