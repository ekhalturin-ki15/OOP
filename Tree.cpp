#include "Tree.h"

void Tree::Out(std::ofstream &outfile)
{
	outfile << "Это дерево, ";

	outfile << "ему " << year << " лет, ";

	OutSuffix(outfile);
}


void Tree::In(std::ifstream &infile)
{

	infile >> this->year >> this->name >> this->WIG;
}