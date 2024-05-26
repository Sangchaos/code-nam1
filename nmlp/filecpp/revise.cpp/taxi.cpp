#include<iostream>
using namespace std ;
int main () {
    int km , tien=0 ;
    cout<<"nhap km can di ";
    cin>>km;
    if (km< 0) {
        cout<<"khong hop le";
        return 0;
    }
    if (km==1) {
        tien=15000;
    cout<<tien;
    }
    else if (km >=2 &&km <=5) {
        int tien1=15000;
        for(int i=2; i<=km;i++) {
           tien1+=13500;
          }
        cout<<tien1;
    }
    else if ( km>=6 && km<=120) {
        int tien2=69000;
        for (int i =6; i<=km; i++) {
            tien2+=11000;
          }
          cout<<tien2;
    }
    else if (km >120) {
        int tien3=1334000;
        
        for (int i=121; i<=km;i++) {
           
            tien3+= 11000;
            
        }
        cout<<tien3 *90/100;
    }
    return 0;
}