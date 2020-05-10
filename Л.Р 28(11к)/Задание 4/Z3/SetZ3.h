#pragma once
#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

template<class T>
class Set
{
	vector <T> V;
	int size;
public:
	Set();
	Set(int);
	~Set() {};

	void doMnojestvo();

	void printV();		//печать
	void addMax();		//добавить макс элемент в начало
	void deleteMin();	//удалить мин элемент
	void averageSum();	//+ ко всем элементам среднее арифм.
};

template<class T>
void Set<T>::doMnojestvo()
{
	vector <T> temp;
	int c = 0;
	T a = V[0];
	temp.push_back(a);
	c++;

	for (int k = 1; k < size; k++)
	{
		bool yes = false;
		for (int i = 0; i < c; i++)
		{
			if (V[k] == temp[i])
			{
				yes = true;
			}
		}
		if (!yes)
		{
			temp.push_back(V[k]);
			c++;
		}
	}
	V = temp;
	size = temp.size();
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
		/*temp = (T(rand() % 10000)) / 100;*/
		temp = (T(rand() % 1000)) / 100;
		V.push_back(temp);
	}
	size = n;
	doMnojestvo();
}

template <class T>
void Set<T>::printV()
{
	cout << "\n Множество (нет повторов): \n";
	for (int i = 0; i < size; i++)
		cout << V[i] << " ";
	cout << endl;
	cout << "Size = " << size << "\n\n";
}

template<class T>
void Set<T>::addMax()
{
	cout << "\n Добавление max в начало: \n";
	T max = V[0];

	for (int i = 0; i < size; i++)
		if (max < V[i])
			max = V[i];

	V.insert(V.begin(), max);
	size++;
}

template<class T>
void Set<T>::deleteMin()
{
	cout << "\n Удаление min: \n";
	T min = V[0];
	int n = 0;

	for (int i = 0; i < size; i++)
		if (min > V[i])
		{
			min = V[i];
			n = i;
		}
	V.erase(V.begin() + n);
	size--;
}

template<class T>
void Set<T>::averageSum()
{
	cout << "\n Сумма всех со сред. арифм.: \n";
	T sum = 0;
	for (int i = 0; i < size; i++)
		sum = sum + V[i];
	T a = sum / size;
	cout << "average = " << a << endl;
	for (int i = 0; i < size; i++)
		V[i] = V[i] + a;
}
