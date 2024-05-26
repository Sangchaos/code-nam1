// MSSV: 23110302 
// Ho và tên : Đinh Van Sáng  
// 04/03/2005  

#include <iostream>
#include <string>
using namespace std;

string s;
int sum = 0;

void tong(int i) {
    string tmp = "";
    while (isdigit(s[i])) {
        tmp += s[i];
        i++;
    }
    if ( !tmp.empty()) {
        int tam = stoi(tmp);
        sum += tam;

    }
    if (s[i+1] != '\0') {
        tong(i + 1);
    }
}

int main() {
    cin >> s;
    tong(0);
    cout << sum;
    return 0;
}
