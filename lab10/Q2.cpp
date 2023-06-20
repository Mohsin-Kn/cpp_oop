#include<iostream>

using namespace std;

class Chef{
	string chicken,salad,SpecialDish;
    
    public:
	void print(){
	cout<<"chicken"<<" "<<"salad"<<" "<<" "<<"SpecialDish"<<endl;
}

};


class ItalianChef: public Chef{
	string pizza,pasta,SpecialDish;
    public:
    void print(){
	cout<<"pizza"<<" "<<"pasta"<<" "<<"specialdish"<<endl;
}
};


class ChineseChef: public ItalianChef{
	string friedRice;
public:
	void print(){
	cout<<"fried rice"<<endl;
   // Chef::print();
    //ItalianChef::print();
    
}
};

int main(){
	ChineseChef c1;
    c1.print();
    c1.Chef::print();
    c1.ItalianChef::print();
}
