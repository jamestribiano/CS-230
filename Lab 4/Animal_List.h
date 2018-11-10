//Animal_List.h
#include<iostream>
#include"Animal.h"
using namespace std;

class Animal_List
{     
      public:
             Animal_List();
             void addOwner(Animal);
             void printList(); //non-recursive
             void printRecursive(); //recursive
             
      private:
         typedef struct node 
		 		{
                Animal anim;
                node* next;
                }* nodePTR;
         nodePTR head;
         nodePTR current;
         void recursive(nodePTR);
         
      protected:
      };
Animal_List::Animal_List()
{
    head = NULL;
    current = NULL;
}

void Animal_List::addOwner(Animal an)
{
     nodePTR n = new node;
     n -> next = NULL;
     n -> anim = an;
     
     if (head != NULL)
     {
              current = head;
              while (current -> next != NULL)
              {
                    current = current -> next;
              }
              current -> next = n;
     }
     else
     {
         head = n;
     }
}

void Animal_List::printList()
{
     current = head;
     while (current != NULL)
     {
           cout <<current -> anim.getPetInfo()<<endl;
           current = current -> next;
     }
}
void Animal_List::printRecursive()
{
     current = head;
     recursive(current);    
}

void Animal_List::recursive(nodePTR curr)
{
     if (curr != NULL)
     {
         cout <<curr -> anim.getPetInfo()<<endl;
         recursive(curr -> next);
     }
}
