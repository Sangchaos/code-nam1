#include<iostream>
#include <stdlib.h>
using namespace std ;

int main() 
{
 
  int y;
  int lan_nhap =7;
  int x=rand()%100; 
    
  do {
    cout<<"ban doan so la ";
    cin>>y;
     if (y==x) {
        cout<<"ban doan dung roi. ban rat may man";
        break ;
    }

   
    else (y!=x); 
    {
        cout<<"ban doan sai roi."<<endl;
        lan_nhap--;
    }
  }
  while (lan_nhap >0);
 

}
    