#include "Visa.h"

Visa::Visa(string c, date ent, date ext)
{
	country = c;
	ext_date = ext;
	ent_date = ent;
}

istream & operator >> (istream & is, Visa & obj)
{
	is >> obj.country >> obj.ent_date >> obj.ext_date;
	return is;
}

ostream & operator<<(ostream & os, Visa obj)
{
	os << obj.country <<"\t"<< obj.ent_date << "\t" << obj.ext_date << endl;
	return os;
}
