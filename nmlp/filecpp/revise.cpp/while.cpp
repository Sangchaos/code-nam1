#include <iostream>
using namespace std ;


    float avg (int arr[10][10] , int n, int m )
   { float sum= 0;
    for(int i=0; i<n; i++) 
    {   
        for (int j=0; j<m; j++)
        {
             sum+= arr[i][j];
        }
    
    }
    return (float) sum / (n*m) ;
   }
int main()
{   
    int n ,m ;
    int arr[10][10];
    cin>>n>>m;
     for(int i=0; i<n; i++) 
    {   
        for (int j=0; j<m; j++)
        {
             cin>> arr[i][j];
        }
    
    }

    cout<< avg( arr ,n ,m);
}