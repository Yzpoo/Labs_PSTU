#pragma once
#include <iostream>
using namespace std;

class Money
{
private:
	long rub;
	int cop;
public:
	Money();
	Money(long, int);
	Money(const Money&);
	~Money();

	Money operator =(const Money&);
	Money operator +(const Money&);
	Money operator /(const int);

	bool operator> (const Money&);
	bool operator< (const Money&);

	friend ostream& operator<< (ostream& out, const Money& p);
	friend istream& operator>> (istream& in, Money& p);
};

