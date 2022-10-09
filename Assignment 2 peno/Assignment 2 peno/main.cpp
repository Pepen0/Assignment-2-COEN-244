#include <iostream>
#include "course.h"
#include "lecturetime.h"
#include "student.h"
#include <cstring>

using namespace std;

int main()
{

    lecturetime lecture_info("mardi","mercredi",15) ;

    Course course_info ("COEN244","PROGRAMMING METHODOLOGY",3.0,lecture_info);

    
}
