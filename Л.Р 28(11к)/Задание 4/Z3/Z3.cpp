#include "SetZ3.h"
using namespace std;

typedef Set<double> type;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int n;
	cout << "Number of elements: ";
	cin >> n;

	type v(n);
	v.printV();

	v.addMax();
	v.printV();

	v.deleteMin();
	v.printV();

	v.averageSum();
	v.printV();

	system("pause");
}