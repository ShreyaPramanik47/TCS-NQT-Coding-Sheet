// Check if Array is a subset of another array or not

#include <bits/stdc++.h>
using namespace std;
bool result(int arr1[], int arr2[], int n , int m){
    if(n>m)return false;
    // for(int i=0; i<n; i++){
    //     bool present = false;
    //     for(int j=0; j<m; j++){
    //         if(arr1[i]==arr2[j]){
    //             present=true;
    //         break;
    //         }
    //     }
    //     if(present==false)return false;
    // }
    // return true;
    unordered_map<int,int>mp;
    for(int i=0; i<m; i++){
        mp[arr2[i]]++;
    }
    for(int i=0; i<n; i++){
        if(mp.find(arr1[i])!=mp.end())continue;
        else{
            return false;
        }
    }
    return true;
}
int main(){
    int arr1[]={11,12,13,15,16};
	int arr2[]={11,12,13,15,16,18};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
   bool ans= result(arr1, arr2, n, m);
    if(ans)cout<<"subset";
    else{
        cout<<"not subset";
    }
    return 0;
}

// using map:
// * The total time complexity is the sum of the two steps: O(m) for creating the map and O(n) for checking the elements of arr1 in the map.
// Time Complexity: O(m + n)
// Space Complexity: O(m)