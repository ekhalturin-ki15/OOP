#include "Plant.h"

#include "Flower.h"
#include "Tree.h"
#include "Bush.h"

void Plant::InAll(std::ifstream & infile, RingList<Plant*>& container)
{
	int type;

	while (true)
	{
		type = 0;
		infile >> type;
		if (!type) break;
		container.PushBack(GetFlower(infile, type));
	}
}


void Plant::OutAll(std::ofstream & outfile, RingList<Plant*> container)
{
	ElementRL<Plant*> *it = container.begin();
	for (int i = 0; i < container.WatAmount(); i++)
	{
		it->data->Out(outfile);
		it = it->next;
	}


}

void Plant::Clear(RingList<Plant*>& container)
{
	ElementRL<Plant*> *it = container.begin();
	ElementRL<Plant*> *nextit;
	if (it != 0) nextit = it->next;
	for (int i = 0; i < container.WatAmount(); i++)
	{
		delete it;
		it = nextit;
		nextit = nextit->next;
	}
	container.Clear();
}


#define TREE 1
#define BUSH 2
#define FLOW 3

Plant * Plant::GetFlower(std::ifstream & infile, int type)
{
	Plant *object;
	
	switch (type)
	{
	case TREE:
		object = new Tree;
		break;
	case BUSH:
		object = new Bush;
		break;
	case FLOW:
		object = new Flower;
		break;
	}

	object->In(infile);

	return object;
}