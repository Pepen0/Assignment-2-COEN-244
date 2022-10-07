#include <iostream>
#include "course.h"
#include "lecturetime.h"
#include "student.h"
#include <cstring>

using namespace std;

int main()
{

    lecturetime lecture_info("mardi","mercredi",15) ;
    
    cout<<"Vos cour sont "<<lecture_info.get_first_day()<<" et "<<lecture_info.get_second_day()<<" a "<<lecture_info.get_hour()<<"h. "   ;
    
    
    
    
    
}
