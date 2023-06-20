#include<iostream>
using namespace std;
int main()
 {
 	
   int arr[5] = {1, 9, 5, 98, 0};
   int *max=arr;
   for (int i = 1; i < 5; i++)
    {
	 if (arr[i]>*max)
	  
	   *max=arr[i];
        


       
	   
	   } 
    cout <<"max value :"<<*max<<endl;
	   
}
