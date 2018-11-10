//Account.h
#include<string>
using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
      public:
         Account();
         void setName(string first, string last);
         void setID(string id);
         void setBalance(double bal);
         void updateBalance(double amount);
         string toString() const;
         bool match(string id) const;
         
      private:
         string first_name;
         string last_name;
         string client_id;
         double balance;
         double amount;
      };

#endif
