#include "dataManager.h"
#include <iostream>
using namespace std;

// constructor

dataManager::dataManager()
{
    course_array=new CourseRegistration*[max_number_of_courses];
    student_array=new student*[max_number_of_students];
    set_number_of_courses(0);
    set_number_of_student(0);
    for (int i = 0; i < max_number_of_courses; i++)
    {
        course_array[i] = NULL;
    }
    for (int i = 0; i < max_number_of_students; i++)
    {
        student_array[i] = NULL;
    }
}

// setter

void dataManager::set_course_array(CourseRegistration *x, int y)
{
    course_array[y] = x;
}
void dataManager::set_student_array(student *x, int y)
{
    student_array[y] = x;
}
void dataManager::set_number_of_student(int x)
{
    number_of_student=x;
}
void dataManager::set_number_of_courses(int x)
{
    number_of_courses=x;
}

// getters

CourseRegistration* dataManager::get_course_array(int x)
{
    return course_array[x];
}
student* dataManager::get_student_array(int x)
{
    return student_array[x];
}
int dataManager::get_number_of_student()
{
    return number_of_student;
}
int dataManager::get_number_of_courses()
{
    return number_of_courses;
}

// member function

bool dataManager::insertCourseRegistration(CourseRegistration *x)
{

    for (int i = 0; i < max_number_of_courses; i++)
    {
        if (course_array[i] == NULL)
        {
            course_array[i] = x;
            number_of_courses++;
        
            return true;
        }
    }
    
    return false;
}

bool dataManager::insertStudent(student *x)
{

    for (int i = 0; i < max_number_of_students; i++)
    {
        if (student_array[i] == NULL)
        {
            student_array[i] = x;
            number_of_student++;
            return true;

        }
    }

  return false;
}

bool dataManager::Delete(student *x)
{

    for (int i = 0; i < number_of_student; i++)
    {
        if (x == student_array[i])
        {
            student_array[i] = NULL;
            student_array[i]=student_array[number_of_student];
            number_of_student--;
            return true;
        }
    }
    return false;
}

bool dataManager::registering_to_Course(student *x, Course &y)
{
    

    x->set_array_of_course(&y);
    
    for(int i=0 ;i<number_of_courses;i++)
    {
        if((course_array[i]->get_courseregister()->getcourseName()==y.getcourseName())&&(course_array[i]->get_courseregister()->getcoursenumber()==y.getcoursenumber()))
        {
            course_array[i]->set_array_of_student(x, number_of_student);
        }
    }
    
    
    
    insertCourseRegistration(course_array[number_of_courses]);
    
    
    return true;
    
}

bool dataManager::dropping_a_Course(student *x, Course &y)
{
    x->set_array_of_course(NULL);
    Delete(x);
    
    return true;
}

int dataManager::courseEnrollment(Course &x)
{
    for(int i =0;i<get_number_of_courses();i++)
    {
        if ((x.getcourseName()==course_array[i]->get_courseregister()->getcourseName()&&(x.getcoursenumber()==course_array[i]->get_courseregister()->getcoursenumber())))
        {
            return course_array[i]->get_max_number_of_students();
        }
    }
    return 0;
}

void dataManager::studentCourses(int x)
{
    int counter=0;
    int credits=0;
    
    for(int i=0;i<number_of_student;i++)
    {
        if(x==student_array[i]->get_studentID())
        {
            credits=student_array[i]->get_student_credit();
            for(int j=0;j<6;j++)
            {
               
                if (student_array[i]->get_array_of_course(j)!=NULL) {
                    counter++;
                    
                }
                
            }
        }
    }
    
    cout<<endl<<"Student is taking "<<counter<<" course(s) and has "<<credits<<" credits .";
}

void dataManager::print()
{
    cout<<"Course list :";
    
    for(int i=0;i<number_of_courses;i++)
    {
        cout<<course_array[i]->get_courseregister()->getcourseName()<<" ( "<<course_array[i]->get_courseregister()->getcoursenumber()<<" )  ,"<<course_array[i]->get_courseregister()->getnumberofcredit()<<" credits.The lectures are on "<<course_array[i]->get_courseregister()->getlecturetime()->get_first_day()<<" and "<<course_array[i]->get_courseregister()->getlecturetime()->get_second_day()<<" at "<<course_array[i]->get_courseregister()->getlecturetime()->get_hour()<<" h.";
        cout<<endl<<"             ";
    }
    cout<<endl<<endl;
    
}
