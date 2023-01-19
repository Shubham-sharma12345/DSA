#include<iostream>
using namespace std;

    int minSwap(int arr[], int n, int k) {
       int cnt=0;
       for(int i=0;i<n;i++){
           if(arr[i] <=k)
           cnt++;
       }
       int bad=0;
        for(int i=0;i<cnt;i++){
           if(arr[i] > k)
           bad++;
       }
       int ans=bad;
       for(int i=0,j=cnt;j<n;i++,j++){
           if(arr[i]>k)
           bad--;
            if(arr[j]>k)
           bad++;
           ans=min(ans,bad);
       }
       return ans;
    }
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    cout<<minSwap(arr,n,k);
}