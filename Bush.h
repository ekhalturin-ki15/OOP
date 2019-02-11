#pragma once

#include <fstream>
#include <algorithm>
#include <string>
#include <vector>
#include "Flower.h"

const vector<string> watIsMonth = { "������", "�������", "����", "������", "���","����", "����", "������", "��������", "�������", "������", "�������" };


class Bush : public Flower
{
public:

	void In(ifstream &infile);
	void Out(ofstream &outfile);

private:
	
	char month;
};