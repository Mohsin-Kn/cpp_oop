
#include <iostream>
#include <string>
using namespace std;

int main()
{ 
    int salary,net_salary;
    float perc;
    cout<<"enter your salary :"<<endl;
    cin>>salary;
 
    if(salary >= 10000 && salary <20000)
   
    { 
        net_salary =salary-1000;
        cout<<"your salary :"<<net_salary<<endl;
    }
    else if(salary >=20000)
    
    {  
        perc=0.07;
        net_salary=perc*salary;
        cout<<"your net salary :"<<net_salary<<endl;
    }
    else 
    {
        cout<<"your salary :"<<salary<<"\n No Deduction :"<<endl;
    }
    return 0;
}
