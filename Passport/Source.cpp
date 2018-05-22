#include "Passport.h"

int main()
{
	Passport p;
	ifstream in_file("pas.txt");
	if (!in_file)
	{
		cerr << "File open error" << endl;
	}
	else
	{
		while (!in_file.eof())
		{
			in_file >> p;
			cout << p;
		}
	}
	system("pause");
	return 0;
}