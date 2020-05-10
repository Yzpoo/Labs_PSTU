#include <iostream>
#include "fraction.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	fraction fr;
	cout << "¬ведите a: ";
	cin >> fr.first;
	cout << "¬ведите b: ";
	cin >> fr.second;

	double x;
	cout << "¬ведите x: ";
	cin >> x;
	double aa = fr.function(x);
	cout << aa;
}