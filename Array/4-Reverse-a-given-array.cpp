#include <bits/stdc++.h>
using namespace std;
int revrsearray(int arr[], int n){
    int s=0, e=n-1;
    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    for(int i=0; i<n; i++){
        cout << arr[i]<<" ";
    }
}
int main(){
    int arr[5]= {2,6,1,4,9};
     revrsearray(arr,5);

    return 0;
}