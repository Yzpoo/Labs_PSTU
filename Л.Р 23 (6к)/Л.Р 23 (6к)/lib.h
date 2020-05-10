#include <iostream>
using namespace std;

class iterator1
{
	friend class mnojestvo;
public:
	int* elem;
	iterator1() { elem = 0; };
	iterator1(const iterator1& p) { elem = p.elem; };

};

class mnojestvo
{
private:
	int size;
	int* data;
	iterator1 beg;
	iterator1 end;
	iterator1 uk_elem;
public:
	
	mnojestvo(int s, int k = 0);

	mnojestvo(const mnojestvo& a);

	~mnojestvo();

	mnojestvo& operator= (const mnojestvo& a);

	int& operator[] (int index);

	mnojestvo operator* (const mnojestvo&k);

	int operator()();
	
	friend ostream& operator << (ostream& out, const mnojestvo& a);

	friend istream& operator >> (istream& in, const mnojestvo& a);
	
	iterator1 first() { return beg; };
	iterator1 last() { return end; };
	iterator1 operator--()
	{
		end.elem --;
		cout << this->end.elem;
		return uk_elem;
	}


	
};

mnojestvo::mnojestvo(int s, int k)
{
	size = s;
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = k;
	}
}
mnojestvo::mnojestvo(const mnojestvo& a)
{
	size = a.size;
	data = new int[size];
	for (int i = 0; i < size; i++)
	{
		data[i] = a.data[i];
	}
}
mnojestvo::~mnojestvo()
{
	delete[]data;
	data = 0;
}
mnojestvo& mnojestvo::operator=(const mnojestvo& a)
{
	if (this == &a) return *this;
	{
		size = a.size;
	}
	if (data != 0) delete[]data;
	{
		data = new int[size];
	}
	for (int i = 0; i < size; i++)
	{
		data[i] = a.data[i];
	}
	return *this;
}
int& mnojestvo::operator[](int index)
{
	if (index < size)
	{
		return data[index];
	}
	else cout << "\n Error";
}
mnojestvo mnojestvo::operator*(const mnojestvo&k)
{
	mnojestvo temp(size);
	for (int i = 0; i < size; i++)
	{
		temp.data[i] = data[i] * k.data[i];
	}
	return temp;
}

int mnojestvo::operator() ()
{
	return size;
}

istream& operator >> (istream& in, const mnojestvo& a)
{
	for (int i = 0; i < a.size; i++)
	{
		in >> a.data[i];
	}
	return in;
}
ostream& operator << (ostream& out, const mnojestvo& a)
{
	for (int i = 0; i < a.size; i++)
	{
		out << a.data[i] << " ";
	}
	return out;
}



