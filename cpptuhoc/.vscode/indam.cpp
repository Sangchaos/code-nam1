#include <iostream>
using namespace std ;

void nhap (char s[][100], int &m, int &n) {
    cin>>m>>n;
    for(int i =0 ;i< m;i++) {
        for (int j =0 ;j<n ;j++) {
            cin>>s[i][j] ;
        }
    }
}

void xuat(char s[][100], int m, int n) {
    for (int i =0 ;i< m;i++) {
        for (int j =0 ;j<n ;j++) {
            cout<<s[i][j] ;
        }
        cout<<endl;
    }
}
void indam(char s[][100], int m, int n) {
    for (int i =0 ;i< m;i++) {
        for (int j =0 ;j<n ;j++) {
            if ( s[i][j]== '#') {
                if ( s[i][j+1]!= '#')
                 s[i][j+1]= '0';
                 if ( s[i+1][j+1]!= '#')
                 s[i+1][j+1]= '0';
                 if ( s[i+1][j]!= '#')
                 s[i+1][j]='0';
            }
        } 
    }
    for (int i =0 ;i< m;i++) {
        for (int j =0 ;j<n ;j++) {
            if (s[i][j]== '0')
            s[i][j] = '#' ;
        }
    }
    xuat(s, m, n) ;
}

int main() {
    char s[100][100] ;
    int m, n ;
    nhap(s, m ,n) ;
    indam(s, m, n) ;
}