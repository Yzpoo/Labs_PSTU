#include <iostream>
#include <string>

using namespace std;

class Comp
{
private:
	string processor;
	int objem_mm;
	int objem_hdd;
public:
	Comp();

	Comp(const Comp&);

	Comp(string f, int s, int b);

	~Comp();

	void set_processor(string);

	string get_processor();

	void set_objem_mm(int);

	int get_objem_mm();

	void set_objem_hdd(int);

	int get_objem_hdd();

	void show();

};
