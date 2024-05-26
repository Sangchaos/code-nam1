#include <iostream>
using namespace std ;
struct hoc_sinh {
    hoc_sinh (string ten  , float diem) {
     }
    string ten ;
    float diem ;
} ;
int main() {
    /*int n ;
    cout<<"nhap n = ";
    cin>>n; */
   
    hoc_sinh lop[4] ;
    hoc_sinh *tro= nullptr;
	for(tro= lop; tro<lop+4;tro++) {
	cin>>(*tro).diem<< endl;
    }
    
    
    /*for (int i=1; i<=n; i++){
        for (int j=0; j<n; j++) {
            if (arr[j] >arr[i]) {
                swap (arr[j], arr[i]) ;
            }
        }
    } */
  
    return 0;
}