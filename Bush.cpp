#include "Bush.h"

void Bush::Out(ofstream &outfile)
{
	outfile << "��� ���������, ";

	if (month == -1)
	{
		outfile << "����� �������� �������� �����������";
	}
	else
	{
		outfile << "����� �������� "<< watIsMonth[month];
	}

	outfile << ", ��� ��������: " << name;

}


void Bush::In(ifstream &infile)
{
	string s;
	infile >> s >> this->name;

	this->month = -1;

	int i = 0;
	for (auto it : watIsMonth)
	{
		if (s == it)
		{
			this->month = i;
			break;
		}
		i++;
	}

}