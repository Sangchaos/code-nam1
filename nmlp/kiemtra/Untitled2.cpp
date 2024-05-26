#include <iostream>
#include <string.h>
using namespace std;

struct nv {
    char msnv[10];
    char ten[50];
    float luong;
};

void nhapnv(nv &a) {
    cin.getline(a.msnv, 10);
    cin.getline(a.ten, 50);
    cin >> a.luong;
    cin.ignore();
}

void xuatnv(const nv &a) {
    cout << a.msnv << " - " << a.ten << " - " << a.luong << endl;
}

void nhap(nv a[], int &n) {
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        nhapnv(a[i]);
    }
}

void xuat(const nv a[], int n) {
    if (n == 0) {
        cout << "Khong co nhan vien nao trong danh sach." << endl;
        return;
    }

    int vt = 0;
    for (int i = 1; i < n; i++) {
        if (a[i].luong > a[vt].luong || (a[i].luong == a[vt].luong && strlen(a[i].ten) > strlen(a[vt].ten))) {
            vt = i;
        }
    }

    cout << "Nhan vien thoa man ca hai tieu chi (luong cao nhat va ten dai nhat): ";
    xuatnv(a[vt]);
}

int main() {
    nv a[100];
    int n;
    nhap(a, n);
    xuat(a, n);
}

