#include <bits/stdc++.h>
using namespace std;
int findsmallest(int arr[], int n){
    int smallest=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    return smallest;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   cout<< findsmallest(arr,n);
    

    return 0;
}