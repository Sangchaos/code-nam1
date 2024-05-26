#include<iostream>
#include<cmath>
using namespace std;
void nhap (int a[], int &n)
{     cout<<"so luong ";
	cin>>n;
   cout<<"Nhap mang:";
    for(int i=0;i<n;i++)
    {    
        cin>>a[i];
    } 
}
int nguyento(int n)
{
	if(n<2)
	{ 
	   return 0;
	}
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int tinhtong(int a[],int n)
{
    int tong=0;
    for(int i=0;i<n;i++)
    {
        tong=tong+a[i];        
    } 
    return tong;
}

int demso(int a[],int n)
{    
    int dem=0;
    for(int i=0;i<n;i++)
    { 
        if(nguyento(a[i]))
        {
            dem++;
        }
    }
   return dem; 
}

int chieudai(int a[],int n)
{
    int demchieudai=1;
														8
														7 5 6 3 11 2 5 25
    for(int i=0;i<n;i++)
    {

       for(int j=0;j<i;j++)
	   {
	   	if(a[i]<a[j])
		   {
		   	demchieudai++; 
			} 
		}  
    }
    return demchieudai;
}

int main()
{
    int a[1000];
    int n;
   nhap (a,n); 
    cout<<"Tong cac so trong day: "<<tinhtong(a,n)<<endl;
    cout<<"So luong cac so nguyen to trong day: "<<demso(a,n)<<endl;
    cout<<"Chieu dai tang dai nhat trong day: "<<chieudai(a,n)<<endl;
    return 0;
}

