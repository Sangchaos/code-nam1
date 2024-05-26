#include<iostream>
using namespace std;
int sum(int n)
{
    if (n==1) 
    {
    return 1;
    }
    return n + sum(n-1);
}
int main()
{
    int n;
    cout<<"nhap n: ";
    cin>>n;
    cout<<"tong_la: "<<sum(n);
    return 0;
}