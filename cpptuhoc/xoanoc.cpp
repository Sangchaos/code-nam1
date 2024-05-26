#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std ;
void taomatran(int a[][100], int &n) {
    srand (time(NULL)) ;
    cout<<"nhap n = " ;
    cin>>n;
    for (int i =0 ;i < n ;i++) {
        for (int j=0 ;j<n ;j++) {
            a[i][j] = rand() % 100;
        }
    }
}
void xuat(int a[][100], int n) {
    for (int i=0;i<n ;i++) {
		for (int j=0; j<n;j++) {
			cout<<a[i][j]<<"\t" ;
		}
		cout<<endl<<endl<<endl;
		
	}
}

bool sont (int n) {
    if (n<2) 
    return false ;
    for (int i=2 ;i<=sqrt(n) ; i++) {
        if (n%i==0) return false ;
    }
    return true ;
}

void truocX(int a[][100], int n, int &x, int &y) {
    cin >> x >> y;
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
    bool foundX = false;  // Biến cờ mới

    while (h1 <= h2 && c1 <= c2 && !foundX) {  // Sử dụng foundX trong điều kiện
        for (int i = c1; i <= c2; i++) {
            if (a[h1][i] != x) {
                a[h1][i] = 0;
            } else {
                foundX = true;  // Đặt foundX = true khi tìm thấy x
                break;  // Thoát khỏi vòng lặp for
            }
        }
        h1++;
        if (!foundX) {  // Kiểm tra lại trước mỗi vòng lặp
            for (int i = h1; i <= h2; i++) {
                if (a[i][c2] != x) {
                    a[i][c2] = 0;
                } else {
                    foundX = true;
                    break;
                }
            }
        }
        c2--;

        if (!foundX && c1 <= c2) {
            for (int i = c2; i >= c1; i--) {
                if (a[h2][i] != x) {
                    a[h2][i] = 0;
                } else {
                    foundX = true;
                    break;
                }
            }
            h2--;
        }

        if (!foundX && h1 <= h2) {
            for (int i = h2; i >= h1; i--) {
                if (a[i][c1] != x) {
                    a[i][c1] = 0;
                } else {
                    foundX = true;
                    break;
                }
            }
            c1++;
        }
    }

   xuat(a,n) ;
}

void duongdi (int a[][100] , int n, int x, int y) {
    bool flag = false ;
    int h1=0, h2=n-1, c1=0, c2 =n-1, dem=0 ; 
     while( h1<=h2 && c1<=c2 && !flag) {
        for (int i= c1; i<=c2; i++) {
            if (sont(a[h1][i]))
            { 
            dem++ ;
            if (a[h1][i]==y) {
                flag = true ;
                break ;
            }

            }
        }
        h1++;
        if ( !flag) {
        for(int i=h1;i <=h2;i++) {
            if (sont(a[i][c2]))
            {
                dem++ ;
                if (a[i][c2]==y) {
                flag= true ;
                break ;
            }
            }        
        }
        c2--; }
        if (c1<= c2 && !flag) {
            for (int i= c2 ;i>= c1 ;i--) {
                if(sont(a[h2][i])) {
                    dem++ ;
                    if (a[h2][i]==y) {
                flag= true ;
                break ;
            }
                }
                
            }
            h2--;
        }
        
        if (h1 <= h2 && !flag ) {
            for (int i=h2 ; i>= h1 ;i--) {
                if(sont(a[i][c1])) {
                    dem++ ;
                    if (a[i][c1]==y) {
                flag = true ;
                break ;
            }
                }
               
            }
            c1++;
        }
      
    }
    cout<<dem ;
}
int main() {
    int n, x, y;
    int a[100][100] ;
    taomatran(a, n) ;
    xuat(a, n) ;
    cout<<endl;
    truocX(a, n, x, y) ;
    duongdi(a, n, x, y) ;
    
   

}