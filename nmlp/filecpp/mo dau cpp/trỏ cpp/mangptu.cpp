#include <iostream>
using namespace std;
int main() {
     int x;
     cout<<"nhap so hang ";
     cin>>x;
   int **matran = new int *[x] ;

   for (int i=0 ; i< x; i++) {
      int n;
      cout<<"nhap so cot cua hang "<<i<<" = ";
      cin>>n;
      matran[i]= new int [n] ;
      for (int j=0 ; j<n ; j++)
         cin>>matran[i][j];
   }
   for (int i= 0; i<x ; i++) {
      
      for (int j= 0; j<matran[i][0];j++)
      cout<<matran[i][j] ;
   }
   for (int i=0; i<x; i++) {
      delete[] matran[i] ;
   }
   delete[] matran;
   
}