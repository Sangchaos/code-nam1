#include<iostream>
using namespace std ;

class abstractAOV {
    virtual void askforpromotion() =0;
};

class AOV:abstractAOV {
private :
    string hero  ;
    int skin ;
public :
    void sethero (string h) {
        hero = h;
    }
    string gethero() {
        return hero;
    }
    
    void setskin(int s) {
        skin =s ;
    }
    int getskin() {
        return skin ;
    }
   
    AOV (string h, int s ) {
        hero = h ;
        skin = s ;
    }
    void xuat() {
    cout<<hero<<" "<<skin<<endl ;
   }
    void askforpromotion() {
        if (skin>10)
            cout<<"con cung"<<endl ;
        else 
            cout<<"ko phai con cung"<<endl;
    }
};


int main () {
    AOV hero1 = AOV ("violet" , 20) ;
    hero1.xuat() ;
    hero1.askforpromotion();
}