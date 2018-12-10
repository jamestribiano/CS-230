#include <iostream>
#include <vector>
using namespace std;
 
int lin_search(vector<int> myVector, int val)
{
    int key = -1;
    for (int i = 0; i < myVector.size(); i++)
    {
        if (myVector[i] == val)
        {
            key = i;
            break;
        }
    }
    return key;
}
 
int Binary_Search(vector <int> myVector,int l,int r,int target)
{
   int mid;
   if(l==r)
   {
  		if(myVector[l]==target)
   		return l;
   		else return 0;
   }
  
   mid=(l+r+1)/2;
   if(myVector[mid]==target)
   return mid;
   else if(myVector[mid]>target)
   return Binary_Search(myVector,l,mid-1,target);
   else return Binary_Search(myVector,mid+1,r,target);
  
}
int main()
{
   int key, searchedNumber, postion, num, val;
   int input = 0;
   vector<int> myVector;
   
  while(input != 1)
  {
   cout << "Enter the number of elements in the vector: ";
   cin >> num;
   cout<<"Enter the numbers that you would like to have in the vector Ie. 1 2 3 :"<<endl;
    for (int i = 0; i < num; i++)
    {
        cin >> val;
        myVector.push_back(val);
    }

   cout<<"Enter a number you would like to search for: "<<endl;
   cin >> searchedNumber;
   
   key = lin_search(myVector, searchedNumber);
   
   if (key != -1)
   {
        cout<<"Linear Search:";
		cout << "\nElement " << searchedNumber
                  << " is at position: " << ++key;
	}

    postion=Binary_Search(myVector,0,num,searchedNumber);
    if(postion)
    cout<<endl;
    cout<<"Binary Search:"<<endl;
    cout<<"The position of element " << searchedNumber
			<<" is at: " <<postion<<endl;
    
    
    cout << "Press '0' and enter to run again or just press '1' and hit enter to quit the program:" <<endl;
    cin.sync();
    cin >> input;
	}
	return 0;
}
