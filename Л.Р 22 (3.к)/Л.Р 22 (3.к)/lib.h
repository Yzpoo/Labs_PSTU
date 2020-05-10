#include <iostream>

using namespace std;

class Money
{
	long rub;
	int kop;
public:
	Money() { kop = 0; rub = 0; };
	Money(int m, long s) { kop = m; rub = s; };
	Money(const Money& t) { kop = t.kop; rub = t.kop; };
	~Money() {};
	Money& operator/ (const Money& p)
	{
		long g, h, i;
		g = kop + (rub *100);
		h = p.kop + (p.rub *100);
		i = g / h;
		rub = i / 100;
		kop = i % 100; 
		return *this;
	}
	
	Money& operator* (double s)
	{
		long g, h;
		g = kop + (rub * 100);
		h = g * (s);
		rub = h / 100;
		kop = h % 100;
		return *this;
	}

	friend ostream& operator << (ostream& out, const Money& t)
	{
		return (out << t.kop << "," << t.rub << endl);
	}

};


