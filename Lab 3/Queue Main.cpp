#include <iostream>
#include <queue>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	queue<int> inputQ;
	int input, numInput;
	
	cout<<"How many numbers would you like to input into the queue: " <<endl;
	cin >> input;
	
	for(int i = 0; i < input; i++)
	{
		cout<<"What number would you like to input: "<<endl;
		cin >> numInput;
		cout<<"enqueuing: " << numInput << endl;
		inputQ.push(numInput);
	}
	
	cout <<"Queue infomration: "<<endl;
	cout <<"Size of the queue: " << inputQ.size() <<endl;
	cout <<"The back of the queue: " << inputQ.back() <<endl;
	cout <<""<<endl;
	
	cout<<"Dequeing out of the queue: "<<endl;
	while (!inputQ.empty())
	{
		cout <<"dequeing " << inputQ.front() << endl;
		inputQ.pop();
		
	}
	
	return 0;
}

