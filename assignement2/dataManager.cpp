#include "dataManager.h"
#include <iostream>
using namespace std;

// constructor

dataManager::dataManager()
{
    for (int i = 0; i < max_number_of_courses; i++)
    {
        course_array[i] = NULL;
    }
    for (int i = 0; i < max_number_of_students; i++)
    {
        student_array[i] = NULL
    }
}

// setter

void dataManager::set_course_array(CourseRegistration &x, int y)
{
    course_array[y] = x;
}
void dataManager::set_student_array(student &x, int y)
{
    student_array[y] = x;
}

// getters

CourseRegistration dataManager::*get_course_array(int x)
{
    return course_array[x];
}
student dataManager::*get_student_array(int x)
{
    return student_array[x];
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

            //----do the interface with cout course created ----------------
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

            //----do the interface with cout course created ----------------
        }
    }

    return false;
}

bool dataManager::Delete(Student *x)
{

    for (int i = 0; i < number_of_student; i++)
    {
        if (x == student_array[i])
        {
            student_array[i] = NULL;
            number_of_student--;
            return true;
            //----do the interface with cout course deleted ----------------
        }
    }
    return false;
}

bool dataManager::registering_to_Course(Student *x, Course &y)
{
    for (int i = 0; i < max_number_of_courses; i++)
    {
        if (y == course_array[i])
        {
            // verify if lecture time dont overlaps
            // veryfy the amount of student credit/course
            // set the student in course
        }
    }
}
bool dataManager::registering_to_Course(Student *, Course &) {}
int dataManager::courseEnrollment(Course &) {}
void dataManager::studentCourses(int) {}
void dataManager::print() {}