#include <iostream>
#include <string>
#include <Windows.h>
#include "Compuxter.h"

using namespace std;

//������� ��� �������� ������� ��� ����������
Comp make_apartment()
{
	string f;
	int s;
	int b;
	cout << "������� ���������: ";
	cin >> f;
	cout << "������� ����� ��: ";
	cin >> s;
	cout << "������� ����� ��: ";
	cin >> b;
	Comp a(f, s, b);
	return a;

}

//������� ��� �������� ������� ��� ��������� 
void print_apartment(Comp a)
{
	a.show();
}

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ����������� ��� ����������
	Comp a1;
	a1.show();

	// ����������� � �����������
	Comp a2("i15.duo", 16, 256);
	a2.show();
	
	//����������� ����������� 
	Comp a3 = a2;
	a3.set_processor("rz54");
	a3.set_objem_mm(8);
	a3.set_objem_hdd(1024);

	// ����������� ����������� 
	print_apartment(a3);

	//����������� ����������� 
	a1 = make_apartment();
	a1.show();
}

