#include <iostream>
#include "fraction.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	fraction fr;
	cout << "������� a: ";
	cin >> fr.first;
	cout << "������� b: ";
	cin >> fr.second;

	double x;
	cout << "������� x: ";
	cin >> x;
	double aa = fr.function(x);
	cout << aa;
}