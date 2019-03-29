#pragma once

#include <fstream>
#include "Plant.h"

const std::vector<std::string> watIsMonth = { "€нварь", "февраль", "март", "апрель", "май","июнь", "июль", "август", "сент€брь", "окт€брь", "но€брь", "декабрь" };


class Bush : public Plant
{
public:

	void In(std::ifstream &infile);
	void Out(std::ofstream &outfile);

private:
	
	int month;
};