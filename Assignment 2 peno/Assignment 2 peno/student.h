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
    student(string,int);
    student(string,int,Course*);


    // setter

    void set_studentname(string);

    void set_studentID(int);

    void set_student_credit();

    bool set_array_of_course(Course *);

    // getter

    string get_studentname();

    int get_studentID();

    double get_student_credit();

    Course *get_array_of_course(int x);

    // member function
    
    bool test_overlap(Course *);

    

private:
    string studentname;

    int studentID;

    double student_credit;

    Course *array_of_course[6];
};
#endif
