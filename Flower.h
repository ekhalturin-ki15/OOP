#pragma once
#include <string>
#include <vector>


using namespace std;

//������������ ����� ������������

class Flower
{
public:

	virtual void In(ifstream &infile);
	virtual void Out(ofstream &outfile);

protected:
	string name;
};