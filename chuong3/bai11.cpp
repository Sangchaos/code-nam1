#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


string multiply(string num1, string num2) {
    int n1 = num1.size();
    int n2 = num2.size();
    vector<int> result(n1 + n2, 0);
    //cout<<result.size() <<" "<<n1<<endl;

    for (int i = n1 - 1; i >= 0; i--) {
        for (int j = n2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    string res = "";
    for (int i = 0; i < result.size(); i++) {
        if (!(res.empty() && result[i] == 0)) {
            res.push_back(result[i] + '0');
        }
    }

    if (res.empty()) {
        return "0";
    }

    return res;
}

int main() {
    string num1 ;cin>>num1;
    string num2 ;cin>>num2;

    string result = multiply(num1, num2);
    cout << "Result: " << result << endl;

    return 0;
}
