#include<iostream>

using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    int ra=0 ;
    for ( int i=0 ;i< s.size() ;i++) {
    if(s[i]==c) {
     ra++; }
    }
    cout<< ra;
}
