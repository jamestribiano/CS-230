//client.h
#include<string>
#include <map>

class ball
{
		private:
		int ballSize;
		int x = 10;
		//char ballSize[25];
		char ballColor[25];
        char ballTexture[25];
        char ballID[25];
        
		float savingsBalance;
        float checkingBalance;
        
		public:
			//Defualt constructor
			ball();
			//overloaded constructors
			ball(string);
		
			//Other functions
			void newBall();
	        void ballsAboveTen();
	        void ballsLessTen();
	        void smoothBall();
	        void roughBall();
	        void findBall();
	        void sameColorBall();
};	
