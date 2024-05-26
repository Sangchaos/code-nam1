#include <iostream>
#include <cstring>
#define max 100
using namespace std;

char* xuat(char sang[]) {
    int n = strlen(sang);
    int i = 0;
    char* moi = new char[max]; // C?p ph�t d?ng v�ng nh? d? l?n
    
    while (sang[i] != ' ' && i < n) {
        moi[i] = sang[i];
        i++;
    }
    
    moi[i] = '\0'; // K� t? k?t th�c chu?i
    return moi;
}

int main() {
    char sang[max];
    cin.getline(sang, max);
    
    char* ketQua = xuat(sang);
    cout << "Chuoi moi: " << ketQua << endl;

    delete[] ketQua; // Gi?i ph�ng b? nh?

    return 0;
}

