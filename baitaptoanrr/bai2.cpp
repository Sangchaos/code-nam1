#include <iostream>
#include <algorithm>

using namespace std ;

int n, arr[10000] ;

void khoitao(int k) {
    for (int i =1 ;i<=k ;i++) {
        arr[i]= i ;
    }
}
void khoitao2(int a[], int k) {
	for (int i =1 ;i<=k ;i++) {
        a[i]= i ;
    }
}
void sinhtohop(int k, int &final) {
	int i = k ;
	while ( i>0 && arr[i] == n-k+i)
	{
		i--;
	}
	if (i==0) {
		final = 1;
	}
	else {
		arr[i]++ ;
		for (int j = i+1 ;j<=k; j++) {
			arr[j] = arr[j-1]+1 ;
		}
	}
}

void sinhhoanvi (int a[], int k, int &end) {
    int i = k-1 ;
    while (i > 0 && a[i] > a[i+1] ) {
        i-- ;
    }
    if (i==0) {
        end =1 ;
    }
    else {
        int j =k ;
        while (a[i]> a[j]) {
            j-- ;
        }
        swap(a[i], a[j]) ;
        reverse(a+ i+1, a+k) ;
    }
}
int main() {
	int k ;
	int  final =0 ;
	cin>>k>>n;
	khoitao(k);
	while (final == 0)
	{	
		int a[100] ,end =0;;
		khoitao2(a,k) ;
		while (end == 0)
		{
			for (int i =1 ;i<=k;i++) {
				cout<<arr[a[i]]<<" ";
			}
			cout<<endl;
			sinhhoanvi(a,k, end) ;
		}
		sinhtohop(k,final) ;
	}
	return 0;
}