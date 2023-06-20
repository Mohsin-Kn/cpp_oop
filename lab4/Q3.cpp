#include<iostream>

using namespace std;

int maxinteger(int arr[],int size)

{
		int large=arr[0];
		for(int i=0; i<size;i++)
			if(arr[i]>large)
				large=arr[i];
		
		return large;
}


int main(){
	
	int size;
	
	cout<<"enter size of array : ";
	cin>>size;
	cout << "-" << endl;
	int arr[size];
	for(int i=0;i<size;i++){
	 cin>>arr[i];
}
	 
	 cout<<"largest integer : "<<maxinteger (arr, size);
     

	
	return 0;
}
	
	
	
	
	
	
	
	

