#include <string>
using namespace std;
#ifndef SESSION_H
#define SESSION_H

struct session
   {
       int sessionID;
       string stuID;
       string courseID;
       string startDate;
       string endDate;
       int totalCredits;
   };
#endif
