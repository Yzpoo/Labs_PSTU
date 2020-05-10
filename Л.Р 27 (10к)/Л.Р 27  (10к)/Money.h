#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Money
{
public:
	Money();
	Money(long int, int);
	Money(const Money&);
	Money operator= (const Money&);
	friend bool operator<(const Money&, const Money&);
	friend bool operator>(const Money&, const Money&);
	friend bool operator==(Money&, Money&);
	friend Money operator/(Money&, int);
	Money& operator++();
	Money operator++(int);
	friend ostream& operator <<(ostream& out, const Money& m);
	friend istream& operator >>(istream& in, Money& m);
	friend fstream& operator>>(fstream& fin, Money& m);
	friend fstream& operator<<(fstream& fout, const Money& m);

public:
	~Money();
private:
	long int rub;
	int kop;
};