#include <iostream>
#include <fstream>
#include <string>
#include "RingList.h"
#include "Flower.h"
#include "Tree.h"
#include "Bush.h"

using namespace std;

int main(int amount, char* param[])
{

	setlocale(LC_ALL, "Russian");

	ifstream infile;
	ofstream outfile;

	if (amount == 3)
	{
		infile.open(param[1]);
		outfile.open(param[2]);
	}
	else
	{
		infile.open("in.txt");
		outfile.open("out.txt");
	}


	cout << "�����" << endl;

	RingList<Flower*> container;

	container.In(infile);

	cout << "������ ������� � �����" << endl;

	container.Out(outfile);

	cout << "������ ��������� � ����" << endl<<"���������� ��������: "<< container.WatAmount()<<endl;

	container.Clear();

	cout << "��������� ������" << endl << "���������� ��������: " << container.WatAmount() << endl;

	container.Out(outfile);

	cout << "�����" << endl;
	getchar();
}