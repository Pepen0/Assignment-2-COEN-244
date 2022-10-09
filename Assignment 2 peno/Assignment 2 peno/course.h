#ifndef Course_hpp
#define Course_hpp
#include <iostream>
#include "lecturetime.h"
#include <cstring>
using namespace std;

class Course
{
public:
    
    Course(string,string,double,lecturetime);
    void setcoursenumber(string);
    void setcourseNames(string);
    void setnumbercredit(double);
    void setlecturetime(lecturetime);

    string getcoursenumber();
    string getcourseName();
    double getnumberofcredit();

    lecturetime getlecturetime();

private:
    string courseNumber;
    string courseName;
    double numbercredit;
    lecturetime time;
};
#endif
