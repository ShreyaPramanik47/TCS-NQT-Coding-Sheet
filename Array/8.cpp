// Rotate array by K elements : Block Swap Algorithm

#include <bits/stdc++.h>
using namespace std;
int rotateArray(int arr[], int s, int e){
    while(s<=e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     k=k%n;
    rotateArray(arr,0,n-k-2);
    rotateArray(arr, n-k-1 , n-1);
    rotateArray(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)