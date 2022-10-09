#include "course.h"

using namespace std;

Course::Course(string x,string y,double w,lecturetime z)
{
    setcoursenumber(x);
    setcourseNames(y);
    setnumbercredit(w);
    setlecturetime(z);
}

void Course::setcoursenumber(string i)
{
    courseNumber = i;
}
void Course::setcourseNames(string i)
{
    courseName = i;
}

void Course::setnumbercredit(double i)
{
    numbercredit = i;
}

void Course::setlecturetime(lecturetime t)
{
    time()=t;
    
}

string Course::getcourseName()
{
    return courseName;
}
string Course::getcoursenumber()
{
    return courseNumber;
}
double Course::getnumberofcredit()
{
    return numbercredit;
}

lecturetime Course::getlecturetime()
{
    return time();
}
