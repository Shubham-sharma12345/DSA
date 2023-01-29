#include<bits/stdc++.h>
class Solution{
    public:
   
    int kthSmallest(int arr[], int l, int r, int k) {
        
        
        priority_queue<int> maxHeap;
        for(int i=l;i<=r;i++){
            maxHeap.push(arr[i]);
            if(maxHeap.size() > k){
                maxHeap.pop();
            }
          
        }
        return maxHeap.top();
    }    
};
// ham sorting bhi use kar sakte hai 
