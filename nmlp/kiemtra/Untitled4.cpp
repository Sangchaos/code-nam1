#include <iostream>
#include <cstdlib>  // Thu vi?n ch?a h�m rand()
#include <ctime>    // Thu vi?n d? s? d?ng h�m time()

const int max = 100;

void taoMaTranNgauNhien(int arr[][max], int m, int n) {
    // Kh?i t?o seed cho h�m rand() d?a tr�n th?i gian hi?n t?i
    srand(time(0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            // Sinh s? ng?u nhi�n t? 1 d?n 100 v� g�n cho ph?n t? i, j
            arr[i][j] = rand() % 100 + 1;
        }
    }
}

int main() {
    int m, n;
    std::cout << "Nhap so hang: ";
    std::cin >> m;
    std::cout << "Nhap so cot: ";
    std::cin >> n;

    int arr[max][max];

    taoMaTranNgauNhien(arr, m, n);

    std::cout << "Ma tran ngau nhien " << m << "x" << n << ":\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    timvitrichan(arr, m, n);

    return 0;
}

