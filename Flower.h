#pragma once

#include <string>
#include <vector>
#include <fstream>

//Родительский класс наследования

enum Type { tree, bush };

class Flower
{
public:

	virtual void In(std::ifstream &infile) =0;
	virtual void Out(std::ofstream &outfile) =0;
	enum Type type;

protected:
	std::string name;
	
};


