#include<iostream>
#include <string>
using namespace std;
#include "student.h"
#include "course.h"
#include "session.h"

void fillStudents(student arg[], int size)
{
     for (int i = 0; i < size; i++)
     {
         cout <<"Student #"<<i+1<<endl;
         cout <<"=========="<<endl;
         cout <<"Enter this students ID: ";
         cin >>arg[i].stuID;
         cout <<"Enter the students first name: ";
         cin >>arg[i].fname;
         cout <<"Enter the students last name: ";
         cin >>arg[i].lname;
     }
}

void fillCourses(course c[], int size)
{
     for (int i = 0; i < size; i++)
     {
         cout <<"Course #"<<i+1<<endl;
         cout <<"=========="<<endl;
         cout <<"Enter the name of the course:  ";
         cin >>c[i].CourseName;
         cout <<"Enter the course ID: ";
         cin >>c[i].CourseID;
         cout <<"Enter the total number of credits for htis course: ";
         cin >>c[i].numberOfCredits;
     }
}

string CourseN(int choice, course courseInfo[])
{
   switch(choice)
   {
       case 1:
       	{
           return courseInfo[0].CourseID+" "+courseInfo[0].CourseName;
           break;
    	}
       case 2:
       	{
           return courseInfo[1].CourseID+" "+courseInfo[1].CourseName;
           break;
    	}
       case 3:
        {
		   return courseInfo[2].CourseID+" "+courseInfo[2].CourseName;
           break;
    	}
       case 4:
        { 
		   return courseInfo[3].CourseID+" "+courseInfo[3].CourseName;
           break;
    	}
       case 5:
        {
		   return courseInfo[4].CourseID+" "+courseInfo[4].CourseName;
           break;
		}
       case 6:
        {
		   return courseInfo[5].CourseID+" "+courseInfo[5].CourseName;
           break;
    	}
       case 7:
       	{
           return courseInfo[6].CourseID+" "+courseInfo[6].CourseName;
           break;
    	}
       case 8:
    	{
           return courseInfo[7].CourseID+" "+courseInfo[7].CourseName;
           break;
    	}
       case 9:
        {
		   return courseInfo[8].CourseID+" "+courseInfo[8].CourseName;
           break;
    	}
       case 10:
       	{
           return courseInfo[9].CourseID+" "+courseInfo[9].CourseName;
           break;
		}
       default:
           cout<<"Please enter a number between 1 and 10 for a valid choice."<<endl;
   }
}

int creditTotal(int choice, course creditCounter[])
{
   switch(choice)
   {
       case 1:
    	{
           return creditCounter[0].numberOfCredits;
           break;
    	}
       case 2:
       	{
           return creditCounter[1].numberOfCredits;
           break;
    	}
       case 3:
       	{
           return creditCounter[2].numberOfCredits;
           break;
    	}
       case 4:
       	{
           return creditCounter[3].numberOfCredits;
           break;
    	}
       case 5:
       	{
           return creditCounter[4].numberOfCredits;
           break;
		}
       case 6:
       	{
           return creditCounter[5].numberOfCredits;
           break;
    	}
       case 7:
       	{
           return creditCounter[6].numberOfCredits;
           break;
    	}
       case 8:
       	{
           return creditCounter[7].numberOfCredits;
           break;
    	}
       case 9:
       	{
           return creditCounter[8].numberOfCredits;
           break;
    	}
       case 10:
       	{
           return creditCounter[9].numberOfCredits;
           break;
		}
       default:
       	{
           cout<<"Enter a valid number of credits."<<endl;
   		}	
    }
}

void fillSession(student arg[], course c[], session s[])
{
   int c1, c2, c3, c4;
   string ch1, ch2, ch3, ch4;
   string startDate, endDate;
   int cr1, cr2, cr3, cr4;
  
   for (int i = 0; i < 4; i++)
   {
       for(int j = 0; j < 10; j++)
       {
           cout<<"class #"<<j+1<<" \t\t"<<c[j].CourseID<<" \t\t"<<c[j].CourseName<<" \t\t\t"<<"Credits: "<<c[j].numberOfCredits<<"\n\n";
       }
      
       cout<<"Enter the students first class: ";
       cin>>c1;
       ch1=CourseN(c1,c);
       cout<<"Enter the students second class: ";
       cin>>c2;
       ch2=CourseN(c2,c);
       cout<<"Enter the students third class: ";
       cin>>c3;
       ch3=CourseN(c3,c);
       cout<<"Enter the students fourth class: ";
       cin>>c4;
       ch4=CourseN(c4,c);      
      
       s[i].courseID=ch1+"\n"+ch2+"\n"+ch3+"\n"+ch4;
       cout<<"Enter the starting date for this course: ";
       cin>>startDate;
       s[i].startDate=startDate;
       cout<<"Enter the ending date for this course: ";
       cin>>endDate;
       s[i].endDate=endDate;
      
       cr1=creditTotal(c1, c);
       cr2=creditTotal(c2, c);
       cr3=creditTotal(c3, c);
       cr4=creditTotal(c4, c);
      
       s[i].totalCredits=cr1+cr2+cr3+cr4;
      
       c1=0;
       c2=0;
       c3=0;
       c4=0;
   }  
}

void print(student s[], course c[], session se[])
{
   for (int i = 0; i < 4; i++)
   {
       cout<<"Student ID: "<<s[i].stuID<<"\n"<<endl;
       cout<<"Student Name: "<<s[i].lname<<", "<<s[i].fname<<"\n"<<endl;
       cout<<"Course IDs: \n"<<se[i].courseID<<"\n"<<endl;
       cout<<"Start Date: \n"<<se[i].startDate<<"\n"<<endl;
       cout<<"End Date: \n"<<se[i].endDate<<"\n"<<endl;
       cout<<"Total Credits: "<<se[i].totalCredits<<"\n"<<endl;
   }
}

int main()
{
    //declare and initialize 4 students
    student stu[4];
    fillStudents(stu, 4);
  
    //declare and initialize 10 courses
    course courses[10];
    fillCourses(courses, 10);
  
    //assign 4 courses for each student
    cout<<"Select the courses for the student: "<<endl;
    
    session sessions[4];
    fillSession(stu, courses, sessions);
  
    //display a report showing each student with his/her courses
    //show the total number of credits for each student
    cout<<"Student's Class Information:' \n"<<endl;
    cout <<"=========="<<endl;
    print(stu, courses, sessions);
    cout <<"=========="<<endl;
  
  
    system("PAUSE");
    return 0;
}


