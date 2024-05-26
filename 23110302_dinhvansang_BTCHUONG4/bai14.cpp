// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
using namespace std;
int dx[8] = { -2,-2,-1,-1, 1, 1, 2, 2};
int dy[8] = { -1, 1,-2, 2,-2, 2,-1, 1};

int  n,dem=0;
int a[500][500] = {0};

void matuan(int i, int j) {
    dem++ ;
    a[i][j] = dem; 
    for (int k = 0; k < 8; k++) {
        if (dem == n*n) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cout<<a[i][j]<<" " ;
                }
                cout<<endl;
            }
            exit(0);
        } 
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && a[i1][j1] == 0) {
            matuan(i1, j1);
        }
    }
    dem--;
    a[i][j]= 0;

}

int main() {
    cin >> n;
    int x, y;
    cin >> x >> y;
    matuan(x, y);


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<a[i][j]<<" " ;
        }
       cout<<endl;
    }
    return 0;
}
