#include "Bush.h"

void Bush::Out(ofstream &outfile)
{
	
	outfile << "��� ���������, ";

	if (-1<month && month<12)
	{
		outfile << "����� �������� - " << watIsMonth[month - 1];
		
	}
	else
	{
		outfile << "����� �������� �������� �����������";
	}

	outfile << ", ��� ��������: " << name<<"\n";

}


void Bush::In(ifstream &infile)
{
	string s;
	infile >> this->month >> this->name;
	this->month -= '0';

}