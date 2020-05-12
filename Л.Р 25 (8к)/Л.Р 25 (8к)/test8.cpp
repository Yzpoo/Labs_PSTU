#include "Object.h"
#include "Person.h"
#include "Student.h"
#include "List.h"
//#include "Event.h"
#include "Dialog.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Commands:\n";
	cout << "m  make list [mNumber]\n";
	cout << "+  add\n";
	cout << "-  delete\n";
	cout << "?  element info by index [?Number]\n";
	cout << "s  all elements\n";
	cout << "q  exit\n";

	Dialog test;
	test.Execute();
}