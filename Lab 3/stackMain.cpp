#include <iostream>
#include <string>
#include <stack>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int pCount, i;
	string a;
	
	stack<string> myPeople;
	cout <<"How many names would you like to add to the stack: "<<endl;
	cin >> pCount;

	for(i = 0; i < pCount; i++)
	{
		cout <<"Enter the name to enter into the stack: " <<endl;
		cin >> a;
		myPeople.push(a);
	}	
	
	cout << "Number of names on the stack before popping: " << myPeople.size() << endl;
	cout <<""<<endl;
	
	while(!myPeople.empty())
	{
		cout << "Popping " << myPeople.top() << endl;
		myPeople.pop();
	}
	
	cout<<""<<endl;
	cout << "Number of names on the stack after popping: " << myPeople.size() << endl;
	
	return 0;
}
