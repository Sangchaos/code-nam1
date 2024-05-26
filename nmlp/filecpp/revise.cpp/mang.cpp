#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Nhap so hang: ";
    cin >> x;

    // Cấp phát bộ nhớ cho mảng con trỏ chứa hàng của ma trận
    int **matran = new int *[x];

    // Nhập số lượng phần tử của mỗi hàng và giá trị cho từng phần tử
    for (int i = 0; i < x; i++) {
        cout << "Nhap so luong phan tu cua hang " << i << ": ";
        int n;
        cin >> n;

        // Cấp phát bộ nhớ cho mỗi hàng của ma trận và nhập giá trị cho từng phần tử
        matran[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cout << "Nhap gia tri cho matran[" << i << "][" << j << "]: ";
            cin >> matran[i][j];
        }
    }

    // In ma trận
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < matran[i][0]; j++) {
            cout << matran[i][j] << " ";
        }
        cout << endl;
    }

    // Giải phóng bộ nhớ
    for (int i = 0; i < x; i++) {
        delete[] matran[i];
    }
    delete[] matran;

    return 0;
}
