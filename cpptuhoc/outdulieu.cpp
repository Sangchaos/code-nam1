#include <iostream>
#include <fstream> 

using namespace std ;
struct nv {
    string classs;
    float mana ;
    float hp ;
    float damage ;
    string name ;
};

void nhap (nv &a) {
    cin>>a.classs ;
    cin.ignore() ;
    getline (cin, a.name) ;
    cin>>a.hp;
    cin>> a.mana ;
    cin>>a.damage ;
}
void xuat( nv a , ofstream &outfile) {
    outfile << a.classs<<endl ;
    outfile << a.name<<endl ;
    outfile << a.hp<<endl ;
    outfile << a.mana<<endl ;
    outfile << a.damage<<endl ;
}

int main() {
    nv a;
    ofstream outfile ;
    outfile. open("D:\\cpptuhoc\\cpp.txt", ios::app) ;
    nhap(a) ;
    xuat(a, outfile) ;
    outfile.close() ;

}