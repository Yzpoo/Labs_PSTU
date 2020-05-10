#include <iostream>
#include "Money.h"

using namespace std;

Money::Money()
{
	rub = 0;
	kop = 0;
}

Money::Money(long int r, int k)
{
	rub = r;
	kop = k;
}

Money::Money(const Money& m)
{
	rub = m.rub;
	kop = m.kop;
}

Money::~Money()
{
}

ostream& operator<<(ostream& out, const Money& m)
{
	long int k = 0;
	k = m.rub * 100 + m.kop;
	out << "Money: " << k/100 << ":" << k%100;
	cout << "\n\n";
	return out;
}

istream& operator>>(istream& in, Money& m)
{
	cout << "\nrub-> "; in >> m.rub;
	cout << "kop-> "; in >> m.kop;
	return in;
}

Money& Money::operator++()
{
	++kop;
	return *this;
}

Money Money::operator++(int)
{
	Money temp(rub, kop);
	long int k = 0;
	k = temp.rub * 100 + temp.kop;
	k++;
	temp.rub = k/100;
	temp.kop = k - ((k / 100) * 100);

	return temp;
}

bool operator<(const Money& r1, const Money& r2)
{
	long int k1 = r1.rub * 100 + r1.kop;
	long int k2 = r2.rub * 100 + r2.kop;
	return k1 < k2;
}

bool operator>(const Money& r1, const Money& r2)
{
	long int k1 = r1.rub * 100 + r1.kop;
	long int k2 = r2.rub * 100 + r2.kop;
	return k1 > k2;
}

fstream& operator>>(fstream& fin, Money& m)
{
	fin >> m.rub;
	fin >> m.kop;
	return fin;
}

fstream& operator<<(fstream& fout, const Money& m)
{
	fout << m.rub << "\n" << m.kop << "\n";
	return fout;
}

bool operator==(Money& a, Money& b)
{
	if ((a.rub == b.rub) && (a.kop == b.kop))
	{
		return true;
	}
	else
		return false;

}

Money operator/(Money& c, int q)
{
	long int k = c.rub * 100 + c.kop;
	k = k / q;
	c.rub = k / 100;
	c.kop = k % 100;

	return c;
}