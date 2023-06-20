#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

int main()
{
   int x=10;
   int y=15;
   int z=20;
   cout<<!(x>10)<<"!(x>10)"<<endl;
   cout<<(x<=5 || y<15)<<"(x<=5 )|| y<15"<<endl;
   cout<<((x!=5 && y!=z))<<"(x!=5) && (y!=z)"<<endl;
   cout<<((x>=z || x+y>=z))<<"(x>=z) || (x+y>=z)"<<endl;
   cout<<((x<=y-2) && (y>=z )|| (z-2!=20))<<"x<=y-2 && y>=z || (z-2!=20"<<endl;
   
   
   
   return 0;
}
