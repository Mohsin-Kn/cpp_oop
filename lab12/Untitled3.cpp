#include <iostream>

using namespace std;
class Department {

  public:
    Department() {
      //constructor is defined
      cout << "Constructor Invoked for Department class" << endl;
    }
    
    ~Department() {
      //destructor is defined
      cout << "Destructor Invoked for Department class" << endl;
    }
};
class Employee {
	int height;

  public:
    Employee(int height) {
	   this->height=height;

      cout<<this->height;
      //constructor is defined
      cout << "Constructor Invoked for Employee class" << endl;
    }
    
    ~Employee() {
      //destructor is defined
      cout << "Destructor Invoked for Employee class" << endl;
    }
};
int main(void) {
  Department d1; //creating an object of Department  
  Employee e2(3); //creating an object of Employee
  return 0;
} 

