#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void  averagesum(int arr[],int n){
    int sum=0;
  
for(int i=0;i<n;i++){
 sum=sum+arr[i];
}
int avg=sum/n;
cout<<avg;
}  

int main(){
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  averagesum(arr,n);
}