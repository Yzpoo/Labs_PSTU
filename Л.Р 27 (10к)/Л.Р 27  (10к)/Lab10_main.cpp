#include "Money.h"
#include <iostream>
#include <fstream>
#include "file_work.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	/*Money a;
	cin >> a;
	cout << a;
	a++;
	Money b;
	cin >> b;
	cout << b;

	if (a > b)
		cout << "\n������ � ������ ������� b";
	else if (a < b)
		cout << "\n������ a ������ ������� b";
	else
		cout << "\n������ a ����� ������� b";*/
	Money q;
	int k, c;
	char file_name[30];
	do
	{
		cout << "\n1. Make file";
		cout << "\n2. Print file";
		cout << "\n3. Delete record from file";
		cout << "\n4. ��������� ������ � 2 ����\n";
		cout << "5. �������� ����� k ������� ����� ���������� ������";
		cout << "\n0. Exit\n";
		cin >> c;
		switch (c)
		{
		case 1:
		{
			cout << "File name -> ";
			cin >> file_name;
			k = make_file(file_name);
			if (k < 0)
				cout << "Can't make file";
		}break;
		case 2:
		{
			cout << "File name -> ";
			cin >> file_name;
			k = print_file(file_name);
			if (k == 0)cout << "Empty file\n";
			if (k < 0)cout << "Can't read file\n";
		}break;
		case 3:
		{
			cout << "File name -> ";
			cin >> file_name;
			Money c;
			cout << "\nObject to compare ->";
			cin >> c;
			k = del_file(file_name, c);
			if (k < 0)cout << "Can't read file\n";
		}break;
		case 4:
		{
			cout << "File name -> ";
			cin >> file_name;
			Money c;
			cout << "\n�������(�) � ������ ���������� ���� ��������� � 2 ���� ->";
			cin >> c;
			k = reduce_file(file_name, c);

		}break;
		case 5:
		{
			int www;
			int n;
			cout << "File name -> ";
			cin >> file_name;
			cout << "\n����� ����� ������ �������� n ������� -> ";
			cin >> www;
			cout << "\nn-> ";
			cin >> n;
			k = add_file(file_name, www, n);
			if (k < 0) cout << "Can't read file";
			if (k == 0) k = add_end(file_name);
		}break;
		default:
			break;

		}

	} while (c!=0);


}