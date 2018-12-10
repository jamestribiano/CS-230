#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <fstream>
#include "shop.h"

using namespace std;

#ifndef ORDERS_H
#define ORDERS_H

class orders : public shop
{
	public:
		orders();
		void deliveryNeeded();
		void printItemsThatNeedDelivery();
		void printDeliveryListFile();
		void readFromDeliveryListFile();
		vector<string> order;
		vector<int> orderNumber;
		vector<string> arrivalDate;

	private:
		
	protected: 
		string deliveryItemName;
		int deliveryItemOrderID;
		string deliveryArrivalDate;
		
	
};

#endif
