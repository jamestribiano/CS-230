//savingsList.h
#include "Account.h"
#include <list>
#include <iterator>
using namespace std;

#ifndef SAVINGSLIST_H
#define SAVINGSLIST_H
class savingsList
{
      public:
       savingsList();
       void insertSavingsAccount(string first, string last, string id, double bal);
       void removeSavingsAccount(string key);
       void findSavingsAccount(string key);
       void showAllSavingsAccounts();
       ~savingsList();
      private:
       list <Account> *savList;

      };
#endif

//constructor and destructor
savingsList::savingsList()
{
	savList = new list <Account>;
}

savingsList::~savingsList()
{
	delete savList;
}

void savingsList::insertSavingsAccount(string first, string last, string id, double bal)
{
	Account* savPTR;
	savPTR = new Account;
	
	savPTR -> setName(first, last);
	savPTR -> setID(id);
	savPTR -> setBalance(bal);
	
	savList -> push_back(*savPTR);
	
	delete savPTR;
}

void savingsList::showAllSavingsAccounts()
{
	list <Account> :: iterator it;
	
	     for (it = savList -> begin(); it != savList -> end(); ++it) 
     {
         cout <<it -> toString()<<"\n"
              <<"============================="<<endl;
     }
}

void savingsList::removeSavingsAccount(string key)
{
	list <Account> :: iterator it;
	
	for (it = savList -> begin(); it != savList -> end(); ++it)
     {
         if (it -> match(key))
         {
                it = savList -> erase(it);
                break;
         }
     }
}

void savingsList::findSavingsAccount(string key)
{
	list <Account> :: iterator it;
	
     for (it = savList -> begin(); it != savList -> end(); ++it)
     {
         if (it -> match(key))
         {
                cout <<"Record Found!\n"
                     <<it ->toString()<<endl;
         }
     }
              	for (it = savList -> begin(); it != savList -> end(); ++it)
     {
         if (it -> match(key))
         {
                it = savList -> erase(it);
                break;
         }
     }
        cout<<"Enter everything the same except what needs to be changed: "<<endl;
}
