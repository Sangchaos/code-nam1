#include <iostream>
#include <cstring>
#define max 100
using namespace std;

char* xuat(char sang[]) {
    int n = strlen(sang);
    int i = 0;
    char* moi = new char[max]; // C?p phát d?ng vùng nh? d? l?n
    
    while (sang[i] != ' ' && i < n) {
        moi[i] = sang[i];
        i++;
    }
    
    moi[i] = '\0'; // Ký t? k?t thúc chu?i
    return moi;
}

int main() {
    char sang[max];
    cin.getline(sang, max);
    
    char* ketQua = xuat(sang);
    cout << "Chuoi moi: " << ketQua << endl;

    delete[] ketQua; // Gi?i phóng b? nh?

    return 0;
}

