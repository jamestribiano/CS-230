//Animal.h
#include<string>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Animal
{
      public:
             Animal();
			 void setPetInfo(string, string, string, string, string);
             string getPetInfo();
             
      private:
              string owner_firstname;
              string owner_lastname;
			  string pet_name;
			  string pet_type;
			  string pet_age;
			  
	  protected:
      };

Animal::Animal()
{
	setPetInfo("", "" ,"", "", "");
} 

void Animal::setPetInfo(string first, string last, string petname, string pettype, string petage)                   
{
	owner_firstname = first;
	owner_lastname = last;
	pet_name = petname;
	pet_type = pettype;
	pet_age = petage;
	
}

string Animal::getPetInfo()
{
	return "Owner Name: " + owner_firstname + " " + owner_lastname + "\n"
		 + "Pet Name: " + pet_name + "\n"
		 + "Pet Type: " + pet_type + "\n" 
		 + "Pet Age: " + pet_age + "\n"; 
}
#endif
