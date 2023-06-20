#include<iostream>
#include <conio.h>

using namespace std;
class toolboth
{             
                int total_cars,    total_paying,total_non_paying;
                double total_money,increment;
                public:
                toolboth()
                {   total_paying=0;
                    total_non_paying=0;
                                total_cars=0;
                                total_money=0;
                                increment=0;
                }
                void paying_car(int p){

                      
                                total_paying++;
                                total_money=50+total_money;
                                               
                }
                void non_paying()
                {
                          total_non_paying++;
                }
                void showpaying_cars()
                {
                                cout<<"total no of paying cars :              "<<total_paying<<endl;
                }
                     void show_nonpaying_cars()
                {
                                cout<<"total no of non_paying cars : "<<total_non_paying<<endl;
                }
                void display()
                {
                                cout<<"total no of car passed : "<<total_paying+total_non_paying<<endl;
                                cout<<"total money collected : "<<total_money<<"pkr"<<endl;
                }
};
int main(){
                int pay,m;
                toolboth t1;
                char chek;
                a:
                cout<<"To pass the car please pay 50 cents"<<endl;
                cin>>pay;
                if(pay==50)
                {
                                                t1.paying_car(pay);
                }
else{
                t1.non_paying();
                }
                b:
                                system("cls");
                cout<<"enter A to pass another car"<<endl;
                cout<<"enter B to view total paying cars"<<endl;
                cout<<"enter C  to view total non_paying cars"<<endl;
                cout<<"enter ESC to exit"<<endl;

                chek=getch();
                if(chek=='a' || chek=='A')
                {
               
                                goto a;
                }
                else if(chek=='b' || chek=='B')
                {
                                t1.showpaying_cars();
                                cout<<"\n\n";
                                cout<<"enter 1 to goto menu"<<endl;
                                cin>>m;
                                if(m==1)
                                {
                                                system("cls");
                                                goto b;
                                }
                                else{
                                                cout<<"invalid input";
                                }
                }
                else if(chek=='c' || chek=='C')
                {
                                t1.show_nonpaying_cars();
                                cout<<"\n\n";
                                cout<<"enter 1 to goto menu"<<endl;
                                cin>>m;
                                if(m==1)
                                {
                                                system("cls");
                                                goto b;
                                }
                                else{
                                                cout<<"invalid input";
                                }
                }
                else if((int)chek==27)
                {
                                system("cls");
                                t1.display();
                }
                else{
                                cout<<"invalid input"<<endl;
                }
}
