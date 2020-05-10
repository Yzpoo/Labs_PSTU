#include "Triad.h"
#include <iostream>

using namespace std;

Triad::Triad(void)
{
	first = 0;
	second = 0;
	third = 0;
}

Triad::~Triad(void)
{
}

Triad::Triad(int f, int s, int t)
{
	first = f;
	second = s;
	third = t;
}

Triad::Triad(const Triad& t)
{
	first = t.first;
	second = t.second;
	third = t.third;
}

void Triad::Set_first(int f)
{
	first = f;
}

void Triad::Set_second(int s)
{
	second = s;
}

void Triad::Set_third(int t)
{
	third = t;
}

Triad& Triad::operator=(const Triad& t)
{
	if (&t == this)return *this;
	first = t.first;
	second = t.second;
	third = t.third;
	return *this;
}

istream& operator>>(istream & in, Triad & t)
{
	cout << "\nfirst == "; in >> t.first;
	cout << "\nsecond == "; in >> t.second;
	cout << "\nthird == "; in >> t.third;
	return in;
}

ostream& operator<<(ostream & out, const Triad & t)
{
	out << "\nfirst: " << t.first;
	out << "\nsecond: " << t.second;
	out << "\nthird: " << t.third;
	out << "\n";
	return out;
}

Triad& Triad::operator+(const Triad & t)
{
	Triad p;
	p.first = first + t.first;
	p.second = second + t.second;
	p.third = third + t.third;
	return p;
}

Triad& Triad::operator++()
{
	first++;
	second++;
	third++;
	return *this;

}

Triad Triad::operator++(int)
{
	first++;
	second++;
	third++;
	return *this;
}