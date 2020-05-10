#include "SetZ5.h"
using namespace std;

typedef Set<double> type;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int n;
	cout << "Number of elements: ";
	cin >> n;
	if (n <= 0)
		return 0;

	type s(n);
	s.printV();

	s.addMax();
	s.printV();

	s.deleteMin();
	s.printV();

	s.averageSum();
	s.printV();

	system("pause");
}