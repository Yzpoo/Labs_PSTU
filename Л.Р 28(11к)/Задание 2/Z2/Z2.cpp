#include "MoneyZ2.h"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

typedef vector<Money> vm;

vm makeV(int n)
{
	vm v;
	for (int i = 0; i < n; i++)
	{
		long num1 = rand() % 1000;
		int num2 = rand() % 100;
		Money t(num1, num2);
		v.push_back(t);
	}
	return v;
}

void printV(vm& v)
{
	int size = v.size();
	for (int i = 0; i < size; i++)
		cout << v[i];
	cout << endl;
}

void addMax(vm & v)
{
	cout << "\n Добавление max в начало: \n";
	Money max = v[0];

	for (int i = 0; i < v.size(); i++)
		if (max < v[i])
			max = v[i];

	v.insert(v.begin(), max);
}

void deleteMin(vm & v)
{
	cout << "\n Удаление min: \n";
	Money min = v[0];
	int n = 0;

	for (int i = 0; i < v.size(); i++)
		if (min > v[i])
		{
			min = v[i];
			n = i;
		}
	v.erase(v.begin() + n);
}

void averageSum(vm & v)
{
	cout << "\n Сумма всех со сред. арифм.: \n";
	Money sum(0, 0);
	for (int i = 0; i < v.size(); i++)
		sum = sum + v[i];
	Money a = sum / v.size();
	cout << "average = " << a << endl;
	for (int i = 0; i < v.size(); i++)
		v[i] = v[i] + a;
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	vm v;

	int n;
	cout << "Number of elements: ";
	cin >> n;
	if (n <= 0)
		return 0;
	v = makeV(n);
	printV(v);

	addMax(v);
	printV(v);

	deleteMin(v);
	printV(v);

	averageSum(v);
	printV(v);

	system("pause");
}