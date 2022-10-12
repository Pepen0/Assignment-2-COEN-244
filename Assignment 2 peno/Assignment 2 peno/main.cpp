#include <iostream>
#include "course.h"
#include "lecturetime.h"
#include "student.h"
#include "CourseRegistration.h"
#include "dataManager.h"
#include <cstring>

using namespace std;

int main()
{

    int choice=0;
    
    dataManager *university;
    Course *Course_data;
    CourseRegistration *class_datas;
    student *student_data;
    lecturetime *schedule;
    university=new dataManager;
   
    cout<<"Welcome to the data manager "<<endl;
    while (choice!=9) {
        
        cout<<endl<<"1 )Create course  "<<endl;
        cout<<"2 )Create student file  "<<endl;
        cout<<"3 )delete student file  "<<endl;
        cout<<"4 )Register student to course"<<endl;
        cout<<"5 )Droping a course "<<endl;
        cout<<"6 )Course Enrollment "<<endl;
        cout<<"7 )Display student info "<<endl;
        cout<<"8 )Display course liste "<<endl;
        cout<<"9 )End program "<<endl;
        cout<<endl<<"Enter your choice : ";
        cin>>choice;
        
        switch (choice) {
            case 1:
            {
                int student_amount;
                string course_number;
                string course_name;
                double number_of_credit;
                string day_1;
                string day_2;
                int course_time;
                
                cout<<"How many student can join that course ? ";
                cin>>student_amount;
                cout<<endl<<"Enter course number : ";
                cin>>course_number;
                cout<<endl<<"Enter course name : ";
                cin>>course_name;
                cout<<endl<<"Enter course credit : ";
                cin>>number_of_credit;
                cout<<endl<<"Enter first day : ";
                cin>>day_1;
                cout<<endl<<"Enter second day : ";
                cin>>day_2;
                cout<<endl<<"Enter course hour : ";
                cin>>course_time;
                
                schedule=new lecturetime(day_1,day_2,course_time);
                Course_data=new Course(course_number,course_name,number_of_credit,schedule);
                class_datas=new CourseRegistration(Course_data,student_amount);
                if (university->insertCourseRegistration(class_datas)) {
                    cout<<endl<<endl<<"----- Course successfully created -----"<<endl<<endl;
                }else{
                    cout<<endl<<endl<<"----- Course not created -----"<<endl<<endl;
                }
                
                
                break;
            }
                
            case 2:
            {
                string student_name;
                int student_ID = 0;
                
                cout<<endl<<endl<<"---Ready to create the student file--- "<<endl<<endl;
                cout<<endl<<"What is the student name :";
                cin>>student_name;
                cout<<endl<<"What is the student ID :";
                cin>>student_ID;
                student_data=new student(student_name,student_ID);
                
                if ( university->insertStudent(student_data)) {
                    cout<<endl<<endl<<"----- Student successfully created -----"<<endl<<endl;
                }else{
                    cout<<endl<<endl<<"----- Student not created -----"<<endl<<endl;
                }
               
                
                break;
            }
                
            case 3:
            {
                
                string student_name;
                int student_ID = 0;
                double student_credits = 0.0;
                cout<<endl<<endl<<"---Ready to remove the student file--- "<<endl<<endl;
                cout<<endl<<"What is the student name :";
                cin>>student_name;
                cout<<endl<<"What is the student ID :";
                cin>>student_ID;
                cout<<endl<<"What is the student amount of credit : ";
                cin>>student_credits;
                
                student_data=new student(student_name,student_ID);
                if (university->Delete(student_data)) {
                    cout<<endl<<endl<<"----- Student successfully deleted -----"<<endl<<endl;
                }else{
                    cout<<endl<<endl<<"----- Student not deleted -----"<<endl<<endl;
                }
                
                
                break;
                
            }
                
            case 4:
            {
                int choice;
                int choice1;
                
                
                cout<<endl<<endl<<"---Ready to register the student to the course---"<<endl<<endl;
               
                for(int i=0 ;i<university->get_number_of_student();i++)
                {
                    cout<<endl<<"Student "<<i+1<<") "<<university->get_student_array(i)->get_studentname()<<" ";
                }
                cout<<endl<<"select the student to register :";
                cin>>choice;
                choice--;
                
                for(int i=0 ;i<university->get_number_of_courses();i++)
                {
                    cout<<endl<<"Course "<<i+1<<") "<<university->get_course_array(i)->get_courseregister()->getcourseName()<<" ( " <<university->get_course_array(i)->get_courseregister()->getcoursenumber()<<" )";
                }
                cout<<endl<<"select the course to register :";
                cin>>choice1;
                choice1--;
                
               
                if ( university->registering_to_Course(university->get_student_array(choice), *university->get_course_array(choice1)->get_courseregister())) {
                    cout<<endl<<endl<<"----- Student successfully added to course -----"<<endl<<endl;
                }else
                {
                    cout<<endl<<endl<<"----- Student was not added to course -----"<<endl<<endl;
                }
                
                
                break;
            }
                
            case 5:
            {
                int choice;
                int choice1;
                cout<<endl<<endl<<"---Ready to drop the student from the course---"<<endl<<endl;
                
                for(int i=0 ;i<university->get_number_of_student();i++)
                {
                    cout<<endl<<"Student "<<i+1<<") "<<university->get_student_array(i)->get_studentname()<<" ";
                }
                
                cout<<endl<<"select the student to delete :";
                cin>>choice;
                choice--;
                
                for(int j=0;j<6;j++)
                {
                    if(university->get_student_array(choice)->get_array_of_course(j)!=NULL)
                    {
                        cout<<endl<<"Course "<<j+1<<") "<<university->get_student_array(choice)->get_array_of_course(j)->getcourseName()<<" ";
                    }
                    
                    cout<<endl<<"select the course to delete :";
                    cin>>choice1;
                    choice1--;
                    
                    
                    if (university->dropping_a_Course(university->get_student_array(choice), *university->get_student_array(choice)->get_array_of_course(choice1))) {
                        cout<<endl<<endl<<"----- Student successfully removed from course -----"<<endl<<endl;
                    }else
                    {
                        cout<<endl<<endl<<"----- Student was not removed from course -----"<<endl<<endl;
                    }

                    cout<<endl ;
                }
                
                
                
                break;
            }
                
            case 6:
            {
                int choice;
                
                for(int i=0 ;i<university->get_number_of_courses();i++)
                {
                    cout<<endl<<"Course "<<i+1<<") "<<university->get_course_array(i)->get_courseregister()->getcourseName()<<" ( " <<university->get_course_array(i)->get_courseregister()->getcoursenumber()<<" )";
                }
                cout<<endl;
                cout<<"select the course to display student count :";
                cin>>choice;
                choice--;
                
               cout<<endl<<university->courseEnrollment(*university->get_course_array(choice)->get_courseregister())<<" students are registered to this class "<<endl ;
                
                break;
            }
               
            case 7:
            {
                int student_ID;
                
                cout<<endl<<"What is the students ID ? ";
                cin>>student_ID;
                
                university->studentCourses(student_ID);
                
                break;
            }
                
            case 8:
            {
                university->print();
                break;
            }
                
            case 9:
            {
                cout<<"program will be terminate"<<endl;
                //destroy all object
                break;
            }
               
            default:
                cout<<"Please enter one of the following choice "<<endl;
                break;
                
        }
        
    }
    
}
