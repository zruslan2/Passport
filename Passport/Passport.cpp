#include "Passport.h"

Passport::Passport(int numb, string n, string sn, date d, string cit)
{
	this->number = numb;
	this->name = n;
	this->sname = sn;
	this->bdate = d;
	this->citizen = cit;
}

istream & operator >> (istream & is, Passport & obj)
{
	getline(is, obj.number, '/');
	getline(is, obj.name, '/');
	getline(is, obj.sname, '/');
	is >> obj.bdate;
	getline(is, obj.citizen);	
	return is;
}

ostream & operator<<(ostream & os, Passport obj)
{
	os << obj.number <<"\t"<< obj.name << "\t" << obj.sname << "\t" << obj.bdate << "\t" << obj.citizen << endl;
	return os;
}
