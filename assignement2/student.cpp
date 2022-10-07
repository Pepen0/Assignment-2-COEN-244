#include "student.h"

#include <iostream>
using namespace std;

// constructor

student::student()
{

    for (int i = 0; i < 6; i++)
    {
        array_of_course[i] = NULL;
    }
}

// setter

void student::set_studentname(string x)
{
    studentname = x;
}

void student::set_studentID(int x)
{

    studentID = x;
}
void student::set_student_credit(int x)
{

    student_credit = x;
}

void student::set_array_of_course(Course &x, int y)
{

    array_of_course[y] = x;
}

// getter

string student::get_studentname()
{
    return studentname;
}

int student::get_studentID()
{
    return studentID;
}

int student::get_student_credit()
{
    return student_credit;
}

Course student::*get_array_of_course(int x)
{
    return array_of_course[x];
}
// member function
