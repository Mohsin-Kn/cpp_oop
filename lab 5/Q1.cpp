using namespace std;
#include<iostream>
#include<conio.h>
struct time{
 int hours,mint,sec;
};


int totalseconds(time t)

{ 
     int total_sec;
     total_sec=t.hours*3600+t.mint*60+t.sec;
     return total_sec;
	
}
int main()
{
	
 time t;
 
 cout<<"Enter the Hours:";
 cin>>t.hours;
 cout<<"Enter the minutes:";
 cin>>t.mint;
 cout<<"Enter seconds:";
 cin>>t.sec;
 cout<<"Your entered time is "<<t.hours<<":"<<t.mint<<":"<<t.sec<<endl;
 
 cout<<"Total second in your entered time is: "<<totalseconds(t);
 
 
}
