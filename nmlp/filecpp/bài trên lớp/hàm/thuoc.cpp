#include<iostream>
using namespace std ;
int dien_tich (int x1, int x2, int y1, int y2 , int z1, int z2) {
        int a1 = y1-x1 ;
        int a2 = y2-x2 ;
        int b1=  z1-x1 ;
        int b2=  z2-x2 ;
        float s= (float)0.5*abs(a1*b2-a2*b1 ) ;
        return s;
}

int main() {
    int a1, a2, b1, b2, c1, c2, x1,x2 ;
    cin>>a1>>a2>>b1>>b2>>c1>>c2>>x1>>x2 ;

}
    