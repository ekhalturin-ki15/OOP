#include "Bush.h"

void Bush::Out(std::ofstream &outfile)
{
	
	outfile << "��� ���������, ";

	if ((0<month) && (month<=watIsMonth.size()))
	{
		outfile << "����� �������� - " << watIsMonth[month - 1];
		
	}
	else
	{
		outfile << "����� �������� �������� ����������� ";
	}

	OutSuffix(outfile);

}


void Bush::In(std::ifstream &infile)
{

	infile >> this->month >> this->name >> this->WIG;
}