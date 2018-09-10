#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;
#include"ballInfo.h"

int main(int argc, char *argv[])
{
    int choice;
    int flag = 0;
    while(flag == 0)
    {
        cout<<"\t---Main Menu---";
        cout<<"\n1. Add a new ball.";
        cout<<"\n2. Show all balls that have a diamater greater than 10mm.";
        cout<<"\n3. Show all balls that have a diamater less than or equal to 10mm.";
        cout<<"\n4. Show all balls that are smooth.";
        cout<<"\n5. Show all balls that are rough.";
        cout<<"\n6. Show ball based on ID.";
        cout<<"\n7. Show how many balls are a specific color.";
        cout<<"\n8. Exit the program.";
        cout<<"\nEnter a number for what you want to do: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
				ball st1;
                st1.newBall();
                break;
			}
			case 2:
			{
				ball st1;
				st1.ballsAboveTen();
				break;
			}
            case 3:
            {
                ball st1;
                st1.ballsLessTen();
            	break;
			}
            case 4:
            {
				ball st1;
				st1.smoothBall();
                break;
			}
            case 5:
           	{
				ball st1;
				st1.roughBall();
            	break;
			}
			 case 6:
           	{
            	ball st1;
            	st1.findBall();
            	break;
			}
			 case 7:
           	{
            	ball st1;
            	st1.sameColorBall();
            	break;
			}
            case 8:
           	{
				flag = 1;
           		cout << "\n";
           		break;
			}
            default:
                cout<<"\nInvalid selection. Hit enter to return to the main menu.\n";
                exit(0);
        }
			if (flag == 1) 
	  		{
        		 break;
      		}
      
    }
    system("PAUSE");
    return 0;
}

