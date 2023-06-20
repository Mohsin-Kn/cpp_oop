#include<iostream>
using namespace std;
int* arrayFunction(int n)
{
    int* arr=new int[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return arr;
}
int main()
{
    int n;
    cout<<"Enter number of elements in the array ";
    cin>>n;
    int* ar=arrayFunction(n);
    cout<<"\nElements of array are : ";
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    delete[] ar;
}

