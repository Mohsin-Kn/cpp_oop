#include<iostream>
using namespace std;

class Shapes{
	public:
		virtual float area()= 0;
    
};

class D2_shapes: public Shapes
{
	    public:
        	D2_shapes(){
            
			cout<<"default constructor of 2d_shapes "<<endl;
		}
		   ~D2_shapes(){
            
			cout<<"destructoir of 2d_shapes "<<endl;
		}

};

class Circle: public D2_shapes{
	public:
		int radius;

		Circle(int radius){
            this->radius=radius;
			cout<<"this is default constructor of circle class "<<endl;
		}
		
		float area(){
			return 2*(3.14)*radius;
		
		}
		~Circle(){
			cout<<"this is destrucotr of circle "<< endl;
           
		}
};

class Square: public D2_shapes{
	public:
		int side;

		Square(int side){
			
			this->side=side;
		}
			
   		float area(){
			return side*2;
		
		}
		~Square(){
			cout<<"this is destrucotr of square "<< endl;
           
		}
};

class D3_shapes: public Shapes{
	public:
		virtual float volume()=0;

};


class Cube: public D3_shapes{
	public:
		int length;
		int width;
		int height;
		
		Cube(int length,int width,int height){
			this->length=length;
			this->width=width;
			this->height=height;
		}
		
		
		float area(){
			
			return 6*(length*width*height)^2;
	
		}
		float volume(){
			return length*width*height;
		
		}
		~Cube(){
			cout<<"this is desturcutor of cube "<<endl;
         
		}
		
};

class Pyramid: public D3_shapes{
	public:
		int height;
		int base;

		Pyramid(int height,int base)
		{
			this->height=height;
			this->base=base;
		}
		
		float area(){
			return (3.14)*base*(base+height^2);
	
		}
		float volume(){
	
			return base^2*(height/3);
	
		}
		~Pyramid(){
			cout<<"this is desturcutor of pyramid "<<endl;
            
		}
		
};
int main()
{
	D2_shapes* d2_shapes[2];
	D3_shapes* d3_shapes[2];
	Circle circle(5);
	Square square(4);
	Cube cube(3,4,6);
	Pyramid pyramid(4,8);
	d2_shapes[0]=&circle;
	d2_shapes[1]=&square;
	d3_shapes[2]=&cube;
	d3_shapes[3]=&pyramid;
	
	cout<<"area of circle"<<d2_shapes[0]->area()<<endl;
	cout<<"area of square "<<d2_shapes[1]->area()<<endl;
	cout<<"area and volume of cube"<<d2_shapes[2]->area()<<"  "<<d3_shapes[2]->volume()<<endl;
	cout<<"area and volume of pyramid"<<d2_shapes[3]->area()<<"  "<<d3_shapes[3]->volume()<<endl;
	
	
	
	
}
