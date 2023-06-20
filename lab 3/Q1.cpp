#include<iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int rows; int cols;
    cout << "Enter the number of rows you want: "<<endl; 
	cin >> rows;
    cout << "Enter the number of columns : "<<endl; 
    cin >> cols;
    int position=1; 

    while(position<=rows*cols)
    {
        for(int col=1; col<=cols; col++, position++)
        {
            cout<<"  "<<position*number<<" ";
        }
        cout<<endl;
    }
    
    system("pause");	
	return 0;
}
