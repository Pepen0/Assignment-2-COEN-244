#ifndef lecturetime_hpp
#define lecturetime_hpp
#include <iostream>
#include <cstring>
using namespace std;

class lecturetime
{

public:
    
    lecturetime();
    lecturetime(string,string,int);
    
    void set_first_day(string);
    void set_second_day(string);
    void set_hour(int);

    string get_first_day();
    string get_second_day();
    int get_hour();

private:
    string firstday;
    string secondday;
    int hour;
};


#endif
