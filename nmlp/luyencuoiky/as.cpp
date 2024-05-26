#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int arr[100], n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minDiff = abs(arr[0] - arr[1]);

    for (int i = 1; i < n - 1; i++) {
        int diff = abs(arr[i] - arr[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
        }
    }
    if (abs(arr[0]-arr[n-1]) > minDiff)
    minDiff =  abs(arr[0]-arr[n-1]) ;
    cout << minDiff;
   
    return 0;
}

