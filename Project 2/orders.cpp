#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <fstream>
#include <algorithm> 
#include "shop.h"
#include "orders.h"

using namespace std;

//constructor
orders::orders()
{
	
}

void orders::deliveryNeeded()
{
	cout<<"Enter the name of the item that needs a delivery: "<<endl;
	cin >>deliveryItemName;
	order.push_back(deliveryItemName);
	
	cout<<"Enter the delivery ID of the item: "<<endl;
	cin >>deliveryItemOrderID;
	orderNumber.push_back(deliveryItemOrderID);
	
	cout<<"Enter the arrival date of the item: "<<endl;
	cin >>deliveryArrivalDate;
	arrivalDate.push_back(deliveryArrivalDate);
}

void orders::printItemsThatNeedDelivery()
{
	int iter;
	
	cout<<"Delivery Information:";
	cout<<"\n"<<endl;
	
	cout<<"Delivery Order:"<<endl;
    for (vector<string>::const_iterator iter = order.begin();
    iter != order.end(); ++iter)
    cout << *iter << endl;
    
    cout<<"Delivery Order Number:"<<endl;
    for (vector<int>::const_iterator iter = orderNumber.begin();
    iter != orderNumber.end(); ++iter)
    cout << *iter << endl;
    
    cout<<"Delivery Arrival Date (D/M/Y):"<<endl;
    for (vector<string>::const_iterator iter = arrivalDate.begin();
    iter != arrivalDate.end(); ++iter)
    cout << *iter << endl;
    
}

void orders::printDeliveryListFile()
{
	ofstream deliveryFile;
	deliveryFile.open("delivery_list.txt");
	
	//Below are the loops to print to the file:
	
	//prints item name to file
	int iter;
	
	deliveryFile<<"Delivery Order:"<<endl;
    for (vector<string>::const_iterator iter = order.begin();
    iter != order.end(); ++iter)
    deliveryFile << *iter << endl;
    
    deliveryFile<<"Delivery Order Number:"<<endl;
    for (vector<int>::const_iterator iter = orderNumber.begin();
    iter != orderNumber.end(); ++iter)
    deliveryFile << *iter << endl;
    
    deliveryFile<<"Delivery Arrival Date:"<<endl;
    for (vector<string>::const_iterator iter = arrivalDate.begin();
    iter != arrivalDate.end(); ++iter)
    deliveryFile << *iter << endl;
    
    deliveryFile.close();
}

void orders::readFromDeliveryListFile()
{
	//reads from teh file and prints it to the screen
	ifstream in("delivery_list.txt");
	string line;
	while (getline(in, line)) 
	{
		cout << line <<endl;
	}
	
}
