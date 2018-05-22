#pragma once
#include "Library.h"
#include "date.h"

class Visa
{
private:
	string country;
	date ent_date;
	date ext_date;

public:
	Visa(string, date, date);
	
	friend istream& operator >> (istream & is, Visa & obj);
	friend ostream& operator<<(ostream& os, Visa obj);
};

