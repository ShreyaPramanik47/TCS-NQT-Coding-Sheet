#include <iostream>
using namespace std;
void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void reverseArray(int arr[], int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
    printArr(arr,n);
}
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   reverseArray(arr,n);

    return 0;
}