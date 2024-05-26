#include <bits/stdc++.h>
using namespace std;

int SoCongDaThuc(string s){
    int l=0, cnt_v=0, ans=0;
    for (int i=0; i<s.length(); i++){
        if (isalpha(s[i]) && s[i]!='v') {
            l++;
        }
        else if (s[i]=='v'){
            ans+=l-1;
            l=0;
            cnt_v++;
        }
    }
    ans+=l-1;
    ans+=cnt_v;
    return ans;
}

int main(){
    string dt1, dt2;
    getline(cin, dt1);
    getline(cin, dt2);
    int sc1=SoCongDaThuc(dt1), sc2=SoCongDaThuc(dt2);
    if (sc1<sc2)
        cout << dt1 << " don gian hon " << dt2 << endl;
    else if (sc2<sc1)
        cout << dt2 << " don gian hon " << dt1 << endl;
    else cout << dt1 << " va " << dt2 << " don gian nhu nhau!";
    return 0;
}
