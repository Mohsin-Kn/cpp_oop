#include <iostream>

using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        this->hours = 0;
        this->minutes = 0;
        this->seconds = 0;
    };
    Time(int hours, int minutes, int seconds)
    {
        this->hours = hours;
        this->minutes = minutes;
        this->seconds = seconds;
    };
    int getHours()
    {
        return this->hours;
    };
    int getMinutes()
    {
        return this->minutes;
    };
    int getSeconds()
    {
        return this->seconds;
    };
    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    };
Time operator +(Time d2) const {
    int H = hours + d2.hours ; 
    if(H >=24){
        H -= 24 ; 
    }
    int M = minutes + d2.minutes;
    if(M>=60){
        M-=60;
        H ++;
    }
    int S = seconds + d2.seconds ; 
    if(S>=60){
        S -= 60 ; 
        M ++;
    }
    return Time(H,M,S);}
};

int main()
{
    Time time1(12, 40, 30);
    Time time2(21, 23, 43);
    Time time3;
    time3=time1+time2;
    time3.display();
    return 0;
}
