#include "Bush.h"

void Bush::Out(std::ofstream &outfile)
{
	
	outfile << "Это кустарник, ";

	if (-1<month && month<watIsMonth.size())
	{
		outfile << "месяц цветения - " << watIsMonth[month - 1];
		
	}
	else
	{
		outfile << "месяц цветения считался некорректно";
	}

	outfile << ", Его название: " << name<<"\n";

}


void Bush::In(std::ifstream &infile)
{
	std::string s;
	infile >> this->month >> this->name;

}