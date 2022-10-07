#include "CourseRegistration.h"

#include <iostream>
using namespace std;

// constructor------------------------------------------------

//CourseRegistration::CourseRegistration()
//{
  //  for (int i = 0; i < max_number_of_students; i++)
  //  {
  //      array_of_student[i] = NULL;
   // }
//}

// setter

void CourseRegistration::set_courseregister(Course x)
{
    courseregister = x;
}
void CourseRegistration::set_max_number_of_students(int x)
{
    max_number_of_students = x;
}
void CourseRegistration::set_number_of_students(int x)
{
    number_of_students = x;
}
void CourseRegistration::set_array_of_student(student &x, int y)
{
//    array_of_student[y] = x;---------------------------------------->
}

// getters

Course CourseRegistration::get_courseregister()
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
//student CourseRegistration::*get_array_of_student(int x)
//{
//    return array_of_student[x];---------------------------------------->
//}

// member function
