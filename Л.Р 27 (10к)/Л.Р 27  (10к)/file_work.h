#pragma once
#include "Money.h"
#include <iostream>
#include <iostream>
#include <fstream>

using namespace std;

int make_file(const char* f_name)
{
	fstream stream(f_name, ios::out | ios::trunc);
	if (!stream)return -1;
	int n;
	Money m;
	cout << "N?";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		stream << m << "\n";
	}
	stream.close();
	return n;
}

int print_file(const char* f_name)
{
	fstream stream(f_name, ios::in);
	if (!stream)return -1;
	Money m;
	int i = 0;
	while (stream >> m)
	{
		cout << m << "\n";
		i++;
	}
	stream.close();
	return i;
}

int del_file(const char* f_name, Money& c)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name, ios::in);
	if (!stream)return -1;
	int i = 0;
	Money m;
	while (stream >> m)
	{
		if (stream.eof())break;
		i++;
		if ((m < c))temp << m;
	}
		stream.close();
		temp.close();
		remove(f_name);
		rename("temp", f_name);
		return i;
}

int reduce_file(const char* f_name, Money& c)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name, ios::in);
	if (!stream)return -1;
	int i = 0;
	Money m;
	while (stream >> m)
	{
		if (stream.eof())break;
		i++;
		if (m==c)temp << m/2;
		else temp << m;
	}
	stream.close();
	temp.close();
	remove(f_name);
	rename("temp", f_name);
	return i;
}

int add_file(const char* f_name, int k, int v)
{
	fstream temp("temp", ios::out);
	fstream stream(f_name, ios::in);
	if (!stream)return -1;
	Money m;
	int x = 0;
	int i = 0;
	int l = 0;
	while (stream >> m)
	{
		if (stream.eof())break;
		if (i == k)
		{
			while (x < v)
			{
				Money mm;
				cin >> mm;
				temp << mm;
				x++;
				l++;
			}
		}
		i++;
		temp << m;
	}
	stream.close();
	temp.close();
	remove(f_name);
	rename("temp", f_name);
	return l;
}

int add_end(const char* f_name)
{
	int i = 0;
	fstream stream(f_name, ios::app);
	if (!stream)return -1;
	Money A;
	cout << "New object\n";
	cin >> A;
	stream << A;
	i++;
	return i;
}