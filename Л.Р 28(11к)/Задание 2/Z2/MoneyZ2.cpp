#include "MoneyZ2.h"

Money::Money()
{
	rub = 0;
	cop = 0;
}

Money::Money(long R, int C)
{
	rub = R;
	cop = C;
}

Money::Money(const Money& m)
{
	rub = m.rub;
	cop = m.cop;
}

Money::~Money()
{
}

Money Money::operator =(const Money& m)
{
	if (&m == this)
		return *this;
	rub = m.rub;
	cop = m.cop;
	return*this;
}

Money Money::operator+(const Money & m)
{
	Money temp;
	temp.rub = rub + m.rub;
	temp.cop = cop + m.cop;
	if (temp.cop >= 100)
	{
		temp.rub++;
		temp.cop -= 100;
	}
	return temp;
}

Money Money::operator/(const int t)
{
	Money temp;
	long long sum = 0;
	sum = sum + rub * 100;
	sum = sum + cop;
	sum = sum / t;
	temp.cop = sum % 100;
	temp.rub = sum / 100;
	return temp;
}

bool Money::operator>(const Money & m)
{
	if (rub > m.rub)
		return true;
	if ((rub == m.rub) and (cop > m.cop))
		return true;
	return false;
}

bool Money::operator<(const Money & m)
{
	if (rub < m.rub)
		return true;
	if ((rub == m.rub) and (cop < m.cop))
		return true;
	return false;
}

ostream& operator<<(ostream & out, const Money & m)
{
	out << "Wage: " << m.rub << ",";
	if (m.cop / 10 == 0)
		out << "0" << m.cop << "\n";
	else
		out << m.cop << "\n";
	return out;
}
istream& operator>>(istream & in, Money & m)
{
	cout << "Rubles: "; in >> m.rub;
	cout << "Copeechki: "; in >> m.cop;
	if (m.cop >= 100)	//если ввели больше 100 копеечек
	{
		int w = m.cop / 100;
		m.rub += w;
		m.cop -= w * 100;
	}
	return in;
}

