#include "MoneyZ4.h"
#include <iostream>
#include <vector>
#include <stack>
#include <ctime>
#include <cstdlib>
using namespace std;

typedef stack<Money> sm;

sm reverse(sm s)
{
	sm temp;
	while (!s.empty())
	{
		temp.push(s.top());
		s.pop();
	}
	return temp;
}

sm makeS(int n)
{
	sm s;
	for (int i = 0; i < n; i++)
	{
		long num1 = rand() % 1000;
		int num2 = rand() % 100;
		Money t(num1, num2);
		s.push(t);
	}
	return s;
}

void printV(sm& s)
{
	cout << "\n Множество: \n";
	sm temp;
	while (!s.empty())
	{
		cout << s.top();
		temp.push(s.top());
		s.pop();
	}
	s = temp;
	cout << "Size = " << s.size() << "\n\n";
}

void addMax(sm& s)
{
	cout << "\n Добавление max в начало: \n";
	Money max = s.top();
	sm temp;
	temp.push(s.top());
	s.pop();

	while (!s.empty())
	{
		if (max < s.top())
		{
			max = s.top();
		}
		temp.push(s.top());
		s.pop();
	}
	temp.push(max);
	s = temp;
}

void deleteMin(sm& s)
{
	cout << "\n Удаление min: \n";
	Money min = s.top();
	sm temp;
	temp.push(s.top());
	s.pop();

	while (!s.empty())
	{
		if (min > s.top())
			min = s.top();
		temp.push(s.top());
		s.pop();
	}
	while (!temp.empty())
	{
		if (!(temp.top() == min))
			s.push(temp.top());
		temp.pop();
	}
	s = reverse(s);
}

void averageSum(sm & s)
{
	cout << "\n Сумма всех со сред. арифм.: \n";
	int size = s.size();
	Money sum(0, 0);
	sm temp;
	while (!s.empty())
	{
		sum = sum + s.top();
		temp.push(s.top());
		s.pop();
	}
	Money a = sum / size;
	cout << "average = " << a << endl;
	while (!temp.empty())
	{
		s.push(temp.top() + a);
		temp.pop();
	}
	s = reverse(s);
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	sm s;

	int n;
	cout << "Number of elements: ";
	cin >> n;
	if (n <= 0)
		return 0;

	s = makeS(n);	//создание стека
	printV(s);		//вывод

	addMax(s);		//добавить макс в начало
	printV(s);

	deleteMin(s);	//удалить мин
	printV(s);

	averageSum(s);	//+ ко всем среднего арифм.
	printV(s);

	system("pause");
}