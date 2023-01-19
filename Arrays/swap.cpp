
#include<bits/stdc++.h>
using namespace std;
void swapalternate(int arr[],int n){
  int i=0;
  while(i+1<n){
      swap(arr[i],arr[i+1]);
      i=i+2;
  }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
  
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapalternate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}