#pragma once

#include <string>
#include <vector>
#include <fstream>
#include "RingList.h"

//Родительский класс наследования

class Flower
{
public:

	virtual void In(std::ifstream &infile) =0;
	virtual void Out(std::ofstream &outfile) =0;

	static void InAll(std::ifstream &infile, RingList<Flower*>  &container);

	static Flower* GetFlower(std::ifstream &infile, int type);

	static void OutAll(std::ofstream &outfile, RingList<Flower*>  container);

	static void Clear(RingList<Flower*>  &container);

protected:
	std::string name;

	int AmountConsonant();
};


