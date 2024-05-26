#include<iostream>
using namespace std ;
void goiham(int a) 
{
    cout<<"a= "<<a<<endl;
    if (a == 1)
    {
        return ;
    }
    goiham(a-1) ;
}
int main()
{
    int n;
    cout<<"nhap n= ";
    cin>>n;
    goiham(n);
    return 0;
}
