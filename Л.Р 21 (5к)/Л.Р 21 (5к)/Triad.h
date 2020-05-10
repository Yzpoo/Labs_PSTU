#pragma once
#include "Object.h"
#include <iostream>
using namespace std;

class Triad :
	public Object
{
public:
	Triad();
public:
	virtual ~Triad();
	void Show();
	Triad(int, int, int);
	Triad(const Triad&);
	int Get_First() { return First; }
	int Get_Second() { return Second; }
	int Get_Third() { return Third; }
	void set_First(int);
	void set_Second(int);
	void set_Third(int);
	void Set_FirstPlus();
	void Set_SecondPlus();
	void Set_ThirdPlus();

	Triad& operator=(const Triad& c);
	friend istream& operator>>(istream& in, Triad& c);
	friend ostream& operator<<(ostream& out, const Triad& c);
protected:
	int First;
	int Second;
	int Third;
};

