#include <cstdlib>
#include <iostream>
#include"Student.h"
#include"Student_List.h"
using namespace std;

Student::Student()
{
	setPetInfo("", "" ,"", "", "");
} 

void Student::setPetInfo(string first, string last, string petname, string pettype, string petage)                   
{
	owner_firstname = first;
	owner_lastname = last;
	pet_name = petname;
	pet_type = pettype;
	pet_age = petage;
	
}

string Student::getPetInfo()
{
	return "Owner Name: " + owner_firstname + " " + owner_lastname + "\n"
		 + "Pet Name: " + pet_name + "\n"
		 + "Pet Type: " + pet_type + "\n" 
		 + "Pet Age: " + pet_age + "\n"; 
}
