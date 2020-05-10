#include <iostream>
#include <Windows.h>
#include "lib.h"
#include "error.h"
using namespace std;

int main() 
{
	setlocale(LC_ALL, "ru");
	try 
	{
		int l;
		cout << "Введите длину множества(она должна быть не больше 3)\n";
		cin >> l;
		List list(l);
		cout << "List:" << list << endl;
		cout << "Заполните множество\n";
		cin >> list;

		int index;
		cout << "Введите индекс элемента: "; cin >> index;
		cout << list[index] << endl;
		
		List a(l), b(l);
		cout << "Заполните множества для пересечения\n";
		cin >> a >> b;
		a * b;
		cout << endl;
		
		List pepega(l);
		cout << "Заполните множество для удаления \n";
		cin >> pepega;
		cout << "Введите индекс \n";
		--pepega;
		cout << pepega;


		
	}

	catch (int) 
	{
		cout << "ERROR" << endl;
	}
}
