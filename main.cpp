#include <iostream>
#include <fstream>
#include <string>
#include "Plant.h"
#include "Tree.h"
#include "Bush.h"
#include "Flower.h"

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


	std::cout << "�����" << std::endl;

	RingList<Plant*> container;
	
	Plant::InAll(infile, container);

	std::cout << "������ ������� � �����" << std::endl;

	Plant::OutAll(outfile, container);

	std::cout << "������ ��������� � ����" << std::endl<<"���������� ��������: "<< container.WatAmount()<< std::endl;

	Plant::Clear(container);

	std::cout << "��������� ������" << std::endl << "���������� ��������: " << container.WatAmount() << std::endl;

	std::cout << "�����" << std::endl;
	getchar();
}

