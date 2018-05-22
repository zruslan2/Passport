#pragma once
#include "Library.h"

class date
{
private:
	int day;
	int month;
	int year;
public:
	date()=default;
	date(int, int, int);	
	friend istream& operator >> (istream& is, date& d);
	friend ostream& operator << (ostream& os, date d);
};

