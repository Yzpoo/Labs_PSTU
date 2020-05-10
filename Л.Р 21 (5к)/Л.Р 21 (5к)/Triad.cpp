#include "Triad.h"
Triad::Triad()
{
	First = 0;
	Second = 0;
	Third = 0;
}
Triad::~Triad()
{
}
Triad::Triad(int x, int y, int z)
{
	First = x;
	Second = y;
	Third = z;
}
Triad::Triad(const Triad& c)
{
	First = c.First;
	Second = c.Second;
	Third = c.Third;
}
void Triad::set_First(int x)
{
	First = x;
}
void Triad::set_Second(int y)
{
	Second = y;
}
void Triad::set_Third(int z)
{
	Third = z;
}
void Triad::Set_FirstPlus()
{
	First++;
}
void Triad::Set_SecondPlus()
{
	Second++;
}
void Triad::Set_ThirdPlus()
{
	Third++;
}
Triad& Triad::operator=(const Triad& c)
{
	if (&c == this)return *this;
	First = c.First;
	Second = c.Second;
	Third = c.Third;
	return *this;
}
istream& operator>>(istream & in, Triad & c)
{
	cout << "\nFirst: "; in >> c.First;
	cout << "\nSecond: "; in >> c.Second;
	cout << "\nThird: "; in >> c.Third;
	cout << endl;
	return in;
}
ostream& operator<<(ostream & out, const Triad & d)
{
	out << "\nFirst: " << d.First;
	out << "\nSecond: " << d.Second;
	out << "\nThird: " << d.Third;
	cout << endl;
	return out;
}

void Triad::Show()
{
	cout << "\nFirst : " << First;
	cout << "\nSecond : " << Second;
	cout << "\nThird : " << Third;
	cout << "\n";
}