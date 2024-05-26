#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std ;
int main()
{   
    int y;
    int gioi_han=7;
    do {
        int x=rand()%9 ;
        cout<<"So ban doan la: ";
        cin>>y;
    
        if(x==y){
            cout<<"Ban doan dung roi. Ban that gioi hihihi";
            break ;
        }
        else  {
            cout<<"ban doan sai roi"<<endl;
            gioi_han--;
        }
    }
    while(gioi_han >0) ;
    return 0;
}





