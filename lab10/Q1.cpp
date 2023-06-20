#include <iostream>
#include"student info.h"
#include"student result.h"
using namespace std;
 

//function definitions
void std_basic_info::getBasicInfo(void)
{
    cout << "Enter student's basic information:" << endl;
    cout << "Name?: ";    cin >> name;
    cout << "Age?: ";     cin >> age;
    cout << "Gender?: ";cin >> gender;
}
 
void std_basic_info::putBasicInfo(void)
{
    cout << "Name: " << name << ",Age: " << age << ",Gender: " << gender << endl;
}

//function definitions
void std_result_info::getResultInfo(void)
{
    cout << "Enter student's result information:" << endl;
    cout << "Total Marks?: ";
    cin >> totalMarks;
    perc= (float)((totalMarks*100)/500);
    cout << "Grade?: ";
    cin >> grade;
}
 
void std_result_info::putResultInfo(void)
{
    cout << "Total Marks: " << totalMarks << ",Percentage: " << perc << ",Grade: " << grade << endl;
}
 
int main()
{
    //create object of derived class
    std_result_info std;
 
    //read student basic and result information
    std.getBasicInfo();
    std.getResultInfo();
 
    //print student basic and result information
    std.putBasicInfo();
    std.putResultInfo();
     
    return 0;
}
