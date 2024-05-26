#include<iostream>

using namespace std;

int main() {
 int i, n ;
 int mang[ 1000];
 cin>> n;
 for ( i=1; i<=n ;i++)
 { 
    cin>> mang[i];
 }
int sum =0 ;
for (i=1; i<=n; i++)
{
    if ( mang[i] >0 && mang[i]<10 )
    {
    cout << mang[i]<<" ";

}
}
}





