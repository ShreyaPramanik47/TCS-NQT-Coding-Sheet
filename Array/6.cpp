// Rearrange array in increasing-decreasing order
#include <bits/stdc++.h>
using namespace std;
// int increasing(int arr[], int n){

// }
// int decreasing(int arr[], int n){

// }
int main(){
    int n=6;
    int arr[n]= {2,5,7,9,10};
    // increasing(arr,n);
    // decreasing(arr,n);
    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
    for(int i=n-1; i>=0; i--){
        cout << arr[i]<<" ";
    }


    return 0;
}