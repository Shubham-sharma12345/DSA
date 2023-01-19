// count the frequency
// Example 1:
// Input: arr[] = {10,5,10,15,10,5};
// Output: 10  3
// 	 5  2
//         15  1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void coutfreq(int arr[],int n){
    unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
 
 
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
    
}
int main(){
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    coutfreq(arr,n);
}