#include<iostream>
#include<cmath>

using namespace std;
int main()

{
    float r,v;
	cout<<"enter radius :"<<endl;
	cin>>r;
	
//	M_PI constant already declared in cmath library
	v=4*M_PI*(pow(r,3))/3;
	cout<<"volume of sphere :"<<v<<endl;
		
	
	return 0;
	
}
