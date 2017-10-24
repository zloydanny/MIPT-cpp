#include "Node_t.h"

struct List_t
{
	Node_t* first;

	List_t(int val);
	~List_t();

	void push_back(int val);
	void print();

	void pop_back()
	{
		//TODO: Need to implement: delete last element is the list
	};
	
	void insert(int pos, int val)
	{
		//TODO: Need to implement:  insert new element before the element at the specified position
	}
	
	int size()
	{
		//TODO: Need to implement: return list size
	}

	void erase(int pos)
	{
		//TODO: Need to implement: delete the element at the specified position
	}

	int clear()
	{
		//TODO: Need to implement: delete all elements from the list
	}

	int sort()
	{
		//TODO: Need to implement: Sort element in the list by ascending order
		//NOTE: It is really easy to do, if you have implemented push_back(), insert(), size(), and erase()
	}

	int reverse()
	{
		//TODO: Need to implement: Reverse links between elements in the list
	}
};

List_t::List_t(int val)
{
	first = new Node_t(val);
}

List_t::~List_t()
{
	delete first;
}

void List_t::push_back(int val)
{
	Node_t* node = first;

	while(node -> next)
	{
		node = node -> next;
	}

	node -> next = new Node_t(val);
}

void List_t::print()
{
	Node_t* node = first;

	std::cout << "[";

	while(node)
	{
		std::cout << '\'' << node -> value << '\'';
		node = node -> next;
		if (node)
		{
			std::cout << ", ";
		}
	}

	std::cout << "]\n";
}
