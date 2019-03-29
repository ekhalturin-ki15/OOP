#include "Bush.h"

void Bush::Out(std::ofstream &outfile)
{
	
	outfile << "Ёто кустарник, ";

	if ((0<month) && (month<=watIsMonth.size()))
	{
		outfile << "мес€ц цветени€ - " << watIsMonth[month - 1];
		
	}
	else
	{
		outfile << "мес€ц цветени€ считалс€ некорректно ";
	}

	OutSuffix(outfile);

}


void Bush::In(std::ifstream &infile)
{

	infile >> this->month >> this->name >> this->WIG;
}