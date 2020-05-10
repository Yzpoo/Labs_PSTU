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
	Money& operator* (const Money& p)
	{
		long g, h, i;
		g = kop + (rub * 100);
		h = p.kop + (p.rub * 100);
		i = g * h;
		long y = i / 100;
		int u = i % 100;
		return *this;
		Money o(y, u);
	}
	
	friend istream& operator >> (istream& in, Money& t)
	{
		cout << "Рубли: "; in >> t.rub;
		cout << "Копейки: "; in >> t.kop;

		return in;
	}

	friend ostream& operator << (ostream& out, const Money& t)
	{
		return (out << t.kop << "," << t.rub << endl);
	};

	Money& operator=(int p)
	{
		rub = 0;
		kop = 0;
		return *this;
	};
};


