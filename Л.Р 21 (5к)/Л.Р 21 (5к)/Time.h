#pragma once
#include "Triad.h"
class Time :
	public Triad
{
public:
	Time(void);
public:
	~Time(void);
	void Show();
	Time(int, int, int, int);
	Time(const Time&);
	int Get_razn() { return razn; }
	void Set_razn(int);
	void Raxn_Sec();
	void Raxn_Min();
	Time& operator=(const Time&);
	friend istream& operator>>(istream& in, Time& l);
	friend ostream& operator<<(ostream& out, const Time& l);
protected:
	int razn;
};

