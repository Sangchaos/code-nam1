
// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  
#include <iostream>
#include <fstream>

using namespace std ;

struct sv {
    string mssv;
    string name;
    int year ;
    float toan, ly , dtb ;
};

void nhap (sv &a) {
    cin>>a.mssv ; cin.ignore() ;
    getline(cin , a.name) ;
    cin>>a.year>>a.toan>>a.ly>>a.dtb ;
    cin.ignore();
}
void nhapfile (sv a[], int &n, ofstream &in) {
    cin>> n ;
    cin.ignore() ;
    for (int i =0 ;i<n ; i++) {
        nhap(a[i]) ;
        cout<<endl;
    }
    in.open("D:\\nhapxuatfile\\bai11a.txt") ;
    for (int i =0 ;i< n;i++) {
        in<< a[i].mssv << endl ;
        in<< a[i].name<<endl ;
        in<< a[i].year<<endl ;
        in<<a[i].toan<<" "<<a[i].ly<<" "<<a[i].dtb<<endl;
    }
    in.close() ;

}

void docfile (sv a[], int n, ifstream &lay)  {
    lay.open("D:\\nhapxuatfile\\bai11a.txt") ;
    for (int i =0 ; i<n ;i++) {
        lay>>a[i].mssv ; lay.ignore() ;
        getline(lay, a[i].name) ;
        lay>>a[i].year ;
        lay>>a[i].toan>>a[i].ly>>a[i].dtb ;
        lay.ignore() ;
    }
    lay.close() ;
    for (int i =0 ;i< n;i++) {
        cout<< a[i].mssv << endl ;
        cout<< a[i].name<<endl ;
        cout<< a[i].year<<endl ;
        cout<<a[i].toan<<" "<<a[i].ly<<" "<<a[i].dtb<<endl;
    }
}
void sinhdtbmax (sv a[], int n) {
    int max = a[0].dtb ;
    int vt ;
    for (int i =1 ;i<n ;i++) {
        if (a[i].dtb > max) 
        {
            max = a[i].dtb ;
            vt =i;
        }
    }
    cout<<"sinh vien co diem tb max la: "<<a[vt].name<<". Voi so diem la: "<<max ;
}

void soft1 (sv a[], int n, ofstream &in) {
    for (int i =0 ;i< n-1; i++) {
        for (int j =i +1; j<n ;j++) {
            if ( a[i].dtb < a[j].dtb) {
            swap (a[i].dtb, a[j].dtb) ; 
            swap(a[i].name, a[j].name) ;
            }
        }
    }
    in.open("D:\\nhapxuatfile\\bai11b.txt") ;
    for (int i= 0; i<n ;i++) {
        in<<a[i].name<<": "<<a[i].dtb<<endl ;
    }
    in.close() ;
}
void soft2(sv a[], int n, ofstream &in) {
    for (int i =0 ;i< n-1; i++) {
        for (int j =i +1; j<n ;j++) {
            if ( a[i].toan < a[j].toan) {
            swap (a[i].toan, a[j].toan) ; 
            swap(a[i].name, a[j].name) ;
            }
        }
    }
    in.open("D:\\nhapxuatfile\\bai11b.txt") ;
    for (int i= 0; i<n ;i++) {
        in<<a[i].name<<": "<<a[i].toan<<endl ;
    }
    in.close() ;
}
void sinhvientot(sv a[], int n, ofstream &in) {
    in.open("D:\\nhapxuatfile\\bai11b.txt") ;
    for (int i= 0; i< n;i++) {
        if (a[i].dtb >5 && a[i].toan >3 && a[i].ly> 3 )
        in<<a[i].name<<": "<<a[i].toan<<" "<<a[i].ly<<" "<<a[i].dtb<<endl;
    }
    in.close() ;
}
void sinhviengianhat(sv a[], int n, ofstream &in) {
    in.open("D:\\nhapxuatfile\\bai11b.txt") ;
    int min = a[0].year, vt =0 ;
    for (int i= 1 ;i<n; i++) {
        if (a[i].year < min)
        {
            min = a[i].year ;
            vt= i ;
        }
    }
    in<<a[vt].name<<": "<<a[vt].year <<endl;
    for (int i =1 ;i< n;i++) {
        if ( a[i].year == min && i !=vt) 
        in<<a[i].name<<": "<<a[i].year<<endl;
    }
    in.close() ;
}

void inthongtin(sv a[], int n, ofstream &in) {
    string s ;
    getline(cin, s) ;
    in.open("D:\\nhapxuatfile\\bai11b.txt") ;
    for (int i= 0 ;i<n ;i++) {
        if (a[i].name==s) {
            in<< a[i].mssv << endl ;
            in<< a[i].name<<endl ;
            in<< a[i].year<<endl ;
            in<<a[i].toan<<" "<<a[i].ly<<" "<<a[i].dtb<<endl;
        }
    }
    in.close() ;
}

int main() {
    sv a[100] ;
    int  n ;
    ofstream in ;
    nhapfile(a, n ,in) ;
    ifstream lay ;
    docfile(a, n, lay) ;
    inthongtin(a, n, in) ;

   
}