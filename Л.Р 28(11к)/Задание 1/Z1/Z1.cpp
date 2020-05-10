#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

typedef vector<double> vm;

vm makeV(int n)
{
	vm v;
	for (int i = 0; i < n; i++)
	{
		double num1 = (double(rand() % 100)) / 100;
		int num2 = rand() % 100;
		double res = num1 + num2;
		v.push_back(res);
	}
	return v;
}

void printV(vm& v)
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}

void addMax(vm & v)
{
	cout << "\n Добавление max в начало: \n";
	double max = v[0];

	for (int i = 0; i < v.size(); i++)
		if (max < v[i])
			max = v[i];

	v.insert(v.begin(), max);
}

void deleteMin(vm & v)
{
	cout << "\n Удаление min: \n";
	double min = v[0];
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
	double sum = 0;
	for (int i = 0; i < v.size(); i++)
		sum += v[i];
	double a = sum / v.size();
	cout << "average = " << a << endl;
	for (int i = 0; i < v.size(); i++)
		v[i] += a;
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
	v = makeV(n);	//создание вектора
	printV(v);		//вывод

	addMax(v);		//добавить максимум в начало вектора
	printV(v);

	deleteMin(v);	//удалить минимум из вектора
	printV(v);

	averageSum(v);	//добавить среднее арифметическое 
	printV(v);		//ко всем элементам вектора

	system("pause");
}