#pragma once

#include <fstream>
#include "Flower.h"

const std::vector<std::string> watIsMonth = { "������", "�������", "����", "������", "���","����", "����", "������", "��������", "�������", "������", "�������" };


class Bush : public Flower
{
public:

	void In(std::ifstream &infile);
	void Out(std::ofstream &outfile);

private:
	
	int month;
};