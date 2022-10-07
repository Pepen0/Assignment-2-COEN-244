#ifndef student_hpp
#define student_hpp
#include "course.h"
#include <cstring>

using namespace std;

class student
{
public:
    // constroctor
    student();

    // setter

    void set_studentname(string);

    void set_studentID(int);

    void set_student_credit(int);

    void set_array_of_course(Course &, int);

    // getter

    string get_studentname();

    int get_studentID();

    int get_student_credit();

    Course *get_array_of_course(int x);

    // member function

private:
    string studentname;

    int studentID;

    int student_credit;

    Course *array_of_course[6];
};
#endif
