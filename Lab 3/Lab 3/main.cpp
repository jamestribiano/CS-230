#include <cstdlib>
#include <iostream>
#include "Account.h"
#include "checkingList.h"
#include "savingsList.h"

using namespace std;

int menu()
{
    int choice;
    cout <<"\t\tMain Menu\n"
         <<"\t\t=========\n"
         <<"\t\t1. Add new checking account\n"
         <<"\t\t2. Add new savings account\n"
         <<"\t\t3. View all checking accounts\n"
         <<"\t\t4. View all savings accounts\n"
         <<"\t\t5. Remove a checking account\n"
         <<"\t\t6. Remove a savings account\n"
         <<"\t\t7. Find a checking account to edit\n"
         <<"\t\t8. Find a savings account to edit\n"
         <<"\t\t9. EXIT\n"
         <<"\tEnter your choice: ";
    cin >>choice;
    return choice;
}

int transactionMenu()
{
	int input;
	cout<<"\t\tTransaction Menu\n"
		<<"\t\t=========\n"
		<<"\t\t1. Withdraw from checking account\n"
		<<"\t\t2. Withdraw from savings account\n"
		<<"\t\t3. Deposit into checking account"
		<<"\t\t4. Deposit into savings account";
		cin >> input;
		return input;
}

void addCheckingAccount(checkingList* refList)
{
		 string first, last, id;
	     double bal;
     
     cout <<"Enter values and tab; except the last one, press enter one done!\n" 
          <<"First\tLast\tID\tBalance\n";
     cin >>first>>last>>id>>bal;
     
     refList -> insertCheckingAccount(first, last, id, bal);
}

void addSavingsAccount(savingsList* refList)
{
		 string first, last, id;
	     double bal;
     
     cout <<"Enter values and tab; except the last one, press enter one done!\n" 
          <<"First\tLast\tID\tBalance\n";
     cin >>first>>last>>id>>bal;
     
     refList -> insertSavingsAccount(first, last, id, bal);
}

void deleteCheckingAccount(checkingList* refList)
{
     string primaryKey;
     
     cout <<"the accounts ID to remove that record: ";
     cin >>primaryKey;
     
     refList -> removeCheckingAccount(primaryKey);
}

void deleteSavingsAccount(savingsList* refList)
{
     string primaryKey;
     
     cout <<"Enter the accounts ID to remove that record: ";
     cin >>primaryKey;
     
     refList -> removeSavingsAccount(primaryKey);
}

void findCheckingRecord(checkingList* refList)
{
	 string primaryKey;
	
     cout <<"Enter the accounts ID to retrieve that record: ";
     cin >>primaryKey;
     
     refList -> findCheckingAccount(primaryKey);
}

void findSavingsRecord(savingsList* refList)
{
     string primaryKey;
     
     cout <<"Enter the accounts ID to retrieve that record: ";
     cin >>primaryKey;
     
     refList -> findSavingsAccount(primaryKey);
}

int main(int argc, char *argv[])
{
    int option;
    checkingList checkList;
    savingsList saviList;
    Account ac();
    
    do
    {
        system("CLS");
        option = menu();
        switch (option)
        {
			
			   case 1:  
			   		{
			   			addCheckingAccount(&checkList);
					}
                    break;
               case 2:
					{
						addSavingsAccount(&saviList);
					}
											
                    break;
               case 3: 
               		{
   						//myList.showStudents();
			   			checkList.showAllCheckingAccounts();            	
			   		}
                    break;
               case 4:
               		{
               		    saviList.showAllSavingsAccounts();
					   //savingsList.showAllSavingsAccounts();
				   	}
                    break;
               case 5:
               		{
               	
				   		deleteCheckingAccount(&checkList);
				   	//	deleteStudent(&checkList)
					}
					   
            		break;
        	   case 6: 
        	   		{
        	   			deleteSavingsAccount(&saviList);
        	   		//	deleteStudent(&saviList)
					}
        	   		break;
        	   case 7:
        	   		{
        	   			findCheckingRecord(&checkList);
        	   			addCheckingAccount(&checkList);
						   //findRecord(&checkList);
					}
					break;
			   case 8:
					{
						findSavingsRecord(&saviList);
						
						//findRecord(&saviList);
					}
               case 9: cout <<"Closing the program, GoodBye!\n";
                    break;
               default: cout <<"Choice "<<option<<" is not valid!\n";
               
        }
        system("PAUSE");
    }while (option != 9 );
        
    return EXIT_SUCCESS;
}
