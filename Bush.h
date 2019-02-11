#pragma once

#include <fstream>
#include <algorithm>
#include "Flower.h"


class Bush : public Flower
{
public:

	void In(ifstream &infile);
	void Out(ofstream &outfile);

private:
	vector<string> watIsMonth = { "������", "�������", "����", "������", "���",
		"����", "����", "������", "��������", "�������", "������", "�������" };
	char month;
};