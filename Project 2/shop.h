#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <fstream>

using namespace std;

#ifndef SHOP_H
#define SHOP_H

class shop
{
	public:
		//constructors
		shop();
		
		//all functions used
		void insertStockItem();
		void print();
		void printToFile();
		void readFromFile();
		void eraseFromStorage();
		void editStorage();
		void sortingByPrice();

		//all Vectors used
		vector<int> itemIDS;
		vector<string> itemN;
		vector<double> stock;
		vector<string> delivery;
		vector<double> price;
		
		int y = 0;	
		int x = 0;
		int deliveryNum;
	private:	
		
	protected:
		double totalStockOfItem;
		int itemId;
		string priceOfItem;
		string itemName;
		string deliveryDate;
		double priceofthisitem;
};

#endif
