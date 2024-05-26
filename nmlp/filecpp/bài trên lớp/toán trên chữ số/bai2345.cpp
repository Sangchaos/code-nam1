#include<iostream>
using namespace std;
int main(){
    int n;
    int demchan=0;
    int demle=0;
    int tongchan=0;
    int tongle=0;
    cout<<"nhap n = ";
    cin>>n;
    while(n>0){
    cout<<n%10;
      if (n%2==0)
      {
            demchan++;
            tongchan+= (n%10);
            }
      else {
        demle++;
        tongle+=(n%10);
      }
          n=n/10; 
                
    }
   // cout<<demchan<<" "<<tongchan<<endl<<demle<<" "<<tongle;
    return 0;
}