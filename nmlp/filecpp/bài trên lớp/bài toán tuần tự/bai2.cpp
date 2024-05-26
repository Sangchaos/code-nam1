#include<iostream>
#include<math.h>
using namespace std ;
int main(){
    float side1, side2, side3, p, area ;
    cout<<"nhap lan luot cac canh tam giac: " ;
    cin>>side1>>side2>>side3; 
    p=(side1+ side2+ side3)/2;
    area = sqrt((p)*(p-side1)*(p-side2)*(p-side3));
    cout<<"dien tich tam giac "<<area;
    return 0;

}
