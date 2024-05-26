#include <bits/stdc++.h>
#include <string>
using namespace std ;
struct sinh_vien {
    sinh_vien (string ht) {
        ho_ten=ht;
        //tuoi=t;
      //  can_nang=cn;
       // chieu_cao=cc;
    }
    string ho_ten;
    //int tuoi;
  //  float can_nang;
  //  float chieu_cao ;
};
int main(){
    sinh_vien h1;
    cout<<" nhap ten:";
    cin>> h1.ho_ten;
    
    cout<<"ten"<<h1.ho_ten;
    return 0;
}