#include "date.h"


date::date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

istream & operator >> (istream & is, date & d)
{
	char dot;
	is >> d.day >> dot >> d.month >> dot >> d.year;
	return is;
}

ostream & operator<<(ostream & os, date d)
{
	os << d.day << "." << d.month << "." << d.year;
	return os;
}
