#include<iostream>


using namespace std;
int main()

{
	 int num,num1,num2,num3,num4,num5;
	 cout<<"enter 5 digits number :"<<endl;
	 cin>>num;
	 cout<<"number is :"<<num<<endl;
//	 % used to give remainder so it will give 5 so num1 is equal to 5
	 num1=num%10;
// it will give us 45 we used remainder upto two digits
	 num2=num%100;
// divide num2 by 10 will give 4 in 45 and remove 5,so we get two digits in reverse 54,num3 is equal to 4
	 num3=num2/10;
// now divide num by 100 it will give 123 so num4 becomes 123	 
	 num4=num/100;
// now divide num4 by 10 it will give 3 as remainder the num5 will update so num5=3
	 num5=num4%10;
	 cout<<"last 3 digits in reverse :"<<num1<<num3<<num5<<endl;
  
	
	return 0;
	
}
