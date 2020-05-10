#include "Time.h"
Time::Time(void) :Triad()
{
	razn = 0;
}
Time::~Time(void)
{
}
Time::Time(int M, int C, int P, int G) :Triad(M, C, P)
{
	razn = G;
}
Time::Time(const Time& L)
{
	First = L.First;
	Second = L.Second;
	Third = L.Third;
	razn = L.razn;

}
void Time::Set_razn(int G)
{
	razn = G;
}
void Time::Raxn_Sec()
{
	Third += razn;
	if (Third >= 60)
		Second += (Third / 60);
	Third %= 60;
}
void Time::Raxn_Min()
{
	Second += razn;
	if (Second >= 60)
	{
		First += (Second / 60);
		Second %= 60;
	}
}
Time& Time::operator=(const Time & l)
{
	if (&l == this)return *this;

	First = l.First;
	Second = l.Second;
	Third = l.Third;
	razn = l.razn;
	return *this;
}
istream& operator>>(istream & in, Time & c)
{
	cout << "\nhours: "; in >> c.First;
	cout << "\nminute: "; in >> c.Second;
	cout << "\nsecunds: "; in >> c.Third;
	cout << "\nrazn: "; in >> c.razn;
	cout << endl;
	return in;
}
ostream& operator<<(ostream & out, const Time & d)
{
	out << "\nFirst: " << d.First;
	out << "\nSecond: " << d.Second;
	out << "\nThird: " << d.Third;
	cout << endl;
	return out;
}
void Time::Show()
{
	cout << "\nFirst : " << First;
	cout << "\nSecond : " << Second;
	cout << "\nThird : " << Third;
	cout << "\n";
}