#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int firstrep(int arr[],int n){
    unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
for(int i=0;i<n;i++)
       if(map[arr[i]] >1)
       return i+1;
       return -1;
    
}
int main(){
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<< firstrep(arr,n);
}