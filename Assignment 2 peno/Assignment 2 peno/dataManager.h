#ifndef dataManager_hpp
#define dataManager_hpp
#include "CourseRegistration.h"
#include "student.h"
#include "course.h"
#include <cstring>

using namespace std;

class dataManager
{
public:
    // constroctor
    dataManager();

    // setter

    void set_course_array(CourseRegistration *, int);
    void set_student_array(student *, int);
    void set_number_of_student(int);
    void set_number_of_courses(int);

    // getter

    CourseRegistration *get_course_array(int);
    student *get_student_array(int);
    int get_number_of_student();
    int get_number_of_courses();
    
    // member function

    bool insertCourseRegistration(CourseRegistration *);
    bool insertStudent(student *);
    bool Delete(student *);
    bool registering_to_Course(student *, Course &);
    bool dropping_a_Course(student *, Course &);
    int courseEnrollment(Course &);
    void studentCourses(int);
    void print();

private:
    int max_number_of_courses = 100;
    int number_of_courses = 0;
    int max_number_of_students = 2000;
    int number_of_student = 0;
    CourseRegistration **course_array;
    student **student_array;
};
#endif
