#include "lecturetime.h"
using namespace std;

void lecturetime::set_first_day(string n)
{
    firstday = n;
}
void lecturetime::set_second_day(string n)
{
    secondday = n;
}
void lecturetime::set_hour(int n)
{
    hour = n;
}

string lecturetime::get_first_day()
{
    return firstday;
}
string lecturetime::get_second_day()
{
    return secondday;
}
int lecturetime::get_hour()
{
    return hour;
}
