#include<iostream>
using namespace std ;

class Book {
  private : 
    string author ;
    int page ;
    // student (string author , int page )

    void  getinformation() {
        cin>>author>>page ;
    }
    void display () {
        cout<<"tac gia: "<<author<<endl<<"page = "<<page<<endl;
    }
} ;

int main () {
    int n ;
    cout <<"nhap n = " ;
    cin>>n;
    Book *sach ;
    sach = new Book [n] ;
    for (int i=0; i<n ;i++ ) {
        sach[i].getinformation() ;
    }
    for (int i=0 ;i<n; i++) {
        sach[i].display() ;
    }
    return 0;

}