#include <iostream>
#include <algorithm>
using namespace std ;

struct Student {
    string name ;
    int age ;
    float score ;
    void nhap_thong_tin() {
        cin>> name>>age>>score ;
    }
   
    
};
 bool sosanh (const Student& a , const Student& b) {
        return a.score > b.score ;}
int main() {
    int n;
    cout<<"nhap n = ";
    cin>>n;
    Student *arr = new Student [n] ;
    for (int i=0; i<n;i++) {
        arr[i].nhap_thong_tin() ;
    }
    for (int i=0; i<n;i++) {
        cout<<arr[i].name<<" "<<arr[i].age<<" "<<arr[i].score<<endl ;
    }
    // hàm sap xep mảng giảm dần
    sort (arr , arr+n , sosanh) ;
    for (int i =0 ; i<min (3,n); i++) {
        cout<<arr[i].name<<" "<<arr[i].age<<" "<<arr[i].score<<endl ;
    }

    delete[]arr ;
    return 0;

   
}