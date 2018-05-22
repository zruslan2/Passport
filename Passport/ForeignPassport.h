#pragma once
#include "Library.h"
#include"Passport.h"
#include "date.h"
#include "Visa.h"
#include<list>

class ForeignPassport:public Passport
{
private:
	string number;
	list <Visa> visas;
public:
	ForeignPassport() {
		number = "";
		this->name = "";
		this->sname = "";
		this->bdate = date();
		this->citizen = "";
	}

	
};

