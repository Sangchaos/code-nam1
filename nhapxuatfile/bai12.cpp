// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005
#include <iostream>
#include <fstream>

using namespace std ;

struct film {
    string name ;
    string loai ;
    string daodien ;
    string actor ;
    string actress;
    int namsx ;
    string hangsx ;
};

void nhap (film &a) {
    getline(cin, a.name) ;
    getline (cin, a.loai) ;
    getline(cin, a.daodien) ;
    getline(cin, a.actor) ;
    getline(cin, a.actress) ;
    cin>>a.namsx ; cin.ignore() ;
    getline(cin, a.hangsx) ;
}

void nhapfilm(film a[], int &n) {
    cout<<"nhap so bo phim: ";
    cin>>n ; cin.ignore() ;
    for (int i =0 ;i<n ;i++) {
        nhap(a[i]) ;
    }
    cout<<endl;
}
void cungtheloai(film a[], int n, fstream &output) {
    cout<<"nhap the loai: ";
    string s;
    getline(cin, s) ;
    output.open("D:\\nhapxuatfile\\bai.txt", ios::out| ios::app) ;
    output<<"Cac bo phim cung the loai "<<s<<" la:"<<endl ;
    for (int i = 0; i<n; i++) {
        if (a[i].loai == s) 
        output<<a[i].name<<endl;
    }
    output<<endl;
    output.close() ;
}

void cungdienviennam(film a[], int n, fstream &output) {
    cout<<"nhap ten dien vien nam: ";
    string s;
    getline(cin, s) ;
    output.open("D:\\nhapxuatfile\\bai.txt", ios::out|ios::app) ;
    output<<"Cac bo phim cung dien vien nam:"<<s<<" la:"<<endl ;
    for (int i = 0; i<n; i++) {
        if (a[i].actor == s) 
        output<<a[i].name<<endl;
    }
    output<<endl;
    output.close() ;
}

void cungdaodien(film a[], int n, fstream &output) {
    cout<<"nhap ten dao dien: ";
    string s;
    getline(cin, s) ;
    output.open("D:\\nhapxuatfile\\bai.txt", ios::out| ios::app) ;
    output<<"Cac bo phim cung dao dien "<<s<<" la:"<<endl ;
    for (int i = 0; i<n; i++) {
        if (a[i].daodien == s) 
        output<<a[i].name<<endl;
    }
    output<<endl;
    output.close() ;
}
int main() {
    film a[100] ;
    int n ;
    fstream output;
    nhapfilm(a, n) ;
    cungtheloai(a, n,output) ;
    cungdienviennam(a, n, output) ;
    cungdaodien(a, n, output) ;
}

