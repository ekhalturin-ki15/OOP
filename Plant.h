#pragma once

#include <string>
#include <vector>
#include <fstream>
#include "RingList.h"

//Родительский класс наследования

class Plant
{
public:

	virtual void In(std::ifstream &infile) = 0;
	virtual void Out(std::ofstream &outfile) = 0;

	static void InAll(std::ifstream &infile, RingList<Plant*>  &container);

	static Plant* GetFlower(std::ifstream &infile, int type);

	static void OutAll(std::ofstream &outfile, RingList<Plant*>  container);

	static void Clear(RingList<Plant*>  &container);

protected:
	std::string name;
};

