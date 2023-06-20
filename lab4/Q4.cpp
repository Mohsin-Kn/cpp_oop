#include <iostream>
using namespace std;

int main() 
{
   int matrix1[5][5];
   int matrix2[5][5];
	int resul_matrix[5][5];
   int rows,colums;
   cout<<"enter number of rows : ";
   cin>>rows;
   cout<<"enter number of colums : ";
   cin>>colums;
   //first matrix elements enter 
   cout<<"enter "<<rows*colums<<" elements for matrix1 :"<<endl;
   for(int i =0; i<rows;i++){
        for(int j=0; j<colums;j++){
          cin>>matrix1[i][j];
        }
   }
  //second matrix enter
   cout<<"enter "<<rows*colums<<" elements for matrix2 :"<<endl;

   for(int i =0; i<rows;i++){
        for(int j=0; j<colums;j++){
          cin>>matrix2[i][j];
    }
   }
	for(int i=0;i<rows;i++){

		for(int j=0;j<colums;j++){

			resul_matrix[i][j]=matrix1[i][j]+matrix2[i][j];
    }

}

   //print first matrix
	cout<<"first matrix :"<<endl;
    for(int i =0; i<rows;i++){
        for(int j=0; j<colums;j++){
          cout<<matrix1[i][j]<<" ";
        }
	cout<<endl;
   }
//print second matrix
	cout<<"second matrix :"<<endl;
    for(int i =0; i<rows;i++){
        for(int j=0; j<colums;j++){
          cout<<matrix2[i][j]<<"  ";

        }
		cout<<endl;
   }
  //print resultant matrix
    cout<<"sum of two matrix1 and matrix2 :"<<endl;
	 for(int i =0; i<rows;i++){
        for(int j=0; j<colums;j++){
          cout<<resul_matrix[i][j]<<"  ";
}
     cout<<endl;
}
  return 0;  
}
   
   
