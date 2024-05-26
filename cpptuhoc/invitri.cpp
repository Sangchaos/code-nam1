#include <iostream>
#include <string>

// Hàm tìm chữ số ở vị trí k trong dãy số liên tiếp
char findDigitAtPosition(long long k) {
    long long length = 1; // Độ dài hiện tại của các số (1 chữ số, 2 chữ số, ...)
    long long count = 9;  // Số lượng số có cùng độ dài
    long long start = 1;  // Số bắt đầu của dãy với độ dài hiện tại

    // Tìm độ dài của số có chứa chữ số ở vị trí k
    while (k > length * count) {
        k -= length * count;
        length++;
        count *= 10;
        start *= 10;
    }

    // Tìm số chứa chữ số ở vị trí k
    start += (k - 1) / length;
    std::string number = std::to_string(start);

    // Tìm vị trí chữ số trong số
    long long digitIndex = (k - 1) % length;

    // Trả về chữ số ở vị trí k
    return number[digitIndex];
}

int main() {
    int Q; // Số lượng truy vấn
    std::cin >> Q;
    
    for (int i = 0; i < Q; i++) {
        long long K; // Vị trí cần tìm chữ số
        std::cin >> K;
        std::cout << findDigitAtPosition(K) << std::endl;
    }

    return 0;
}
