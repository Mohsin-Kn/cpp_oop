#include <iostream>
using namespace std;

int main(){

    int a,b;
    int *ptrA = &a;
    int *ptrB = &b;

    cout << "enter the value of a : ";
    cin >> a;

    cout << "enter the value of b : ";
    cin >> b;

    cout << "The value of (a,b) is (" << a << "," << b << ")" << endl;
    cout << "The value of (ptrA,ptrB) is (" << *ptrA << "," << *ptrB << ")" << endl;
    cout << "The value of (ptrA,ptrB) is (" << ptrA << "," << ptrB << ")" << endl;
    
    return 0;
}
