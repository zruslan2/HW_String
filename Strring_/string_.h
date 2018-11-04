#pragma once
#include <iostream>
using namespace std;

class string_
{
	char*str;
	int length;
public:
	string_();
	string_(int length);
	string_(const char*str);
	string_(const string_&obj);
	void print();	
	void input();
	void insert(int position, const char *str);
	int getLength();
	const char* getString();
	void setString(const char*str);
	~string_();
	void clear();
	// home work
	string_& operator+=(const string_&s);
};

