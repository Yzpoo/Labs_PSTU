
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Triad
{
public:
	Triad(void);
public:
	virtual ~Triad(void);
	Triad(int, int, int);
	Triad(const Triad&);
	int Get_first() { return first; }
	int Get_second() { return second; }
	int Get_third() { return third; }

	void Set_first(int);
	void Set_second(int);
	void Set_third(int);

	Triad& operator=(const Triad&);
	Triad& operator++();
	Triad operator++(int);
	Triad& operator+(const Triad&);

	friend istream& operator>>(istream& in, Triad& t);
	friend ostream& operator<<(ostream& out, const Triad& t);
protected:
	int first;
	int second;
	int third;
};

