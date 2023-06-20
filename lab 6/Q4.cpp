#include<iostream>

using namespace std;

class Complex{

public:
	
	int real;
	
	int imag;


void setvalue()

{
	
	cin>>real;
	
	cin>>imag;

}



void sumdisplay()

{
	
	cout<<real<<"+"<<imag<<"i"<<endl;

}
void subdisplay()

{
	
	cout<<real<<""<<imag<<"i"<<endl;

}
void sum(Complex c1, Complex c2)

{
	
	real=c1.real+c2.real;
	
	imag=c1.imag+c2.imag;

}
void subtraction(Complex c1, Complex c2)

{
	
	real=c1.real-c2.real;
	
	imag=c1.imag-c2.imag;

}

};

int main()

{
	
	Complex c1,c2,c3,c4;
	
	cout<<"Enter real and imaginary part of first complex number"<<endl;
	
	c1.setvalue();
	
	cout<<"Enter real and imaginary part of second complex number"<<endl;
	
	c2.setvalue();
	
	cout<<"Sum of two complex numbers is"<<endl;
	
	c3.sum(c1,c2);
	c4.subtraction(c1,c2);
	
	c3.sumdisplay();
	c4.subdisplay();

return 0;

}
