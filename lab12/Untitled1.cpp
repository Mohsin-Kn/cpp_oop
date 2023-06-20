#include<iostream>

using namespace std;

class shape{
	protected:
		int dimension;
		
    public:
    	void getdimension(){
    		cout<<"enter"<<endl;
    		cin>>dimension;
		}
    	virtual float calculatearea()=0;
};

class circle:public shape {
	public :
		float calculatearea(){
			return dimension*dimension;
		}
};

class rectangle:public shape{
	public:
	float calculatearea(){
		return 3.12*dimension;
	}
	
};

int main(){
	shape *p;
	circle c1;
	rectangle r1;
	p=&c1;
	p->getdimension();
	cout<<p->calculatearea();
	cout<<"done";
	p=&r1;
	p->getdimension();
	cout<<p->calculatearea();
	
}
