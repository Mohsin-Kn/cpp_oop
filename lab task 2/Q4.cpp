#include<iostream>


using namespace std;
int main()

{
	string fullname;
	cout<<"enter full name :"<<endl;
	getline(cin,fullname);
	fullname[5]='_';
	fullname[10]='_';
	cout<<fullname<<endl;
	
	return 0;
	
}
