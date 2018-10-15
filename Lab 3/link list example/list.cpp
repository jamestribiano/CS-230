#include <cstdlib>
#include <iostream>
#include "list.h"
using namespace std;

//default constructor
list::list()
{
	head = NULL;
	curr = NULL;
	temp = NULL;
}

//adds a node (uses the int from list.h)
void list::addNode(int addData)
{
	nodePtr n = new node;
	n->next = NULL;
	n->data = addData;
	
	if(head != NULL)
	{
		curr = head;
		
		while(curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = n;
	}
	else
	{
		head = n;
	}
}

//deletes a node from the list
void list::delNode(int delData)
{
	nodePtr delPtr = NULL;
	temp = head;
	curr = head;
	while(curr != NULL && curr->data != delData)
	{
		temp = curr;
		curr = curr->next;
	}
		if(curr == NULL)
		{
			cout << delData << "was not in the list! \n";
			delete delPtr;
		}
		else
			{
				delPtr = curr;
				curr = curr->next;
				temp->next = curr;
				if(delPtr == head)
					{
						head = head->next;
						temp = NULL;
					}
				delete delPtr;
				cout << delData << " was deleted from the list! \n";
			}
}
//print everything in the list when called
void list::printList()
{
	curr = head;
	while(curr != NULL)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}

