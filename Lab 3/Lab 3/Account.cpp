//Account.cpp
#include"Account.h"
#include<sstream>
using namespace std;

Account::Account(){
  setName("", "");
  setID("");
  setBalance(0);
}

void Account::setName(string first, string last)
{
     first_name = first;
     last_name = last;
}
void Account::setID(string id){ client_id = id;}
void Account::setBalance(double bal){ balance = bal;}

bool Account::match(string id) const
{
     if (id == client_id)
        return true;
     else
        return false;
}

string Account::toString() const
{
       ostringstream bb;
       bb <<balance;
       string bal = bb.str();
       
       
       return "Account Holder Name: " + first_name + " " + last_name + "\n"
            + "Account ID: " + client_id + "\n"
            + "Balance $" + bal;
}

void Account::updateBalance(double amount)
{
	balance += amount;
}
