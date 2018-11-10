//checkingList.h
#include "Account.h"
#include <list>
#include <iterator>
#include <algorithm> 
using namespace std;

#ifndef CHECKINGLIST_H
#define CHECKINGLIST_H
class checkingList
{
      public:
       checkingList();
       void insertCheckingAccount(string first, string last, string id, double bal);
       void removeCheckingAccount(string key);
       void findCheckingAccount(string key);
       void showAllCheckingAccounts();
       void alterCheckingAcccount(string key);
       ~checkingList();
      private:
       list <Account> *chekList;

      };
#endif
//constructor and destructor
checkingList::checkingList()
{
	chekList = new list <Account>;
}

checkingList::~checkingList()
{
	delete chekList;
}

void checkingList::insertCheckingAccount(string first, string last, string id, double bal)
{
	Account* chekPTR;
	chekPTR = new Account;
	
	chekPTR -> setName(first, last);
	chekPTR -> setID(id);
	chekPTR -> setBalance(bal);
	
	chekList -> push_back(*chekPTR);
	
	delete chekPTR;
}

void checkingList::alterCheckingAcccount(string key)
{
	
}
void checkingList::showAllCheckingAccounts()
{
	list <Account> :: iterator it;
	
	     for (it = chekList -> begin(); it != chekList -> end(); ++it) 
     {
         cout <<it -> toString()<<"\n"
              <<"============================="<<endl;
     }
}

void checkingList::removeCheckingAccount(string key)
{
	list <Account> :: iterator it;
	
	for (it = chekList -> begin(); it != chekList -> end(); ++it)
     {
         if (it -> match(key))
         {
                it = chekList -> erase(it);
                break;
         }
     }
}

void checkingList::findCheckingAccount(string key)
{
	list <Account> :: iterator it;
	
     for (it = chekList -> begin(); it != chekList -> end(); ++it)
     {
         if (it -> match(key))
         {
                cout <<"Record Found!\n"
                     <<it ->toString()<<endl;
         }
         	for (it = chekList -> begin(); it != chekList -> end(); ++it)
     {
         if (it -> match(key))
         {
                it = chekList -> erase(it);
                break;
         }
     }
        cout<<"Enter everything the same except what needs to be changed: "<<endl;
     }
}
