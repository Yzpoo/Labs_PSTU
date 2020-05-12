#include "Student.h"

Student::Student() :Person()
{
	rating = 0;
}
Student::~Student()

{
}
Student::Student(string N, int A, float R) :Person(N, A)
{
	rating = R;
}
Student::Student(const Student& s)
{
	name = s.name;
	age = s.age;
	rating = s.rating;
}
void Student::SetRating(float R)
{
	rating = R;
}
Student& Student::operator=(const Student& s)
{
	if (&s == this)
		return *this;
	name = s.name;
	age = s.age;
	rating = s.rating;
	return *this;
}
void Student::Show()
{
	cout << "\nName: " << name;
	cout << "\nAge: " << age;
	cout << "\nRating: " << rating;
	cout << endl;
}
void Student::Input()
{
	cout << "Name:"; cin >> name;
	cout << "Age:"; cin >> age;
	cout << "Rating: "; cin >> rating;
}
