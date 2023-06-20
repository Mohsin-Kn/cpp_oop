#include<iostream>
#include<string>

using namespace std;

class employee{
	protected:
	string empName;
	int empNumber;
	
	public:
		employee(string empName,int empNumber){
		
		
		this->empName=empName;
		this->empNumber=empNumber;
		
}

    void display(){
    	cout<<empName<<endl;
    	cout<<empNumber<<endl;
	}
	
};

class manager: public employee{
	char title;
	double clubdues;
	public:
		manager(string empName,int empNumber,char title ,double clubdues):employee(empName,empNumber){
			
			this->title=title;
			this->clubdues=clubdues;
		}
		void display(){
			cout<<title<<endl;
			cout<<clubdues<<endl;
		}
};

class scientist: public employee{
	int pub;
	public:
		scientist(string empName,int empNumber,int pub):employee(empName,empNumber){
			this->pub=pub;
		}
      void display(){
    	cout<<pub<<endl;
    }
};

class programmer: public employee{
	double salary;
	string expertise;
	public:
		programmer(string empName,int empNmber,double salary,string expertise):employee(empName,empNumber){
			this->salary=salary;
			this->expertise=expertise;
		}
		void display(){
			cout<<salary<<endl;
			cout<<expertise<<endl;
		}
}; 

int main(){
	employee e1("m.khan",5456);
	manager m1("sameer", 123, 'T',8494.4);
	scientist s1("zayn",333,233);
	programmer p1("mohsin",87,73773,"self-motivation");
	e1.display();
	m1.display();
	s1.display();
	p1.display();
	
	return 0;
	
}
