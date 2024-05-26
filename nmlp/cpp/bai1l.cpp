 #include<iostream>
 #include<cmath>
 using namespace std ;
 int main() {
    int x ,n;
    cout<<"nhap x, n ";
    cin>>x>>n;
    int tong =0 ;
    for (int i= 0;i<=n;i++) {
        tong += pow (x , 2*i+ 1);
    }
    cout<<"tong = "<<tong;
    return 0 ;
 }