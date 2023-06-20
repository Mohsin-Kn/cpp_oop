#include<iostream>
using namespace std;
class Rectangle 
{ 	private:
 		float length;
		float breadth;
 	public:
	 
	     Rectangle() {
	     	length=0;
	     	breadth=0;
	     	
		 }	
		 Rectangle(int size){
		 	length=size;
		 	breadth=size;
		 }
 	     Rectangle(float l,float b){
 	     	length=l;
 	     	breadth=b;
		}
		void getarea(){
			cout<<"area = "<<length*breadth<<endl;
		}
		  
		 void setlength(float);
		 void setbreadth(float); 
		 float area();
		 void show();
		 int sameArea(Rectangle);
};
void Rectangle::setlength(float len)
 {
  	length = len;
} 
void Rectangle::setbreadth(float br)
 {
  	breadth = br;
 } 

    	

 float Rectangle::area()
 { 
 	return length * breadth;
 } 
 void Rectangle::show()
  { 
  	cout << "Length: " << length << " breadth: " << breadth;
 }
 
  int Rectangle::sameArea(Rectangle second)
{ 

   	float areaf = length * breadth;
	float areas = second.length * second.breadth; 
	
	if (areaf == areas)
	 		return 1;
	return 0; 
}
 int main()
  { 
    Rectangle r1,r2(3,6),r3(4);
    r1.getarea();
    r2.getarea();
    r3.getarea();
  	Rectangle first;
	Rectangle second;
	first.setlength(5);
	first.setbreadth(2.5);
	second.setlength(5);
	second.setbreadth(18.9);
	cout << "First rectangle: ";
	first.show();
	cout << endl << "Area: " << first.area()<< endl;
	cout << "Second rectangle: ";
	second.show();
	cout << endl << "Area: " << second.area()<< endl;
	if (first.sameArea(second))
		cout << "Rectangles have the same area\n"; 
	else 		
	    cout << "Rectangles do not have the same area\n"; 
	first.setlength(5);
	first.setbreadth(18.9); 
	cout << "First rectangle: ";
	first.show();
    cout << endl << "Area: " << first.area() << endl;
	cout << "Second rectangle: ";
	second.show();
	cout << endl << "Area: " << second.area()<< endl;
	if (first.sameArea(second)) 
		cout << "Rectangles have the same area\n";
	else 
		cout << "Rectangles do not have the same area\n";
	getchar(); 
	return 0;
}
