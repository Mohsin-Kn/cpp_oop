#include<iostream>

using namespace std;

class A{
	
   public:
	
     void print(){
	cout<<"its here"<<endl;
}
};


class B: public A{
	public:
	
      void print(){
	
       cout<<"its here 2"<<endl;
	
}
	
	

};

class C:public B{
	public:
	void print(){
	cout<<"its here 3"<<endl;
    
    B::print();
}
  //  B::print();
};

int main(){
	C c; 
    c.B::print();


return 0;
}
