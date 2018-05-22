#pragma once
#include "Library.h"
#include "date.h"

class Passport
{
private:
	string number;
protected:
	string name;
	string sname;
	date bdate;
	string citizen;
public:
	Passport()=default;
	Passport(int numb, string n, string sn, date d, string cit);
	friend istream& operator >> (istream & is, Passport & obj);
	friend ostream& operator <<(ostream & os, Passport obj);
};

