#include <cstdlib>
#include <stdlib.h>
#include <fstream>
#include <ostream> 
#include <iostream>
#include"Dog.h"
#include"Cat.h"
#include"Service.h"
using namespace std;

int menu()
{
    int choice;
    cout <<"   Main Menu\n"
         <<"===============\n"
         <<"1. Enter a cat\n"
         <<"2. Enter a dog\n"
         <<"3. View all services on all animals from the file\n"
    	 <<"4. Print everything to the file.\n"    
		 <<"5. Exit\n"
         <<"Enter your choice: ";
    cin >>choice;
    return choice;
}

void animalInfo(Animal* ptr)
{
     string data;
     cout <<"Enter the animal name: ";
     cin >>data;
     ptr ->setPetName(data);
     cout <<"Enter the owner's first name: ";
     cin >>data;
     ptr ->setOwnerName(data);
}
void myService(Service* srv, Animal* anPTR)
{
     string option[3]={"Rabies", "Distemper", "Fleas"};
     int choice;
     do
     {
         system("CLS");
         cout <<"Service choices\n";
         for (int i = 0; i < 3; i++)
             cout <<i+1<<" "<<option[i]<<endl;
         cout <<"Enter your choice: ";
         cin >>choice;
     }while (choice < 1 || choice > 3);
     srv ->setInformation(anPTR, option[choice - 1]);
}

int main(int argc, char *argv[])
{
    Service services[100];
    Cat cats[100];
    Dog dogs[100];
	Service s1;
	
    int serviceCount = 0;
    int catCount = 0;
    int dogCount = 0;
   
    int option;
    do
    {
        system("CLS");
        option = menu();
        switch(option)
        {
             case 1:
				{
                  //use the array fo cats to enter the cat's info
                  animalInfo(&cats[catCount]);
                  //update a service for that cat
                  myService(&services[serviceCount], &cats[catCount]);
                  //increment the cat count and the service count
                  catCount++;
                  serviceCount++;
				}
                  break;
             case 2:
				{
                   animalInfo(&dogs[dogCount]);
                   myService(&services[serviceCount], &dogs[dogCount]);
                   dogCount++;
                   serviceCount++;
				}
                   break;
                  
             case 3: //print all services
                {  
					system("CLS");
					ifstream readingFromFile;
				    readingFromFile.open("animals.txt", ios::in);
				     
				    string testVal;
					if(readingFromFile.is_open())
					{
						while(!readingFromFile.eof())
						{
					
					    readingFromFile>>testVal;
						cout <<"\n" << testVal<<endl;
						}
					}
    					readingFromFile.close();
  
                }
			 break;
			        
            case 4: 
			{
				ofstream file;
				file.open("animals.txt", ios::app);
        		for (int i = 0; i < serviceCount; i++)
			{
                 
		     	 file<<services[i].report()<<"\n"<<endl;
    		}
				file.close();       
			}
				break;
		case 5:
			{
				 cout <<"Goodbye!\n";
			}
             	break; 
             	default: cout <<option<<" is not a valid option!\n";
				break;
             
    }
        
	system("PAUSE");
    }while (option !=5);
    
    return 0;
}
