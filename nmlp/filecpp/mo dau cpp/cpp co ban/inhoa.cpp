#include <iostream>
 using namespace std;

void sho ( string s ) {
    for ( int i =0 ; i< s.size() ; i++){ // nhớ size()
        if ( s[i]>='a' && s[i] <= 'z') {
            s[i]-=32 ;
        } 
        
    }  
     cout<< s << endl;
}


int main (){
string s1,s2,s3 ;
cin>>s1>>s2>>s3;
sho(s1) ;
sho(s2);
sho(s3);
return 0; 
}