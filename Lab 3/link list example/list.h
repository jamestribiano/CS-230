#include <cstdlib>
#include <iostream>
#ifndef LIST_H
#define LIST_H
using namespace std;

class list
{
	public: //this is where the functions go
		
		list();
		void addNode(int addData);
		void delNode(int delData);
		void printList();
		
	private:
		
	typedef struct node
		{
		
			int data;
			node* next;	
			
		}* nodePtr;

		nodePtr head;
		nodePtr curr;
		nodePtr temp;
		
	protected:
	//nothing here for this program.
	
};


#endif
