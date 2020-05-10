#include "Object.h"
#include "Triad.h"
#include "Time.h"
#include "Vector.h"

#include <string>
#include <iostream>
using namespace std;
void main()
{

	Vector v(5);
	Triad a;
	cout << "Object TRiad: ";
	cin >> a;
	cout << "Triad++: ";
	a.Set_FirstPlus();
	a.Set_SecondPlus();
	a.Set_ThirdPlus();
	a.Show();
	cout << endl << "Object Time: ";
	Time b;
	cin >> b;
	cout << "time razn: ";
	b.Raxn_Sec();
	cout << endl;
	b.Show();
	Object* p = &a;
	v.Add(p);
	p = &b;
	v.Add(p);
	cout << v;

}
