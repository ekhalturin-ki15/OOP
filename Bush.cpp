#include "Bush.h"

void Bush::Out(std::ofstream &outfile)
{
	
	outfile << "��� ���������, ";

	if (0<month && month<=12)
	{
		outfile << "����� �������� - " << watIsMonth[month - 1];
		
	}
	else
	{
		outfile << "����� �������� �������� �����������";
	}

	outfile << ", ��� ��������: " << name<<"\n";

}


void Bush::In(std::ifstream &infile)
{
	std::string s;
	infile >> this->month >> this->name;

}