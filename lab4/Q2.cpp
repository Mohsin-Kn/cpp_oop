#include<iostream>

using namespace std;
int passbyvalue(int num)

{     
	 num=num*num*num;
	return num;
	
}

int passbyreference(int &num)

{   
    num=num*num*num;
	return num;
	
}

int main()
{
    int a=5;
    cout<<" pass by value :"<<passbyvalue(a)<<endl;
	
	int b=5;
	cout<<" pass by reference :"<<passbyreference(b)<<endl;
	cout<<"\n";
	cout<<"num1 :"<<a;
	cout<<"\n";
	cout<<"num2 :"<<b;
	return 0;
}
