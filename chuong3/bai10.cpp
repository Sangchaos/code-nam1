#include <iostream>
#include <cctype>

using namespace std;

void phanLoaiKyTu(const string& chuoi) {
    for (char kyTu : chuoi) {
        if (islower(kyTu)) {
            cout << kyTu << " la chu thuong." << endl;
        } else if (isupper(kyTu)) {
            cout << kyTu << " la chu hoa." << endl;
        } else if (isdigit(kyTu)) {
            cout << kyTu << " la chu so." << endl;
        } else {
            cout << kyTu << " la ky tu khac." << endl;
        }
    }
}

int main() {
    string chuoi;
    cout << "Nhap chuoi: ";
    getline(cin, chuoi);

    phanLoaiKyTu(chuoi);

    return 0;
}
