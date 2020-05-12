#pragma once
#include "Person.h"

class Student : public Person
{
protected:
	float rating;
public:
	Student();
	~Student();

	void Show();
	void Input();

	Student(string, int, float);
	Student(const Student&);

	float GetRating() { return rating; }
	void SetRating(float);

	Student& operator=(const Student&);
};

