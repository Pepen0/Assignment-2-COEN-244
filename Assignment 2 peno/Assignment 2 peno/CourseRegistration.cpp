#include "CourseRegistration.h"

#include <iostream>
using namespace std;

// constructor------------------------------------------------
CourseRegistration::CourseRegistration(){
    
    set_courseregister(NULL);
    set_max_number_of_students(0);
    set_number_of_students(0);
    array_of_student=new student*;
    for(int i=0;i<get_max_number_of_students();i++)
    {
        set_array_of_student(NULL, i);
    }
    
}
CourseRegistration::CourseRegistration(Course *x,int y){
    
    set_courseregister(x);
    set_max_number_of_students(y);
    set_number_of_students(0);
    array_of_student=new student*;
    for(int i=0;i<get_max_number_of_students();i++)
    {
        set_array_of_student(NULL, i);
    }

}


// setter

void CourseRegistration::set_courseregister(Course *x)
{
    courseregister = x;
}
void CourseRegistration::set_max_number_of_students(int x)
{
    
    if (x>get_number_of_students())
    {
        max_number_of_students = x;
        array_of_student=new student*[get_max_number_of_students()];
    }
    
}
void CourseRegistration::set_number_of_students(int x)
{
    number_of_students = x;
}

void CourseRegistration::set_array_of_student(student *x, int y)
{
    array_of_student[y]=x;
    
    if(x!=NULL)
    {
        set_number_of_students(y+1);
    }
   
  
}
    
// getters

Course *CourseRegistration::get_courseregister()
{
    return courseregister;
}
int CourseRegistration::get_max_number_of_students()
{
    return max_number_of_students;
}
int CourseRegistration::get_number_of_students()
{
    return number_of_students;
}

student* CourseRegistration::get_array_of_student(int x)
{
    return array_of_student[x];
}


// member function
