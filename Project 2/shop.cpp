//shop.cpp
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <fstream>
#include <bits/stdc++.h>
#include "shop.h"
using namespace std;

//constructor:
shop::shop()
{
	
}

void shop::insertStockItem()
{
	//instering name of item into the shop
	cout<<"Enter the name of the item: "<<endl;
	cin >>itemName;
	itemN.push_back(itemName);
	
	
	//inserting the item id into the shop
	if (y <= y)
	{
		cout<<"The id for this item is: " <<y;
		cout<<endl;
		itemIDS.push_back(y);
		y = y +1;	
	}

	//instering price of the item into the shop
	cout<<"Enter the price of the item: "<<endl;
	cin >> priceofthisitem;
	price.push_back(priceofthisitem);
	
	//instering total amount of the item into the shop
	cout<<"Enter total amount of stock of the item: "<<endl;
	cin >>totalStockOfItem;
	stock.push_back(totalStockOfItem);
	
	//instering price of the item into the shop
	cout<<"Dose this item need a delivery? (Enter 'yes' or 'no'.)"<<endl;
	cin >>deliveryDate;
	delivery.push_back(deliveryDate);
}

void shop::print()
{
		//print function for item name
		cout<<"Item Name: "<<endl;
		int iter;
    	for (vector<string>::const_iterator iter = itemN.begin();
        iter != itemN.end(); ++iter)
    	cout << *iter << endl;
    	
    	//print function for itemID;
		cout<<"ItemID: "<<endl;
    	for (vector<int>::const_iterator iter = itemIDS.begin();
        iter != itemIDS.end(); ++iter)
    	cout << *iter << endl;
    	
    	//print function for price
    	cout<<"Price for this item: "<<endl;
    	for (vector<double>::const_iterator iter = price.begin();
        iter != price.end(); ++iter)
    	cout << *iter << endl;
    	
    	//print function for item stock
		cout<<"Remaining Stock: "<<endl;
    	for (vector<double>::const_iterator iter = stock.begin();
        iter != stock.end(); ++iter)
    	cout << *iter << endl;
    	
    	//print function for if another deliver is needed
    	cout<<"Do we need another delivery: "<<endl;
    	for (vector<string>::const_iterator iter = delivery.begin();
        iter != delivery.end(); ++iter)
    	cout << *iter << endl;
}

void shop::printToFile()
{
	ofstream shopFile;
	shopFile.open("shop_information.txt");
	
	//Below are the loops to print to the file:
	
	//prints item name to file
	int iter;
	
	shopFile <<"Item Name: "<<endl;
    for (vector<string>::const_iterator iter = itemN.begin();
    iter != itemN.end(); ++iter)
    shopFile << *iter << endl;
    
    //print function for itemID;
	shopFile <<"ItemID: "<<endl;
    for (vector<int>::const_iterator iter = itemIDS.begin();
    iter != itemIDS.end(); ++iter)
    shopFile << *iter << endl;
    
    //prints price of the item to file
    shopFile <<"Price for this item: "<<endl;
    for (vector<double>::const_iterator iter = price.begin();
	iter != price.end(); ++iter)
    shopFile << *iter << endl;
    
    //prints stock of the item to file
	shopFile <<"Remaining Stock: "<<endl;
	for (vector<double>::const_iterator iter = stock.begin();
    iter != stock.end(); ++iter)
    shopFile << *iter << endl;
    
    //prints yes or no if an item needs to have a delivery to file
    shopFile <<"Do we need another delivery: "<<endl;
    for (vector<string>::const_iterator iter = delivery.begin();
    iter != delivery.end(); ++iter)
    shopFile << *iter << endl;
    
    shopFile.close();
    
}

void shop::readFromFile()
{
	//reads from teh file and prints it to the screen
	ifstream in("shop_information.txt");
	string line;
	while (getline(in, line)) 
	{
		cout << line <<endl;
	}
	
}

void shop::eraseFromStorage()
{
	cout<<"Enter the item ID of the item you would like to erase: "<<endl;
	cin >> x;
	
	//delete functions:
	itemN.erase(itemN.begin()+ x, itemN.end()+ x);
	itemIDS.erase(itemIDS.begin()+ x, itemIDS.end()+ x);
	price.erase(price.begin()+ x, price.end()+ x);
	stock.erase(stock.begin()+ x, stock.end()+ x);
	delivery.erase(delivery.begin()+ x, delivery.end()+ x);
}

void shop::editStorage()
{
	//alows the user to enter the id of the item to edit
	cout<<"Enter the item ID of the item you would like to edit: "<<endl;
	cin >> x;
	
	string temp;
	double tempInt;
	
	//starts to allow the user to edit the items
	cout<<"Enter the new name of the item:"<<endl;
	cin >>temp; 
	itemN.at(x) = temp;
	
	cout<<"Item id will remain: "<< x <<endl;
	
	cout<<"Enter the new price of the item:"<<endl;
	cin >>tempInt; 
	price.at(x) = tempInt;
	
	cout<<"Enter the new total stock of the item:"<<endl;
	cin >>tempInt; 
	stock.at(x) = tempInt;
	
	cout<<"Enter if the item needs to be delivered or not ('yes' or 'no'):"<<endl;
	cin >>temp; 
	delivery.at(x) = temp;
}

void shop::sortingByPrice()
{
	//functions to start soritng
	sort(price.begin(), price.end());
	sort(stock.begin(), stock.end());
	
	//prints after sorting
	cout<<"Sorted by Price from lowest price to highest: "<<endl;
	for (vector<double>::const_iterator iter = price.begin();
	iter != price.end(); ++iter)
	
	cout <<"$" << *iter << endl;
	
	cout<<"Sorted by Stock from lowest to highest: "<<endl;
	for (vector<double>::const_iterator iter = stock.begin();
	iter != stock.end(); ++iter)
	
	cout << *iter << endl;
}
