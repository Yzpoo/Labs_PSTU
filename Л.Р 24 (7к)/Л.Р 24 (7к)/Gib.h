#include <iostream>
using namespace std;

template <class T>

class mnojestvo
{
private:
	int size;
	T* data;

public:

	mnojestvo(int s);
	mnojestvo(const mnojestvo<T>& a);
	~mnojestvo();
	mnojestvo& operator= (const mnojestvo<T>& a);
	T& operator[] (int index);
	mnojestvo operator* (const mnojestvo& k);
	int operator()();
	friend ostream& operator << <>(ostream& out, const mnojestvo<T>& a);
	friend istream& operator >> <>(istream& in, const mnojestvo<T>& a);
	void operator+(const mnojestvo<T>& p);




};
template <class T>
mnojestvo<T>::mnojestvo(int s)
{
	size = s;
	data = new T[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = 0;
	}
}

template <class T>
mnojestvo<T>::mnojestvo(const mnojestvo& a)
{
	size = a.size;
	data = new T[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = a.data[i];
	}
}
template <class T>
mnojestvo<T>::~mnojestvo()
{
	delete[]data;
	data = 0;
}
template <class T>
mnojestvo<T>& mnojestvo<T>::operator=(const mnojestvo<T>& a)
{
	if (this == &a) return *this;
	{
		size = a.size;
	}
	if (data != 0) delete[]data;
	{
		data = new T[size];
	}
	for (int i = 0; i < size; i++)
	{
		data[i] = a.data[i];
	}
	return *this;
}
template <class T>
T& mnojestvo<T>::operator[](int index)
{
	if (index < size)
	{
		return data[index];
	}
	else cout << "\n Error";
}
template <class T>
mnojestvo<T> mnojestvo<T>::operator*(const mnojestvo<T>& k)
{
	mnojestvo<T> temp(size);
	for (int i = 0; i < size; i++)
	{
		temp.data[i] = data[i] * k.data[i];
	}
	return temp;
}
template <class T>
int mnojestvo<T>::operator() ()
{
	return size;
}
template <class T>
istream& operator >> (istream& in, const mnojestvo<T>& a)
{
	for (int i = 0; i < a.size; i++)
	{
		in >> a.data[i];
	}
	return in;
}
template <class T>
ostream& operator << (ostream& out, const mnojestvo<T>& a)
{
	for (int i = 0; i < a.size; i++)
	{
		out << a.data[i] << " ";
	}
	return out;
}



