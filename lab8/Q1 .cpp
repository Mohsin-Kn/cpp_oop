#include <iostream>
using namespace std;

class Class1 {
private:
static int counter;
int seriel_number;

public:
Class1() {
seriel_number = ++counter;
}

void tell_number() {
cout << "I am object with seriel number " << seriel_number << endl;
}
static int totalObjects(void)
		{
			return counter;
		}
};


int Class1::counter = 0;

int main() {
Class1 obj1;
Class1 obj2;
Class1 obj3;
Class1 obj4;
Class1 obj5;
obj1.tell_number();
obj2.tell_number();
obj3.tell_number();
obj4.tell_number();
obj5.tell_number();
//cout<<Class1::counter;
cout<<Class1::totalObjects()<<endl;
//cin.get();
}
