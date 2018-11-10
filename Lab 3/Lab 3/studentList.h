//studentList.h
#include "Account.h"
#include<list>
#include<iterator>

using namespace std;
#ifndef STUDENTLIST_H
#define STUDENTLIST_H
class studentList
{
      public:
       studentList();
       void insertStudent(string first, string last, string id, int cr);
       void removeStudent(string key);
       void findStudent(string key);
       void showStudents();
       ~studentList();
      private:
       list <Account> *stuList;

      };
#endif
//constructor and destructor
studentList::studentList()
{
     stuList = new list <Account>; 
}   

studentList::~studentList()
{
     delete stuList;
}

void studentList::insertStudent(string first, string last, string id, int cr)
{
     Account* stuPTR;
     stuPTR = new Account;
     
     stuPTR -> setName(first, last);
     stuPTR -> setID(id);
    // stuPTR -> setCredits(cr); 
     
     stuList -> push_back(*stuPTR);
     
     delete stuPTR;
}

void studentList::showStudents()
{
     list <Account> :: iterator it;
     
     for (it = stuList -> begin(); it != stuList -> end(); ++it) 
     {
         cout <<it -> toString()<<"\n"
              <<"============================="<<endl;
     }
}

void studentList::removeStudent(string key)
{
     list <Account> :: iterator it;
     for (it = stuList -> begin(); it != stuList -> end(); ++it)
     {
         if (it -> match(key))
         {
                it = stuList -> erase(it);
                break;
         }
     }
}

void studentList::findStudent(string key)
{
     list <Account> :: iterator it;
     for (it = stuList -> begin(); it != stuList -> end(); ++it)
     {
         if (it -> match(key))
         {
                cout <<"Record Found!\n"
                     <<it ->toString()<<endl;
         }
     }
}
