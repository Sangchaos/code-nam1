#include<iostream> 
using namespace std ;
int main() {
    int thang, nam;
    cin>>thang>>nam;
    switch (thang)
    {
        case 1 : cout<<"thang co 31 ngay "; break ;
        case 3 : cout<<"thang co 31 ngay "; break ;
        case 5 : cout<<"thang co 31 ngay "; break ;
        case 7 : cout<<"thang co 31 ngay "; break ;
        case 8 : cout<<"thang co 31 ngay "; break ;
        case 10: cout<<"thang co 31 ngay "; break ;
        case 12 : cout<<"thang co 31 ngay "; break ; 
        case 4 : cout<<"thang co 31 ngay "; break ;  
        case 6 : cout<<"thang co 31 ngay "; break ;
        case 9 : cout<<"thang co 31 ngay "; break ;
        case 11 : cout<<"thang co 31 ngay "; break ;
    }
    exit(0);
     if ((nam%4==0 && nam%100!=0) || nam%400==0) {
        thang=2 ;
        cout<<"thang co 29 ngay"; 
        exit(0) ;
     }
    else
   {
    thang =2 ;
    cout<<"thang co 28 ngay";
    exit(0);
   }

}
