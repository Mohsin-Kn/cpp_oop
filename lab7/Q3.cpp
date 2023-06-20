#include <iostream>
using namespace std;
class complex{
    private:
        float real;
	    float img;
    public:
        void set(float x, float y){
            real=x;
            img=y;
        }
        void disp(){
            cout<<real<<" + "<<img<<"j"<<endl;
        }
        complex sum(complex c){
            complex n;
	        n.real = real + c.real;
	        n.img = img + c.img;
	        return n;
        }
};
int main()
{
    complex comp1,comp2,comp3;
	comp1.set(3.2,8.9);
	comp2.set(7.3,6.5);
	comp3=comp1.sum(comp2);
	cout<<"Complex Number 1: "<<endl;
	comp1.disp();
	cout<<"Complex Number 2: "<<endl;
	comp2.disp();
	cout<<"Complex Number 3: "<<endl;
	comp3.disp();


    return 0;
}
