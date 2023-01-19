
#include<bits/stdc++.h>
using namespace std;
  int getPairsCount(int arr[], int n, int k) {
    int ans=0;
       map<int,int> freq;
       for(int i=0;i<n;i++){
           freq[arr[i]]++;
       }
       for(int i=0;i<n;i++){
           freq[arr[i]]--;
           if(k-arr[i]>0){
           ans=ans+freq[k-arr[i]];
               
           }
       }
       return ans;
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    getPairsCount(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}