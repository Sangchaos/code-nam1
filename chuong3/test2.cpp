#include <iostream>
using namespace std;

int giaiThua(int x) {
    int gt = 1;
    for (int i = 1; i <= x; i++)
        gt *= i;
    return gt;
}

void xuat(int m, int a[]) {
    for (int i = 1; i <= m; i++)
        cout << a[i] << " ";
    cout << endl;
}

void hoanVi(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void sinhHoanVi(int a[], int n) {
    int i = n - 1;
    while (i > 0 && a[i] >= a[i + 1])
        i--;

    if (i > 0) {
        int k = n;
        while (a[i] >= a[k])
            k--;

        hoanVi(a[i], a[k]);

        int left = i + 1;
        int right = n;

        while (left < right) {
            hoanVi(a[left], a[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int n, m, a[100];
    cout << "Nhập m: ";
    cin >> m;
    cout << "Nhập n: ";
    cin >> n;

    if (m > n) {
        cout << "Lỗi: m phải nhỏ hơn hoặc bằng n." << endl;
        return 1;
    }

    for (int i = 1; i <= m; i++)
        a[i] = i;
    
    xuat(m, a);

    int c = giaiThua(n) / (giaiThua(m) * giaiThua(n - m));
    for (int t = 1; t <= c - 1; t++) {
        sinhHoanVi(a, m);
        xuat(m, a);
    }

    return 0;
}
