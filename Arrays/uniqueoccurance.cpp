   #include<iostream>
#include<vector>
#include<unordered_map>
using namespace std; 
    bool uniqueOccurrences(vector<int>& arr) {
 unordered_map<int,int>freq;
 for(auto x:arr){
     freq[x]++;
 }
unordered_set<int>s;
for(auto x:freq){
    s.insert(x.second);
}
return freq.size()==s.size();
    }
    int main(){
    vector<int> arr = {1, 2, 3, 1, 3, 3, 4, 4, 4, 4};
    cout << uniqueOccurrences(arr);
}