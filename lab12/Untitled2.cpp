#include<iostream>
using namespace std;

class Shapes{
	public:
		virtual void area()= 0;
};

class D2_shapes: public Shapes
{
	public:
		D2_shapes(){
            cout<<"======================================="<<endl<<endl;
			cout<<"default constructor of 2d_shapes "<<endl;
		}
		virtual void area()=0;
		~D2_shapes(){
            cout<<"======================================="<<endl<<endl;
			cout<<"destructoir of 2d_shapes "<<endl;
		}
};

class D3_shapes: public Shapes{
	public:
		D3_shapes(){
            cout<<"======================================="<<endl<<endl;
			cout<<"default constructor of 3d_shapes "<<endl;
		}
		virtual void area()=0;
		virtual void volume()=0;
		~D3_shapes(){
			cout<<"destructoir of 3d_shapes "<<endl;
            cout<<"======================================="<<endl<<endl;
		}
};

class Circle: public D2_shapes{
	public:
		int radius=3;

		Circle(){
            cout<<"======================================="<<endl<<endl;
			cout<<"this is default constructor of circle class "<<endl;
		}
		
		void area(){
			int c;
			c=2*(3.14)*radius;
			cout<<"the area of circle is "<<c<<endl;
		}
		~Circle(){
			cout<<"this is destrucotr of circle "<< endl;
            cout<<"======================================="<<endl<<endl;
		}
};

class Square: public D2_shapes{
	public:
		int side=5;

		Square(){
            cout<<"======================================="<<endl<<endl;
			cout<<"this is default constructor of square class "<<endl;
		}
		

		void area(){
			int s;
			s=side^2;
			cout<<"the area of square is "<<s<<endl;
		}
		~Square(){
			cout<<"this is destrucotr of square "<< endl;
            cout<<"======================================="<<endl<<endl;
		}
};


class Cube: public D3_shapes{
	public:
		int length=4;
		int width=3;
		int height=2;
		
		Cube(){
            cout<<"======================================="<<endl<<endl;
			cout<<"this is default constructor of Cube "<<endl;
		}
		
		void area(){
			int A;
			A=6*(length*width*height)^2;

			cout<<"the area of cube is "<<A<<endl;
		}
		void volume(){
			int V;
			V=length*width*height;
			cout<<"the volume of cube is "<<V<<endl;
		}
		~Cube(){
			cout<<"this is desturcutor of cube "<<endl;
            cout<<"======================================="<<endl<<endl;
		}
		
};

class Pyramid: public D3_shapes{
	public:
		int height=7;	
		int base=4;

		Pyramid(){
            cout<<"======================================="<<endl<<endl;
			cout<<"this is default constructor of pyramid "<<endl;
		}
		
		void area(){
			int Ap;
			Ap=(3.14)*base*(base+height^2);
			cout<<"the area of pyramid is "<<Ap<<endl;
		}
		void volume(){
			int V;
			V=base^2*(height/3);
			cout<<"the volume of pyramid is "<<V<<endl;
		}
		~Pyramid(){
			cout<<"this is desturcutor of pyramid "<<endl;
            cout<<"======================================="<<endl<<endl;
		}
		
};
int main()
{
	D2_shapes *d2;
	Circle C;
	d2=&C;
	d2->area();
	
	Square sq;
	d2=&sq;
	d2->area();
	
	D3_shapes *d3;
	Cube Cu;
    d3=&Cu;
    d3->area();
    d3->volume();

	Pyramid P;
    d3=&P;
    d3->area();
    d3->volume();

	return 0;
}
