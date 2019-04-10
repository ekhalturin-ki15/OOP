﻿#pragma once
#include "Flower.h"
#include "Bush.h"
#include "Tree.h"

//Элемент контейнера кольцевой двусвязанный список
template <typename Data>
class ElementRL
{
public:
	Data data;
	ElementRL<Data> *next;
	ElementRL<Data> *prev;

	friend const ElementRL<Data>& operator++(ElementRL<Data>& el);
};

template <typename Data>
const ElementRL<Data>& operator++(ElementRL<Data>& el)
{
	el.next;
	return i;
}


//Объявление двусвязанного списка
template <typename DataRL>
class RingList
{
public:
	
	RingList();


	// Положить в конец
	void PushBack(DataRL flower);
	
	ElementRL<DataRL>* begin();

	////Удалить
	void Clear();

	void In(std::ifstream & infile);

	void Out(std::ofstream & outfile);

	void OutTree(std::ofstream & outfile);

	int WatAmount();



private:

	ElementRL<DataRL>* start;
	ElementRL<DataRL>* end;
	ElementRL<DataRL>* now; // Для постепенного вывода 
	int amountEl;

};



//При использовании шаблонов, реализацию нельзя разделять, так как она требуется на этапе компановки




template <typename  DataRL>
void RingList<DataRL>::Out(std::ofstream & outfile)
{
	ElementRL<Flower*> *it = this->begin();
	for (int i = 0; i < this->amountEl; i++)
	{
		it->data->Out(outfile);
		it = it->next;
	}
}

template <typename  DataRL>
void RingList<DataRL>::OutTree(std::ofstream & outfile)
{
	ElementRL<Flower*> *it = this->begin();
	for (int i = 0; i < this->amountEl; i++)
	{
		if (it->data->type == Type::tree)
			it->data->Out(outfile);
		it = it->next;
	}
}

template <typename  DataRL>
void RingList<DataRL>::In(std::ifstream & infile)
{
	int type;

	while (true)
	{
		type = 0;
		infile >> type;
		if (!type) break;
		Flower *object;
		if (type == 1)
		{
			object = new Tree;
		}

		if (type == 2)
		{
			object = new Bush;
		}
		object->In(infile);
		this->PushBack(object);
	}
}

template <typename  DataRL>
RingList<DataRL>::RingList()
{
	amountEl = 0;
	start = 0;
	end = 0;
	now = 0;
}

template <typename  DataRL>
ElementRL<DataRL>* RingList<DataRL>::begin()
{
	return start;
}


template <typename  DataRL>
void RingList<DataRL>::PushBack(DataRL flower)
{
	

	ElementRL<DataRL>* newEl;
	newEl = new ElementRL<DataRL>;


	if (start)
	{ 
		end->next = newEl;
		newEl->prev = end;
		newEl->next = start;
		newEl->data = flower;
		end = newEl;
		start->prev = end;
	}
	else
	{
		start = newEl;
		start->next = start;
		start->prev = start;
		start->data = flower;
		end = start;
	}
	this->amountEl++;
}



//Общий код для конструктора и для очищения контейнера
template <typename  DataRL>
void RingList<DataRL>::Clear()
{
	ElementRL<Flower*> *it = this->begin();
	ElementRL<Flower*> *nextit;
	if (it != 0) nextit = it->next;
	for (int i = 0; i < this->amountEl; i++)
	{
		delete it;
		it = nextit;
		nextit = nextit->next;
	}

	amountEl = 0;
	start = 0;
	end = 0;
	now = 0;
}

template <typename  DataRL>
int RingList<DataRL>::WatAmount()
{
	return this->amountEl;
}