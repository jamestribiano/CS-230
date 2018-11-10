#include <cstdlib>
#include <iostream>
#include"Animal.h"
#include"Animal_List.h"
using namespace std;

int menu()
{
    int choice;
    system("CLS");
    cout <<"\t\tMain Menu\n"
         <<"\t\t=========\n"
         <<"\t\t1. Insert a new animal into the list\n"
         <<"\t\t2. Print all animals iteratively\n"
         <<"\t\t3. Print all animals recursively\n"
         <<"\t\t4. EXIT\n"
         <<"\tEnter your choice: ";
    cin >>choice;
    return choice;
}

void addPet(Animal_List* theList)
{
	string first, last, petname, pettype, petage;
	cout << "Enter the Owners Name: "<<endl;
	cin >> first>>last;
	cout <<"Enter the pets Name, Kind of pet and the pets Age: "<<endl;
	cin >> petname>>pettype>>petage;
	Animal anm;
    anm.setPetInfo(first, last, petname, pettype, petage);
    theList -> addOwner(anm);
}

void printIteration(Animal_List* animalList)
{
     cout <<"Printing all Animals using iteration:\n";
     animalList -> printList();
}

void printRecursively(Animal_List* animalList)
{
     cout <<"Printing all Animals using using recursion\n";
     animalList -> printRecursive();
}

int main(int argc, char *argv[])
{
    int option;
    Animal_List anmList; 
    
    do
    {
        option = menu();
        switch (option)
		{
               case 1:
               	{
               		addPet(&anmList);
				}
                    break;
               case 2: 
			   {
			   		anmList.printList();
			   		//printIteration(&anmList);
			   }
                    break;
               case 3:
			   {
			   		anmList.printRecursive();
					//printRecursively(&anmList); 
			   }         
			   		break;
               case 4:
                    break;
               default: cout <<"Invalid option, closing the program!\n";
        }
        system("PAUSE");
        }while (option != 4);
    return EXIT_SUCCESS;
}
