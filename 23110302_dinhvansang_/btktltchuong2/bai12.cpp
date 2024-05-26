#include <iostream>
using namespace std ;

int main() {
    int n ;
    cin>>n ;
    int h1= 0, c1=0, h2=n-1, c2= n-1;
    int a[100][100] , k=1;
    while (c1 <=c2 && h1 <=h2)
    {
        for (int i =c1 ;i<=c2 ;i++) {
        a[h1][i] = k++;
    }
    h1 +=1 ;
    for (int i =h1 ; i<= h2 ; i++) {
        a[i][c2] = k++;
    }
    c2-= 1;
    if (c1<= c2 && h1<= h2) {
        for (int i = c2 ; i>= c1; i--) {
            a[h2][i] = k++ ;
        }
        h2-= 1;
        for (int i = h2 ; i>= h1 ; i--) {
            a[i][c1] = k++ ;
        }
        c1+=1;
    }
    }
    for (int i =0 ;i<n ;i++) {
        for (int j =0 ;j<n ;j++) {
            cout<<a[i][j]<<"        ";
        }
        cout<<endl;
    }
}