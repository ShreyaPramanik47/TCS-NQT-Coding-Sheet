// Find all repeating elements in an array
#include <bits/stdc++.h>
using namespace std;
void findRepeating(int arr[], int n){
    map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        if(it.second>1){
            cout<<it.first<<" ";
        }
    }
}
int main(){
    int arr[]={1,1,2,3,4,4,5,2,7,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    findRepeating(arr,n);
    return 0;
}