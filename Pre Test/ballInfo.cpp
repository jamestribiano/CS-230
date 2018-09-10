//Client.cpp
#include<string>
#include<iostream>
#include<fstream>
#include<istream>
#include<map>
#include<sstream>
#include <utility>
using namespace std;
using std::fstream; 
#include"ballInfo.h"

//Constructors
ball::ball()
{

}
ball::ball(string f)
{
	
}

void ball::newBall()
{
		//opens the file
		ofstream outfile;
		outfile.open("ballinfo.txt");
		
		cout<<"Creating new ball to file."<<endl;
		cout<<"What is the diameter in mm of the ball?"<<endl;
		cin>>ballSize;
		outfile << ballSize << endl;
        cout<<"What color is the ball?"<<endl;
		cin>>ballColor;
		outfile << ballColor << endl;
		cout<<"What is the texture of the ball? (Smooth or Rough)"<<endl;
		cin>>ballTexture;
		outfile << ballTexture << endl;
		cout<<"What is the number ID for this ball?"<<endl;
		cin>>ballID;
		outfile << ballID << endl;
		
		//closes the file
		outfile.close();		
}
void ball::ballsAboveTen()
{	
    //searches the text for the following:
	std::string content = 
    "11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30n";
    std::istringstream table(content);
    std::string row;
    std::string category;
    std::string word;
    const char delim = ' ';
    std::map<pair<std::string, std::string>, long> category_map;
    std::pair<std::string, std::string> cw_pair;
    long count;

    while (!table.eof())
    {
      
        getline(table, row);
        std::istringstream words(row);
        getline(words, category, delim);

      
        while (std::getline(words, word, delim)) {
            cw_pair = std::make_pair(category, word);

            if (category_map.count(cw_pair) > 0) {
                category_map[cw_pair] += 1;
            } else {
                category_map[cw_pair] = 1;
            }
        }
    }
   std::map<pair<std::string, std::string>, long>::iterator it;
   
   for (it = category_map.begin(); it != category_map.end(); ++it) {
       cw_pair = it->first;
       category = cw_pair.first;
       word = cw_pair.second;
       count = it->second;

       std::cout << "(" << category << ", " << word << ") => "
           << count << std::endl;
   }
}
void ball::ballsLessTen()
{	
//searches the text for the following:
    std::string content = 
    "10 9 8 7 6 5 4 3 2 1 0\n";
    std::istringstream table(content);
    std::string row;
    std::string category;
    std::string word;
    const char delim = ' ';
    std::map<pair<std::string, std::string>, long> category_map;
    std::pair<std::string, std::string> cw_pair;
    long count;

    while (!table.eof())
    {
       
        getline(table, row);
        std::istringstream words(row);
        getline(words, category, delim);
        while (std::getline(words, word, delim)) {
            cw_pair = std::make_pair(category, word);

            if (category_map.count(cw_pair) > 0) {
                category_map[cw_pair] += 1;
            } else {
                category_map[cw_pair] = 1;
            }
        }
    }

   std::map<pair<std::string, std::string>, long>::iterator it;

   for (it = category_map.begin(); it != category_map.end(); ++it) {
       cw_pair = it->first;
       category = cw_pair.first;
       word = cw_pair.second;
       count = it->second;

       std::cout << "(" << category << ", " << word << ") => "
           << count << std::endl;
   }
}
void ball::smoothBall()
{
//searches the text for the following:
    std::string content = 
    "texture smooth Smooth\n";

    std::istringstream table(content);
    std::string row;
    std::string category;
    std::string word;
    const char delim = ' ';
    std::map<pair<std::string, std::string>, long> category_map;
    std::pair<std::string, std::string> cw_pair;
    long count;

    while (!table.eof())
    {
  
        getline(table, row);
        std::istringstream words(row);
        getline(words, category, delim);
        while (std::getline(words, word, delim)) {
            cw_pair = std::make_pair(category, word);
            if (category_map.count(cw_pair) > 0) {
                category_map[cw_pair] += 1;
            } else {
                category_map[cw_pair] = 1;
            }
        }
    }
   std::map<pair<std::string, std::string>, long>::iterator it;

   for (it = category_map.begin(); it != category_map.end(); ++it) {
       cw_pair = it->first;
       category = cw_pair.first;
       word = cw_pair.second;
       count = it->second;

       std::cout << "(" << category << ", " << word << ") => "
           << count << std::endl;
   }
   
}
void ball::roughBall()
{
  //searches the text for the following:
    std::string content = 
    "texture rough Rough\n";
    std::istringstream table(content);
    std::string row;
    std::string category;
    std::string word;
    const char delim = ' ';
    std::map<pair<std::string, std::string>, long> category_map;
    std::pair<std::string, std::string> cw_pair;
    long count;

    while (!table.eof())
    {
        
        getline(table, row);
        std::istringstream words(row);
        getline(words, category, delim);

        while (std::getline(words, word, delim)) {
            cw_pair = std::make_pair(category, word);

            if (category_map.count(cw_pair) > 0) {
                category_map[cw_pair] += 1;
            } else {
                category_map[cw_pair] = 1;
            }
        }
    }

   std::map<pair<std::string, std::string>, long>::iterator it;

   for (it = category_map.begin(); it != category_map.end(); ++it) {
       cw_pair = it->first;
       category = cw_pair.first;
       word = cw_pair.second;
       count = it->second;

       std::cout << "(" << category << ", " << word << ") => "
           << count << std::endl;
   }
   
		
}
void ball::findBall()
{

}
void ball::sameColorBall()
{
//searches the text for the following:
    std::string content = 
    "colors red blue green yellow orange purple black white\n";

    std::istringstream table(content);
    std::string row;
    std::string category;
    std::string word;
    const char delim = ' ';
    std::map<pair<std::string, std::string>, long> category_map;
    std::pair<std::string, std::string> cw_pair;
    long count;

    while (!table.eof())
    {
        getline(table, row);
        std::istringstream words(row);
        getline(words, category, delim);
        while (std::getline(words, word, delim)) {
            cw_pair = std::make_pair(category, word);
            if (category_map.count(cw_pair) > 0) {
                category_map[cw_pair] += 1;
            } else {
                category_map[cw_pair] = 1;
            }
        }
    }
   std::map<pair<std::string, std::string>, long>::iterator it;

   for (it = category_map.begin(); it != category_map.end(); ++it) {
       cw_pair = it->first;
       category = cw_pair.first;
       word = cw_pair.second;
       count = it->second;

       std::cout << "(" << category << ", " << word << ") => "
           << count << std::endl;
   }
}
