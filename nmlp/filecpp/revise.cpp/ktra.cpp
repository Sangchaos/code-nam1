#include<iostream>
using namespace std ;
int main() {
    char n;
    cin>>n;
    if (n>='A' && n<='z') {
    switch (n) {
    case 'e' :
    case 'u' :
    case 'o':
    case 'a':
    case 'i':
    case 'E' :
    case 'U' :
    case 'O':
    case 'A':
    case 'I':
        cout <<"day la nguyen am" ;
        break ;
    default : 
        cout<<"day ko phai nguyen am"; 
        break ;}
    }
    else
    cout<<"ngoai pham vi";
    return 0;
}