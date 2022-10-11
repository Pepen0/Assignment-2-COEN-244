#ifndef CourseRegistration_hpp
#define CourseRegistration_hpp
#include "course.h"
#include "student.h"
#include <cstring>

using namespace std;

class CourseRegistration
{
public:
    // constroctor
    CourseRegistration();
    CourseRegistration(Course *,int);
    CourseRegistration(Course *,int ,student*);
    
    // setter

    void set_courseregister(Course*);
    void set_max_number_of_students(int);
    void set_number_of_students(int);
    void set_array_of_student(student *, int);

    // getter
    Course *get_courseregister();
    int get_max_number_of_students();
    int get_number_of_students();
    student *get_array_of_student(int);
    
    
    
    
    // member function

private:
    Course *courseregister;
    int max_number_of_students;
    int number_of_students;
    student **array_of_student;
};
#endif
