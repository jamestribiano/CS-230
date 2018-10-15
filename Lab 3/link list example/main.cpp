#include <cstdlib>
#include <iostream>
#include "list.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{		
	list test;
	
	test.addNode(1);
	test.addNode(2);
	test.addNode(3);
	test.printList();
	
	test.delNode(1);
	test.printList();
	
	
	system("PAUSE");
	return 0;
}
