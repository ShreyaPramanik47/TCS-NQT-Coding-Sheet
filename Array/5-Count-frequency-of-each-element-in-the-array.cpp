#include <bits/stdc++.h>
using namespace std;
int cntfreq(int arr[], int n){
    // unordered_map<int, int>mpp;
    // for(int i=0; i<n; i++){
    //    mpp[arr[i]]++;
    // }
    // for(auto it:mpp){
    //     cout<<it.first <<" "<< it.second<<endl;
    // }

// * ANOTHER APPROACH -->
    vector<bool>track(n,false);
    for(int i=0; i<n; i++){
        if(track[i]==true)continue;
        int cnt=1;
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
             track[j]=true;
             cnt++;
            }
        }
        cout<< arr[i] <<"-" << cnt<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cntfreq(arr,n);

    return 0;
}