#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "shop.h"
#include "orders.h"

using namespace std;
using std::vector;
using std::string;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu()
{
    int choice;
    system("CLS");
    cout <<"\t\tStock Checker Main Menu\n"
         <<"\t\t=========\n"
         <<"\t\t1. Add an item to the shops stock.\n"
         <<"\t\t2. Sorting - Price and total stock from lowest to highest.\n"
         <<"\t\t3. Edit an item from the shop.\n"
         <<"\t\t4. Print Options.\n"
		 <<"\t\t5. Delivery Options.\n"
		 <<"\t\t9. EXIT\n"
         <<"\tEnter your choice: ";
    cin >>choice;
    return choice;
}

int editingMenu()
{
    int choice;
    system("CLS");
    cout <<"\t\tEditing Item Menu\n"
         <<"\t\t=========\n"
         <<"\t\t1. Edit an item from the shop.\n"
         <<"\t\t2. Delete an item from the shop.\n"
         <<"\tEnter your choice: ";
    cin >>choice;
    return choice;
}

int printMenu()
{
    int choice;
    system("CLS");
    cout <<"\t\tPrinting Menu\n"
         <<"\t\t=========\n"
         <<"\t\t1. Print all shop infomration to the terminal.\n"
         <<"\t\t2. Print all all shop infomration to a file.\n"
         <<"\t\t3. Read all text from the file.\n"
         <<"\tEnter your choice: ";
    cin >>choice;
    return choice;
}


int deliveryMenu()
{
    int choice;
    system("CLS");
    cout <<"\t\tDelivery Menu\n"
         <<"\t\t=========\n"
         <<"\t\t1. Add an item to the shipment list.\n"
         <<"\t\t2. Print all items from the shipment list.\n"
         <<"\t\t3. Print all items from shipment list to a file.\n"
         <<"\t\t4. Read from the shipment file.\n"
         <<"\tEnter your choice: ";
    cin >>choice;
    return choice;
}

int main(int argc, char** argv) 
{
	int mainMenuOptions;  
	int editingOptions;  
    int printOptions;
    int deliveryOptions;
    
    shop shop;
    orders deli;
   do
    {
        mainMenuOptions = menu();
        switch (mainMenuOptions)
		{
               case 1:
               	{
               		shop.insertStockItem();
				}
                    break;
               case 2: 
			   {
			   		//sorting
			   		shop.sortingByPrice();
				   
			   }
                    break;
               case 3:
			   {
			   		editingOptions = editingMenu();
					switch (editingOptions)
			   		{
			   			case 1: 
			   			{
			   			 	shop.editStorage();
						}
						break;
						case 2:
						{
							shop.eraseFromStorage();
							cout<<"Erased all infomration for selected item (make sure to print to file again.)"<<endl;
						}
						break;
					}
			   }         
			   		break;
				case 4:
				{
					printOptions = printMenu();
					switch (printOptions)
					{
						case 1:
							{
								shop.print();
							}
							break;
						case 2:
							{
								cout<<"Printing all entered information to a file."<<endl;
								shop.printToFile();
							}
							break;
						case 3:
							{
								shop.readFromFile();
							}
							break;
					}
				}
				case 6:
					{
						//this case has to be out of order to prevent menu error.
					}
					break;
				case 5:
				{
						deliveryOptions = deliveryMenu();
						
					switch (deliveryOptions)
					{
						case 1:
							{
								deli.deliveryNeeded();
							}
							break;
						case 2:
							{
								deli.printItemsThatNeedDelivery();
							}
							break;
						case 3:
							{
								deli.printDeliveryListFile();
							}
							break;
						case 4:
							{
								deli.readFromDeliveryListFile();
							}
							break;
					}
				}
               case 9:
                    break;
               default: cout <<"Invalid option, closing the program!\n";
        }
        system("PAUSE");
        }while (mainMenuOptions != 9);
	
	return 0;
}
