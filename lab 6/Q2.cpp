
#include<iostream>
#include<string>

using namespace std;

class laptop{
	private:
	    string brand;
        string model;
        int serial;
        string color;
        float price;
        float processorspeed;
        int ram;
        float screensize;
    public:
	void getlaptop(){
	cout<<"enter brand:"<<endl;
	cin>>brand;
    	cout<<"enter model:"<<endl;
    cin>>model;
	cout<<"enter serial:"<<endl;
    cin>>serial;
	cout<<"enter color:"<<endl;
    cin>>color;
	cout<<"enter price:"<<endl;
    cin>>price;
	cout<<"enter processorspeed:"<<endl;
    cin>>processorspeed;
	cout<<"enter ram:"<<endl;
    cin>>ram;
	cout<<"enter screensize:"<<endl;
    cin>>screensize;
}
     void display(){
	 cout<<"laptop brand :"<<brand<<endl;
     cout<<"laptop model :"<<model<<endl;
     cout<<"laptop serial :"<<serial<<endl;
	 cout<<"laptop color :"<<color<<endl;
	 cout<<"laptop price :"<<price<<endl;
	 cout<<"laptop processorspeed :"<<processorspeed<<endl;
	 cout<<"laptop ram :"<<ram<<endl;
	 cout<<"laptop screensize :"<<screensize<<endl;
}

    void updateram()
{
	if(ram<=4){
	cout<<"\n Update your ram :"<<ram<<endl;
}
    else{
	cout<<"its fine :"<<endl;
}
}
     

};

int main()
{
	
   laptop laptop1;
   laptop1.getlaptop();
   laptop1.display();
   laptop1.updateram();
   //laptop1.display();
}
