#include <iostream>
#include "course.h"
#include "lecturetime.h"
#include "student.h"
#include "CourseRegistration.h"
#include <cstring>

using namespace std;

int main()
{

    lecturetime lecture_info("Mardi","Mercredi",15) ;

    Course course_info ("COEN244","PROGRAMMING METHODOLOGY",3.0,lecture_info);

    student *peno;
    peno=new student("Penoelo_Thibeaud" ,40212017,11,&course_info);
    
    CourseRegistration Coen_244(course_info,30);
    
   Coen_244.set_array_of_student(peno,0);
    
    
    cout<<"You are trying to register for "<<Coen_244.get_courseregister().getcourseName()<<endl<<"Congratulation"<<Coen_244.get_array_of_student(0)->get_studentname()<<endl;
    
    cout<<"Student name : "<< peno->get_studentname() <<endl<< "Student id : "<< peno->get_studentID() <<endl<<"Student credit : "<< peno->get_student_credit() <<endl<<"course name : "<<peno->get_array_of_course(0)->getcourseName()<<endl <<"course number : "<<peno->get_array_of_course(0)->getcoursenumber()<<endl<<"course credit :"<<peno->get_array_of_course(0)->getnumberofcredit()<<endl<<"First day of class : "<<peno->get_array_of_course(0)->getlecturetime().get_first_day()<<endl<<"Second day of class : "<<peno->get_array_of_course(0)->getlecturetime().get_second_day()<<endl<<"The class is given at "<<peno->get_array_of_course(0)->getlecturetime().get_hour()<<":00 "<<endl ;

    
}
