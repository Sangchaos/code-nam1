
#include <bits/stdc++.h>
using namespace std;
int main() {
     int x;
     cout<<"nhap so hang ";
     cin>>x;

     int * *matran = new int *[x] ;
   
     int *so_pt = new int [x] ;
     for (int i=0; i<x; i++) {
     cout<<"nhap so luong phan tu cua hang "<<i<<" ";
     cin>>so_pt[i];
     }

     for (int i=0; i<x; i++) {
        matran[i]= new int [so_pt[i]] ;
     }
     for (int i=0; i<x ; i++) {
        for (int j =0; j<so_pt[i]; j++) {
            cout << "Nhap gia tri cho matran[" << i << "][" << j << "]: ";
            cin>>matran[i][j];
        }
     }

     for (int i=0; i<x ; i++) {
        for (int j =0; j<so_pt[i]; j++) {
            cout<<matran[i][j]<<" ";
        }
        cout<<endl ;
     }
      for (int i=0; i<x; i++) {
        delete[] matran[i] ;
      }
      delete[] matran;
      delete[] so_pt;
}