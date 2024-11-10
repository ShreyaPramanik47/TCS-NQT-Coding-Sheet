// Maximum Product Subarray in an Array

#include <bits/stdc++.h>
using namespace std;
int result(int arr[], int n){
    // int pre=1, suff=1;
    // int ans=INT_MIN;
    // for(int i=0;i<n; i++){
    //     if(pre==0)pre=1;
    //     if(suff==0)suff=1;
    //     pre*=arr[i];
    //     suff*=arr[n-i-1];
    //     ans=max(ans, max(pre, suff));
    // }
    // return ans;

    // *Brute force:
    

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   cout<< result(arr,n);
    return 0;
}

// T.C = O(n)
// Reason: We are using a single loop that runs for N times.
// S.c= O(1)