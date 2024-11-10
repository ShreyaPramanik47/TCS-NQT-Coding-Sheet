// Sort Elements of an Array by Frequency
#include <bits/stdc++.h>
using namespace std;
int sortElement(int arr[], int n){
    map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    vector<int>freq;
    for(auto it:mp){
        freq.push_back(it.second);
    }
    sort(freq.begin(), freq.end());
    for(int i=0; i<freq.size(); i++){
        cout<<mp[freq[i]]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,2,4,3,1,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    sortElement(arr,n);
    return 0;
}