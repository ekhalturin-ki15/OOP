#include "Tree.h"

void Tree::Out(std::ofstream &outfile)
{
	outfile << "��� ������, ";

	outfile << "��� " << year<< " ���, ";
	
	OutSuffix(outfile);
}


void Tree::In(std::ifstream &infile)
{

	infile >> this->year >> this->name >> this->WIG;
}