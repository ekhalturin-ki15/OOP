#pragma once

#include <fstream>
#include "Plant.h"

const std::vector<std::string> watIsMonth = { "������", "�������", "����", "������", "���","����", "����", "������", "��������", "�������", "������", "�������" };


class Bush : public Plant
{
public:

	void In(std::ifstream &infile);
	void Out(std::ofstream &outfile);

private:
	
	int month;
};