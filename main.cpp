#include <iostream>
#include <fstream>
#include <string>
#include "RingList.h"
#include "Flower.h"
#include "Tree.h"
#include "Bush.h"

using namespace std;

const int StandartInpAtr = 3;

int main(int amount, char* param[])
{

	setlocale(LC_ALL, "Russian");

	ifstream infile;
	ofstream outfile;

	if (amount == StandartInpAtr)
	{
		infile.open(param[1]);
		outfile.open(param[2]);
	}
	else
	{
		infile.open("in.txt");
		outfile.open("out.txt");
	}


	cout << "Старт" << endl;

	RingList<Flower*> container;
	
	container.In(infile);
	//Flower::InAll(infile, container);

	cout << "Данные считаны с файла" << endl;
	
	cout << "количество объектов: " << container.WatAmount() << endl;
	
	container.OutTree(outfile);

	cout << "Выведены только деревья"<< endl;

	container.Clear();
	//Flower::Clear(container);

	cout << "Контейнер очищен" << endl << "количество объектов: " << container.WatAmount() << endl;

	cout << "Финиш" << endl;
	getchar();
}

