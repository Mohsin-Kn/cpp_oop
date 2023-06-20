#include <iostream>

using namespace std;
 class tollbooth{
   private:
   unsigned int car;
   double money;
   public:
   tollbooth():car(0),money(0){}
   void payingcar(){
     car++;
     money+=50;
   }
   void nopayingcar(){
     car++;
   }
   void display(){
     cout<<"cars"<<car<<endl;
     cout<<"total money"<<money<<endl;
   }
   
 };
int main()

{



char ch,c;

tollbooth t;

do{

cout<<" 1 for paying \n 2 for nopaying \n 3 for exit \n";

cout<<"Enter choice \n";

cin>>ch;

switch(ch)

{

case'1':

t.payingcar();

cout<<"car added";

break;

case'2':

t.nopayingcar();

cout<<"car added";

break;

case'3':

t.display();

exit(0);

break;

}

cout<<"\n Do you want to continue";

cin>>c;

}

while(c=='y'||c=='Y');

return 0;

}
