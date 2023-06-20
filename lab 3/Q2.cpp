#include <iostream>
using namespace std;
int main()
{
       double num1,num2,ans;
       char op,ch;
       do {
            cout<<"Enter first number";
			cin>>num1;
			cout<<"second number: ";
			cin>>num2;
			cout<<" Operator ";
			cin>>op;
            
            cout<<endl;
            switch (op)
            {
            case '+':  
			ans=num1+num2;  
			break;
        	case '-':  
			ans=num1-num2;  
			break;
            case '*': 
			ans=num1*num2;  
			break;
            case '/':  
			ans=num1/num2; 
			break;
            default:  
			ans=0;
              }
              cout<<"Answer = "<<ans<<endl;
              cout<<"Do another(Enter y/n) ?";
              cin>>ch;
       } while (ch != 'n');
      
	   return 0;
}
