
#include<iostream>

using namespace std;

class number{
	public:
	   int num;
    public:
	int result;
    bool iswhole(){
	 if(num>=0){
	    return true;
}
     return false;
}

    bool ispositive(){
	if(num>0){
	  return true;
}
    return false;
}
    void showfactorial(){
	cout<<"the number : "<<num<<endl;
    cout<<"its factorial :"<<result<<endl;
}

    public:
	 void factorial(){
	    if(iswhole()==true){
	       if(ispositive()==false){
	         result=1;
}           
			else{
	            result=1;
                for(int i=1;i<=num;i++){
	            result*=i;
                
}
                
} 
            showfactorial();
}
        else{
	      cout<<"\n invalid number :";
}
}
	
};

int main()
{
	number f1;
    cout<<"enter a number :";
    cin>>f1.num;
    f1.factorial();
   
}
