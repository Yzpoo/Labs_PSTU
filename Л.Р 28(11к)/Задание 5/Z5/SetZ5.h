#pragma once
#include <stack>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

template<class T>
class Set
{
	stack<T> S;
	int size;
public:
	Set();
	Set(int);
	Set(const Set<T>&);
	~Set() {};

	void reverse();
	void doMnojestvo();

	void printV();		//печать
	void addMax();		//добавить макс элемент в начало
	void deleteMin();	//удалить мин элемент
	void averageSum();	//+ ко всем элементам среднее арифм.
};

template<class T>
void Set<T>::doMnojestvo()
{
	T* temp = new T[size];

	temp[0] = S.top();
	S.pop();

	int c = 1;

	while (!S.empty())
	{
		bool yes = false;
		for (int i = 0; i < c; i++)
		{
			if (S.top() == temp[i])
			{
				yes = true;
			}
		}
		if (!yes)
		{
			temp[c] = S.top();
			c++;
		}
		S.pop();
	}
	for (int i = 0; i < c; i++)
	{
		S.push(temp[i]);
		size = c;
	}
} //делает множество

template <class T>
Set<T>::Set()
{
	size = 0;
}

template <class T>
Set<T>::Set(int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = (T(rand() % 1000)) / 10;
		/*temp = (T(rand() % 10000)) / 100;*/
		S.push(temp);
	}
	size = n;
	doMnojestvo();
}

template <class T>
Set<T>::Set(const Set<T>& s)
{
	size = s.size;
	S = s;
}

template<class T>
void Set<T>::reverse()
{
	stack<T> temp;
	while (!S.empty())
	{
		temp.push(S.top());
		S.pop();
	}
	S = temp;
}

template <class T>
void Set<T>::printV()
{
	stack<T> temp = S;
	while (!S.empty())
	{
		cout << S.top() << " ";
		S.pop();
	}
	cout << endl;
	cout << "Size = " << size << endl << endl;
	S = temp;
}

template<class T>
void Set<T>::addMax()
{
	cout << "\n Добавление max в начало: \n";
	reverse();
	T max = S.top();
	stack<T> temp;
	temp.push(S.top());
	S.pop();

	while (!S.empty())
	{
		if (max < S.top())
		{
			max = S.top();
		}
		temp.push(S.top());
		S.pop();
	}
	temp.push(max);
	S = temp;
	size++;
}

template<class T>
void Set<T>::deleteMin()
{
	cout << "\n Удаление min: \n";
	T min = S.top();
	stack<T> temp;
	temp.push(S.top());
	S.pop();

	while (!S.empty())
	{
		if (min > S.top())
			min = S.top();
		temp.push(S.top());
		S.pop();
	}
	while (!temp.empty())
	{
		if (!(temp.top() == min))
			S.push(temp.top());
		temp.pop();
	}
	size--;
}

template<class T>
void Set<T>::averageSum()
{
	cout << "\n Сумма всех со сред. арифм.: \n";
	int size = S.size();
	T sum = 0;
	stack<T> temp;
	while (!S.empty())
	{
		sum = sum + S.top();
		temp.push(S.top());
		S.pop();
	}
	T a = sum / size;
	cout << "average = " << a << endl;
	while (!temp.empty())
	{
		S.push(temp.top() + a);
		temp.pop();
	}
}
