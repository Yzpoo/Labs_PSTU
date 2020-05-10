#pragma once
#include "Triad.h"


class Data :public Triad
{
public:
	Data(void);


public:
	~Data(void);
	Data(int, int, int);
	Data(const Data&);
	Data& operator = (const Data&);
	friend istream& operator>>(istream& in, Data& d);
	friend ostream& operator<<(ostream& out, const Data& d);
	Data& operator++();
	Data operator++(int);
	Data& foo_sec(int);
	Data& foo_min(int);


};

