
#include "Flower.h"


void Flower::Out(std::ofstream &outfile)
{

	outfile << "��� ������, ";

	if (-1<type && type<watIsType.size())
	{
		outfile << "��� ������ - " << watIsType[type - 1];

	}
	else
	{
		outfile << "��� �������� �����������";
	}

	outfile << ", ��� ��������: " << name << "\n";

}


void Flower::In(std::ifstream &infile)
{
	std::string s;
	infile >> this->type >> this->name;

}