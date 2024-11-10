// Remove duplicates from unsorted array

#include <bits/stdc++.h>
using namespace std;
void removeDuplicate(int arr[], int n){
    unordered_map<int, int>mp;
    // for(int i=0; i<n; i++){
    //     mp[arr[i]]++;
    // }
    // for(auto it:mp){
    //     cout<<it.first<<" ";
    // }

    for(int i=0; i<n; i++){
        if(mp.find(arr[i])==mp.end()){
            cout<<arr[i]<<" ";
        }
        mp[arr[i]]++;
    }
}
int main(){
    int arr[100]={2,3,1,9,3,1,3,9};
    removeDuplicate(arr,8);
}

// if normal map is used then : 
// t.c: O(nlogn);
// s.c: O(n);

// for unordered map (good):
// Average Time Complexity:O(n);
// Worst-case Time Complexity:O(n^2);
// S.c: O(n);