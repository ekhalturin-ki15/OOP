#include "Tree.h"

void Tree::Out(ofstream &outfile)
{
	outfile << "��� ������, ";

	outfile << "��� " << year<< " ���, ";
	
	outfile << ", ��� ��������: " << name;
}


void Tree::In(ifstream &infile)
{
	infile >> this->year >> this->name;
}