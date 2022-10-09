#include <iostream>
#include "course.h"
#include "lecturetime.h"
#include "student.h"
#include <cstring>

using namespace std;

int main()
{

    lecturetime lecture_info("Mardi","Mercredi",15) ;

    Course course_info ("COEN244","PROGRAMMING METHODOLOGY",3.0,lecture_info);

   
    
    cout <<"course name : "<<course_info.getcourseName()<<endl <<"course number : "<<course_info.getcoursenumber()<<endl<<"course credit :"<<course_info.getnumberofcredit()<<endl<<"First day of class : "<<course_info.getlecturetime().get_first_day()<<endl<<"Second day of class : "<<course_info.getlecturetime().get_second_day()<<endl<<"The class is given at "<<course_info.getlecturetime().get_hour()<<":00 "<<endl ;

    
}
