#include <iostream>
using namespace std ;

bool phanxa(int arr[100][100], int x) {
    for (int i =1 ;i<=x;i++) {
        if (arr[i][i]==0) 
        return false ;
    }
    return true ;
}
bool doixung(int arr[100][100], int x) {
    for (int i =1 ;i<=x;i++) {
        for (int j = i+1 ; j<=x;j++) {
            if (arr[i][j] != arr[j][i]) 
            return false ;
        }
    }
    return true ;
} 
bool baccau(int arr[100][100], int x) {
    for (int i =1 ;i<=x ;i++) {
        for (int j =1 ;j<=x ;j++) {
            if (arr[i][j]==1 && i!=j) {
                for (int k =1 ;k<=x;k++) {
                    if (arr[j][k]==1 && arr[i][k]==0 ) {
                        return false ;
                    }
                }
            }
        }
    }
    return true ;
}

bool phanxung(int arr[100][100], int x) {
    for (int i = 1; i<=x;i++) {
        for (int j =1 ;j<=x; j++) {
            if ( i!=j && arr[i][j]==1 && arr[j][i]==1) return false ;
        }
    }
    return true ;
}

int main() {
	int x;
	cin>>x;
	int a[x] ;
	for (int i =0 ;i<x;i++) {
		cin>>a[i];
	}
	int R ;
	cin>>R ;
	int arr[100][100] ={0};
	for (int i =0 ;i<R;i++) {
        int m , n ; cin>>m>>n ;
        arr[m][n] = 1;
    }

    for (int i=1 ;i<=x;i++) {
        for (int j =1 ;j<=x;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    if (phanxa(arr, x))
    cout<<"1. phan xa: yes" <<endl ;
    else cout<<"1. phan xa: no"<<endl;
    if (doixung(arr, x))
    cout<<"2. doi xung: yes" <<endl ;
    else cout<<"2. doi xung: no"<<endl;
    if (baccau(arr, x))
    cout<<"3. bac cau: yes" <<endl ;
    else cout<<"3. bac cau: no"<<endl;
    if (phanxung(arr, x))
    cout<<"4. phan xung: yes" <<endl ;
    else cout<<"4. phan xung: no"<<endl;

}

