#include <iostream> 
#include <cmath>
#define max 10
using namespace std ;

struct dathuc {
	int heso ;
	int mux;
};
void xuatdon (dathuc a) {
	cout<<a.heso<<"x^"<<a.mux ;
}
 
void nhap (dathuc a[], int &n ) {
	cout<<"nhap so phan tu cua 1 da thuc: ";
	cin>>n;
	for (int i=0 ;i<n;i++) {
		cin>>a[i].heso>>a[i].mux ;
	}
}

void xuat(dathuc a[], int n) { 
	for (int i=0 ;i<n-1;i++) {
		xuatdon(a[i]); cout<<" + ";		
	}
	xuatdon(a[n-1]) ;
}

void lamgondathuc (dathuc a[] ,int n ) {
	for (int i=0 ;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (a[i].mux==a[j].mux and i!=j) {
				a[i].heso = a[i].heso + a[j].heso ;
				a[i].mux =a[i].mux ;
				for(int k=j;k<n;k++) {
					a[k].heso = a[k+1].heso ;
					a[k].mux= a[k+1].mux ;
				}
				n--;
			}
		}
	}
	xuat(a, n) ;
}


void tong2dathuc (dathuc a[] ,int n ,dathuc b[] , int m) {
	dathuc c[m+n] ;
	int k =0,h=n;
	for (int i=0;i<n;i++) {
		c[k++] = a[i] ; }
	for (int i=0;i<m;i++)	{
		c[h++]= b[i] ;
	}
	cout<<"tong hai da thuc la: " ;
	lamgondathuc(c, n+m) ;
}

void hieu2dathuc (dathuc a[] ,int n ,dathuc b[] , int m) {
	dathuc d[m+n] ;
	int k =0, h=n,p=n;
	for (int i=0;i<n;i++) {
		d[k++] = a[i] ;	
	}
	for (int i=0 ; i<m;i++) {
		d[h++].heso=b[i].heso * (-1) ;
		d[p++].mux=b[i].mux ; 
	} 
	cout<<"hieu hai da thuc la ";
	lamgondathuc(d, n+m) ; 
}

dathuc tich2donthuc(dathuc a, dathuc b) {
    dathuc tich;
    tich.heso = a.heso * b.heso;
    tich.mux = a.mux + b.mux;
    return tich ;
}

void tichhaidathuc (dathuc a[],int n, dathuc b[], int m) {
	dathuc c[m*n] ;
	int k=0;
	for (int i=0 ;i<n ;i++) {
		for (int j=0;j<m; j++) {
			c[k++]= tich2donthuc(a[i], b[j]) ;
		}
	}
	cout<<"tich hai da thuc la: ";
	lamgondathuc(c, n*m) ;
	 
}
dathuc daohamcap1(dathuc a) {
    a.heso = a.heso * (a.mux);
    a.mux = a.mux - 1;
    return a;
}
void daohambac1dathuc(dathuc a[] ,int n) {
	dathuc c[n] ;
	for (int i =0;i<n;i++) {
		c[i] =daohamcap1(a[i]) ;
	}
	cout<<"dao ham cap 1 cua da thuc la:" ;
	xuat(c, n) ;
}

dathuc daohambacKcuadonthuc(dathuc a, int k ) {
    for (int i = 1; i <= k; i++) {
        a.heso = a.heso * (a.mux);
        a.mux = a.mux - 1;
        if (a.mux == -1) {
            a.heso = 0;
            a.mux = 0;
            break;
        }
    }
    return a;
}

void daohambacKdathuc(dathuc a[] , int n, int &k) {
	cout<<"dao ham bac k cua da thuc" ;
	cin>>k;
	dathuc c[n] ;
	for (int i=0 ;i<n;i++) {
		c[i] = daohambacKcuadonthuc(a[i],k) ;
	}
	xuat(c , n) ;
}

int tinhgiatritaiXcuadathuc (dathuc a[] , int n) {
	int x , value =0 ;
	cout<<"nhap x = " ;
	cin>>x;
	for (int i =0;i<n;i++) {
		value += a[i].heso * pow(x, a[i].mux);
    }
    return value;
}
int main() {
	dathuc a[max] , b[max] ;
	int n, m, k;
	nhap(a, n) ;
	xuat(a, n) ; cout<<endl ;
	nhap (b, m) ; xuat(b, m) ; cout<<endl ;
//	tong2dathuc(a , n, b ,m) ;
//	cout<<endl;
//	hieu2dathuc(a,n,b,m) ;
//	cout<<endl ;
//	tichhaidathuc(a,n,b,m) ;
//	daohambacKdathuc(a , n,k) ;
	cout<<tinhgiatritaiXcuadathuc(a , n) ;
}
