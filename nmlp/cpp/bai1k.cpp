 #include<iostream>
 #include<cmath>
 using namespace std ;
 int main() {
    int x ,n;
    cout<<"nhap x, n ";
    cin>>x>>n;
    int tong =0 ;
    for (int i= 1;i<=n;i++) {
        tong += pow (x ,2* i);
    }
    cout<<"tong = "<<tong;
    return 0 ;
 }