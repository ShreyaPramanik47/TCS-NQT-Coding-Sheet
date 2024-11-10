// Finding Equilibrium index in an array

#include <bits/stdc++.h>
using namespace std;
int result(int arr[], int n){
    int totalSum=0;
    for(int i=0; i<n; i++){
        totalSum+=arr[i];
    }
    int leftSum=totalSum;
    int rightSum=0;
    for(int i=0; i<n; i++){
        leftSum-=arr[i];
        if(rightSum==leftSum){
            return i;
        }
        rightSum+=arr[i];
    }
    return -1;
}
int main(){
    int arr[]={2,3,-1,8,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<result(arr,n);
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)