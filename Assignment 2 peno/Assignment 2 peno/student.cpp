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
    set_studentname("No name");
    set_studentID(0);
    set_student_credit(0);
}

student::student(string x,int y,double z,Course *w){
    for (int i = 0; i < 6; i++)
    {
        array_of_course[i] = NULL;
    }
    set_studentname(x);
    set_studentID(y);
    set_student_credit(z);
    set_array_of_course(w);
    
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
void student::set_student_credit(double x)
{

    student_credit = x;
}

bool student::set_array_of_course(Course *x)
{
    
    for(int i=0;i<6;i++)
    {
        if (test_overlap(x) && array_of_course[i]==NULL && (x->getnumberofcredit()+student_credit)<=15 && i<6)
        {
            array_of_course[i] = x;
            student_credit=student_credit+x->getnumberofcredit();
           
            
//----------------------------------------------------------------------------------------------------------------------------
            cout<< " Your course num "<<i+1<<" was added , it is "<<x->getcourseName()<<endl;
            cout<< " You now have "<< student_credit <<" credits. "<<endl;
//----------------------------------------------------------------------------------------------------------------------------
            return true;
        }
       
    }
   
    cout<<"course not added to student file !!!";
    return false;
    
    
    
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

double student::get_student_credit()
{
    return student_credit;
}

Course* student::get_array_of_course(int x)
{
    return array_of_course[x];
}
// member function

bool student::test_overlap(Course *x){
    
    for (int j=0;j<6;j++)
    {
        if (array_of_course[j]==NULL) {
            return true;
        }
        if((array_of_course[j]->getlecturetime().get_first_day()==x->getlecturetime().get_first_day()||array_of_course[j]->getlecturetime().get_second_day()==x->getlecturetime().get_second_day())&&( array_of_course[j]->getlecturetime().get_hour()==x->getlecturetime().get_hour()))
        {
            return false;
        }
    }
    
    
    return true;
    
}

