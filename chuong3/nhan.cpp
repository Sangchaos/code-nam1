
#include <iostream>
using namespace std;

int giaiThua(int x) {
    int gt = 1;
    for (int i = 1; i <= x; i++)
        gt *= i;
    return gt;
}


void hoanVi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void sinhHoanVi(int ar[] , int a[], int n) {
    for (int i = 1; i <= giaiThua(n) - 1; i++) {
        int m, k;
        for (int z = 1; z <= n; z++)
            if (a[z] < a[z + 1]) {
                m = z;
                break;
            }
        for (int z = 1; z <= n; z++)
            if (a[z] > a[m]) {
                k = z;
                break;
            }
        hoanVi(a[m], a[k]);
        int y = m + 1;
        int t = n;
        while (y < t) {
            hoanVi(a[y], a[t]);
            y++;
            t--;
        }
    }
}

int main() {
    int n, m , arr[100];
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;

    if (m > n) {
        cout << "Loi: m phai nho hon hoac bang n." << endl;
        return 1;
    }

    for (int i = 1; i <= m; i++)
        arr[i] = i;

    int c = giaiThua(n) / (giaiThua(m) * giaiThua(n - m));
    for (int t = 1; t <= (c - 1); t++) {
        int a[100] ;
        int j = m;
        while (j >= 1 && a[j] == n - m + j)
            j--;
        if (j >= 1) {
            a[j]++;
            for (int r = j + 1; r <= m; r++)
                a[r] = a[r - 1] + 1;               
        }
       sinhHoanVi(arr, a, m ) ;
        for (int i =1 ;i<= m;i++) {
            cout<<arr[a[i]] <<" " ;
        }
        cout<<endl;
       
    }
    return 0;
}