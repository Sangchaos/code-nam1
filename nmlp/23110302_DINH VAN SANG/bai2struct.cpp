#include <iostream>
#include <algorithm>

using namespace std;

const int MAX_SIZE = 100;

struct phanso {
    int tu;
    int mau;
};

void nhap(phanso &ps) {
    cin >> ps.tu;
    cin >> ps.mau;
}

void xuat(phanso p) {
    cout << p.tu << "/" << p.mau;
}

bool sosanh(phanso a, phanso b) {
    return (double)a.tu / a.mau < (double)b.tu / b.mau;
}

bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void sapXepTangDan(phanso ds[], int n) {
    sort(ds, ds + n, sosanh);
}

void sapXepGiamDan(phanso ds[], int n) {
    sort(ds, ds + n, greater<phanso>());
}

int main() {
    int n;
    cout << "Nhap so luong phan so (n <= " << MAX_SIZE << "): ";
    cin >> n;

    if (n > MAX_SIZE) {
        cout << "So luong phan so vuot qua gioi han." << endl;
        return 1;
    }

    phanso ds[MAX_SIZE];


    for (int i = 0; i < n; ++i) {
        cout << "Nhap phan so thu " << i + 1 << ": ";
        nhap(ds[i]);
    }

 
    cout << "Danh sach phan so: ";
    for (int i = 0; i < n; ++i) {
        xuat(ds[i]);
        cout << " ";
    }
    cout << endl;

   
    phanso maxPS = *max_element(ds, ds + n, sosanh);
    cout << "Phan so lon nhat: ";
    xuat(maxPS);
    cout << endl;


    phanso minPS = *min_element(ds, ds + n, sosanh);
    cout << "Phan so nho nhat: ";
    xuat(minPS);
    cout << endl;


    bool coPhanSoAm = any_of(ds, ds + n, [](phanso p) { return p.tu * p.mau < 0; });
    if (coPhanSoAm) {
        cout << "Co phan so am trong day." << endl;
    } else {
        cout << "Khong co phan so am trong day." << endl;
    }


    bool tangDan = is_sorted(ds, ds + n, sosanh);
    if (tangDan) {
        cout << "Day phan so co gia tri tang dan." << endl;
    } else {
        cout << "Day phan so khong co gia tri tang dan." << endl;
    }

 
    int soPhanSoNguyenTo = count_if(ds, ds + n, [](phanso p) { return laSoNguyenTo(p.tu); });
    cout << "Trong day co " << soPhanSoNguyenTo << " phan so co tu la so nguyen to." << endl;



    return 0;
}

