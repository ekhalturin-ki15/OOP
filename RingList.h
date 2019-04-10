#pragma once
using namespace std;

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

	//void In(ifstream &infile);
	
	ElementRL<DataRL>* begin();

	////Удалить
	void Clear();


	int WatAmount();

	//Опять не по канонам std, ну да ладно, стерплю
	void Sort();
	void QSort(vector<ElementRL<DataRL>*>& mass, int l, int r);

private:

	ElementRL<DataRL>* start;
	ElementRL<DataRL>* end;
	ElementRL<DataRL>* now; // Для постепенного вывода 
	int amountEl;

};



//При использовании шаблонов, реализацию нельзя разделять, так как она требуется на этапе компановки


template <typename  DataRL>
void RingList<DataRL>::Sort()
{
	
	vector<ElementRL<DataRL>*> mass;
	ElementRL<DataRL> *it = this->begin();
	for (int i = 0; i < this->WatAmount(); i++)
	{
		mass.push_back(it);
		it = it->next;
	}

	this->QSort(mass, 0, mass.size() - 1);
	

}

template <typename  DataRL>
void RingList<DataRL>::QSort(vector<ElementRL<DataRL>*>& mass, int l, int r)
{
	int i = l, j = r;
	ElementRL<DataRL>* p = mass[(l+r) / 2];
	while (true)
	{
		while (p->data->cmp(mass[i]->data)) i++;

		while (mass[j]->data->cmp(p->data)) j--;

		if (i <= j)
		{
			std::swap(mass[i]->data, mass[j]->data);

			i++;
			j--;
		}
		if (i > j) break;
	}

	if (l < j) this->QSort(mass, l, j); //then QuickSort(l, j);
	if (i < r) this->QSort(mass, i, r); //then QuickSort(i, r);
}


template <typename  DataRL>
RingList<DataRL>::RingList()
{
	this->Clear();
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
	this->amountEl = 0;
	start = 0;
	end = 0;
	now = 0;
}

template <typename  DataRL>
int RingList<DataRL>::WatAmount()
{
	return this->amountEl;
}