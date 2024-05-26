#include <iostream>
using namespace std;

bool ktra(int a[], int n) {
    if (a[n-2] > a[n-1]) // Check if the second last element is greater than the last element
        return false;

    if (n <= 1) // If there's only one element or less, it's considered sorted
        return true;
    else {
        return ktra(a, n-1); // Recursively check the array without the last element
    }
}

int main() {
    int n;
    cin >> n;
    int a[500];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (ktra(a, n)) {
        cout << "YES";
    }
}
