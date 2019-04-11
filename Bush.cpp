#include "Bush.h"

void Bush::Out(std::ofstream &outfile)
{

	outfile << "Это кустарник, ";

	if ((0<month) && (month <= watIsMonth.size()))
	{
		outfile << "месяц цветения - " << watIsMonth[month - 1];

	}
	else
	{
		outfile << "месяц цветения считался некорректно ";
	}

	OutSuffix(outfile);

}


void Bush::In(std::ifstream &infile)
{

	infile >> this->month >> this->name >> this->WIG;
}