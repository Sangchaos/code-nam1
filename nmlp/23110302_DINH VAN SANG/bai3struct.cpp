#include <iostream>
#include <cmath>
using namespace std;

struct donthuc {
    float heso;
    int mux;
};

void nhap(donthuc &a) {
    cin >> a.heso >> a.mux;
}

void xuat(donthuc a) {
    cout << a.heso << "x^" << a.mux;
}

void tong2donthuc(donthuc a, donthuc b) {
    donthuc tong;
    cout << "tong 2 don thuc = ";
    if (a.mux == b.mux) {
        tong.mux = a.mux;
        tong.heso = a.heso + b.heso;
        xuat(tong);
    } else {
        xuat(a);
        cout << " + ";
        xuat(b);
    }
}

void hieu2donthuc(donthuc a, donthuc b) {
    donthuc hieu;
    cout << "hieu 2 don thuc = ";
    if (a.mux == b.mux) {
        hieu.mux = a.mux;
        hieu.heso = a.heso - b.heso;
        xuat(hieu);
    } else {
        xuat(a);
        cout << " - ";
        xuat(b);
    }
}

void tich2donthuc(donthuc a, donthuc b) {
    donthuc tich;
    cout << "tich 2 don thuc = ";
    tich.heso = a.heso * b.heso;
    tich.mux = a.mux + b.mux;
    xuat(tich);
}

void thuong2donthuc(donthuc a, donthuc b) {
    donthuc thuong;
    cout << "thuong 2 don thuc = ";
    if (b.heso != 0) {
        thuong.heso = static_cast<float> (a.heso)/ b.heso;
        thuong.mux = a.mux - b.mux;
        xuat(thuong);
    } else {
        cout << "Khong the chia cho 0";
    }
}

void daohamcap1(donthuc a) {
    a.heso = a.heso * (a.mux);
    a.mux = a.mux - 1;
    xuat(a);
}

void daohamback(donthuc a) {
    xuat(a);
    cout << endl;
    int k;
    cout << "dao ham bac k";
    cin >> k;
    for (int i = 1; i <= k; i++) {
        a.heso = a.heso * (a.mux);
        a.mux = a.mux - 1;
        if (a.mux == -1) {
            a.heso = 0;
            a.mux = 0;
            break;
        }
    }
    xuat(a);
}

int tinhgiatriX(donthuc a) {
    cout << endl;
    int x;
    cout << "nhap x = ";
    cin >> x;
    int value = a.heso * pow(x, a.mux);
    return value;
}

void inMenu() {
    cout << "1. Tong 2 don thuc" << endl;
    cout << "2. Hieu 2 don thuc" << endl;
    cout << "3. Tich 2 don thuc" << endl;
    cout << "4. Thuong 2 don thuc" << endl;
    cout << "5. Dao ham cap 1" << endl;
    cout << "6. Dao ham bac k" << endl;
    cout << "7. Tinh gia tri X" << endl;
    cout << "0. Thoat" << endl;
}

int main() {
    donthuc a, b;
    nhap(a);
    xuat(a);
    cout << endl;
    nhap(b);
    xuat(b);
    cout << endl;

    int choice;
    inMenu();
    do {
        
        cout << "Nhap lua chon: ";
        cin >> choice;
        switch (choice) {
            case 1:
                tong2donthuc(a, b);
                break;
            case 2:
                hieu2donthuc(a, b);
                break;
            case 3:
                tich2donthuc(a, b);
                break;
            case 4:
                thuong2donthuc(a, b);
                break;
            case 5:
                daohamcap1(a);
                break;
            case 6:
                daohamback(a);
                break;
            case 7:
                cout << tinhgiatriX(a);
                break;
            case 0:
                cout << "Tam biet!";
                break;
            default:
                cout << "Lua chon khong hop le. Vui long thu lai." << endl;
        }
        cout << endl;
    } while (choice != 0);

    return 0;
}

