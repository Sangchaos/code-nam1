#include <iostream>
using namespace std;
void veHinhVuongRong(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                std::cout << "2 ";
            } else {
                std::cout << " 1";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    // Thay ð?i giá tr? c?a n ð? có kích thý?c h?nh vuông mong mu?n
    int n ;
    int x=2*n-1;
    cin>>n;
    veHinhVuongRong(x);

    return 0;
}

