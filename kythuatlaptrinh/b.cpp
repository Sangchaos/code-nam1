#include <iostream>
#include <fstream >
using namespace std ;

struct mh{
    string code ;
    string name; 
    int sl ;
    float gia;
    int slt ;
    float time ;
};

void nhap (mh &a) {
    getline(cin, a.code) ;
    getline(cin, a.name) ;
    cin>>a.sl>>a.gia>>a.slt>>a.time;
    cin.ignore() ;
}

void nhapmh(mh a[], int &n) {
    cin>>n;
    cin.ignore();
    for(int i=0 ;i<n;i++) {
        nhap(a[i]) ;
    }
}
void nhapvofile(mh a[], int n, fstream &output ) {
    output.open("D:\\nhapxuatfile\\guivao.txt", ios::out |ios::binary) ;
        for (int i= 0;i<n; i++) {
            output.write((char*) &a[i], sizeof(mh)) ;
        }
    output.close() ;
}

void doc(mh a[], int n, fstream &input) {
    input.open("D:\\nhapxuatfile\\guivao.txt", ios::in| ios:: binary) ; 
    for (int i =0 ;i<n ;i++) {
        input.read((char*)&a[i], sizeof(mh)) ;
    }
    input.close() ;
}

void xuat(mh a[], int n, ofstream &outp) {
    cout<<n<<endl;
    outp.open("D\\nhapxuatfile\\bai1.txt") ;
    for (int i =0 ;i< n;i++) {
        cout<<a[i].code<<endl;
        outp<<a[i].code<<endl;
        outp<<a[i].name<<endl;
        outp<<a[i].sl<<endl;
        outp<<a[i].gia<<endl;
        outp<<a[i].slt<<endl;
        outp<<a[i].time<<endl;
    }
    outp.close() ;
}
int sltmax (mh a[], int n) {
    int max = a[0].slt ;
    for (int i=1 ;i<n ;i++) {
        if(a[i].slt > max) 
        max = a[i].slt ;
    }
    return max ;
}

int sltmin (mh a[], int n) {
    int min = a[0].slt ;
    for (int i=1 ;i<n ;i++) {
        if(a[i].slt < min) 
        min = a[i].slt ;
    }
    return min ;
}

float giamax(mh a[], int n) {
    int max =a[0].gia ;
    for (int i =1 ;i<n;i++) {
        if(a[i].gia > max)
        max = a[i].gia ;
    }
    return max ;
}

void timelonhon12 (mh a[], int n) {
    for (int i= 0; i< n-1;i++) {
        if(a[i].time > 12) {
            cout<<a[i].name<<" ";
        }
    }
    if (a[n-1].time > 12) {
        cout<<a[n-1].name ;
    }
}

void soft (mh a[], int n) {
    for (int i =0 ;i< n-1;i++) {
        for (int j= i+ 1;j<n ;j++) {
            if (a[i].slt > a[j].slt) {
                swap (a[i].slt , a[j].slt) ;
                swap (a[i].name, a[j].name) ;
            }
        }
    }
    for (int i =0 ;i<n-1 ;i++) {
        cout<<a[i].name<<" ";
    }
    cout<<a[n-1].name ;
}

int main() {
    mh a[100] ;
    int n ;
    fstream output, input;
    ofstream outp;
    nhapmh(a, n) ;
    nhapvofile(a, n, output) ;
    doc(a, n, input) ;
    xuat(a,n,outp ) ;
    // cout<<sltmax(a, n)<<endl;
    // cout<<sltmin(a, n)<<endl ;
    // cout<<giamax(a,n)<<endl;
    // timelonhon12(a, n) ;
    // cout<<endl;
    // soft(a, n) ;


}


