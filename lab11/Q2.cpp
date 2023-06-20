#include <iostream>
using namespace std;

class Brain {
	protected:
		string brainCondition;
	
	public:
		Brain(){
			this->brainCondition = "Unknown";
		}	
		Brain(string cond){
			this->brainCondition = cond;
		}
		void print(){
			cout<<"Brain Condition is: "<<this->brainCondition<<endl;
		}
};
class Heart {
	protected:
		string heartCondition;
	public:
		Heart(){
			this->heartCondition = "Unknown";
		};		
		Heart(string cond){
			this->heartCondition = cond;
		}
		void print(){
			cout<<"Heart Condition is: "<<this->heartCondition<<endl;
		}
};
class Leg {
	protected:
		string legCondition;
	
	public:
		Leg(){
			this->legCondition = "Unknown";
		}		
		Leg(string cond){
			this->legCondition = cond;
		}
		void print(){
			cout<<"Legs Condition are: "<<this->legCondition<<endl;
		}
};

class Person {
	private:
		string name;
		int age;
		Brain b;
		Heart h;
		Leg l;
	public:
		Person(string name, int age, Brain b, Heart h, Leg l){
			this->name = name;
			this->age = age;
			this->b = b;
			this->h = h;
			this->l = l;
		}
		void print(){
			cout<<"Name of the person: "<<this->name<<endl;
			cout<<"Age of the person: "<<this->age<<endl;
			b.print();
			h.print();
			l.print();			
		}
};
int main(){
	Brain b("just perfect");
	Heart h("normal");
	Leg l("fit");
	Person p("mohsin", 23,b, h, l );
	p.print();
}
