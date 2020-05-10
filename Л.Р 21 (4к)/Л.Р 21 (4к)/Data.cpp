#include "Data.h"

Data::Data(void) :Triad()
{
}

Data::~Data(void)
{
}

Data::Data(int f, int s, int t) :Triad(f, s, t)
{
}

Data::Data(const Data& d)
{
	first = d.first;
	second = d.second;
	third = d.third;

}

Data& Data::operator=(const Data& d)
{
	if (&d == this)return *this;
	first = d.first;
	second = d.second;
	third = d.third;
	return *this;

}

istream& operator>>(istream & in, Data & d)
{
	int k;
	cout << "\nhourse: "; in >> d.first;
	d.first = d.first % 24;
	cout << "\nminutes: "; in >> d.second;
	if (d.second / 60 >= 1)
	{
		d.first = d.first + (d.second / 60);
		d.second = d.second % 60;
	}
	cout << "\nseconds: "; in >> d.third;
	if (d.third / 3600 >= 1)
	{
		d.first = d.first + (d.third / 3600);
		d.second = d.second % 3600;
	}
	if (d.third / 60 >= 1)
	{
		d.second = d.second + (d.third / 60);
		d.third = d.third % 60;
	}
	return in;
}

ostream& operator<<(ostream & out, const Data & d)
{
	out << "\nhourse: " << d.first;
	out << "\nminutes: " << d.second;
	out << "\nseconds: " << d.third;
	return out;
}

Data& Data::operator++()
{
	first++;
	second++;
	third++;
	return *this;
}

Data Data::operator++(int)
{
	first++;
	second++;
	third++;
	Data t(first, second, third);
	return t;
}
Data& Data::foo_sec(int n)
{
	int temp = first * 3600 + second * 60 + third;
	temp = temp + n;
	first = temp % 3600;
	temp = temp - (first * 3600);
	second = temp % 60;
	temp = temp - (second * 60);
	third = temp;
	return *this;
}

Data& Data::foo_min(int n)
{
	int temp = first * 3600 + second * 60 + third;
	temp = temp + n * 60;
	first = temp / 3600;
	temp = temp - (first * 3600);
	second = temp / 60;
	temp = temp - (second * 60);
	third = temp;
	return *this;
}
