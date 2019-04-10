#include <iostream>
#include <fstream>
#include <string>
#include "RingList.h"
#include "Flower.h"
#include "Tree.h"
#include "Bush.h"

const int StandartInpAtr = 3;

int main(int amount, char* param[])
{

	setlocale(LC_ALL, "Russian");

	std::ifstream infile;
	std::ofstream outfile;

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


	std::cout << "Старт" << std::endl;

	RingList<Flower*> container;
	
	container.In(infile);
	//Flower::InAll(infile, container);

	std::cout << "Данные считаны с файла" << std::endl;

	container.Out(outfile);
	//Flower::OutAll(outfile, container);

	std::cout << "Данные выведенны в файл" << std::endl<<"количество объектов: "<< container.WatAmount()<< std::endl;

	container.Clear();
	//Flower::Clear(container);

	std::cout << "Контейнер очищен" << std::endl << "количество объектов: " << container.WatAmount() << std::endl;

	std::cout << "Финиш" << std::endl;
	getchar();
}

