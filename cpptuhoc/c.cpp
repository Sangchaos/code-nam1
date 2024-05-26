#include <iostream>
#define MAX 100
using namespace std;
void Input(int A[MAX],int &n)
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>A[i];
}
int Find_MAX(int A[],int n)
{
    int Max=A[0];
    for(int i=0;i<n;i++)
    {
        if(A[i]>A[0])
        {
            Max=A[i];
    	}
    }
    return Max;
}
int Subtraction(int A[],int n)
{
    int Temp=Find_MAX(A,n);
    int Add1,Add2;
    for(int i=0;i<n;i++)
    {
        if(A[i]==Temp)
        {
            Add1=A[i];
            break;
        }
    }
    for(int i=n-1;i>0;i--)
    {
        if(A[i]== Temp)
        {
            Add2=A[i];
            break;
        }
    }
    int Gap=Add2-Add1;
    return Gap;
}
int main()
{
    int A[MAX],n;
    Input(A,n);
    int Gap= Subtraction(A,n);
    cout<<Gap;
    return 0;
}