#include <iostream>
#include <fstream>
#include <string>
#include "RingList.h"
#include "Flower.h"
#include "Tree.h"
#include "Bush.h"
#include "Client.h"

using namespace std;

int n;

int main(int amount, char* param[])
{

	setlocale(LC_ALL, "Russian");

#ifdef _DEBUG 
	
	ifstream infile("in.txt");
	ofstream outfile("out.txt");
	
#else
	
	if (amount != 3)
	{
		cout << "������ � ���������� ����������";
		return 1;
	}

	ifstream infile(param[1]);
	ofstream outfile(param[2]);
	
#endif


	cout << "�����" << endl;

	RingList<Flower*> container;

	In(infile, container);

	cout << "������ ������� � �����" << endl;

	container.Out(outfile);

	cout << "������ ��������� � ����" << endl;

	container.Clear();

	cout << "��������� ������" << endl;

	container.Out(outfile);

	cout << "�����" << endl;
}