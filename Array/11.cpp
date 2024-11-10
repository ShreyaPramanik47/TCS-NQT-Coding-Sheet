//* Remove duplicates from a sorted array
// Example 1:
// Input:
//  arr[1,1,2,2,2,3,3]

// Output:
//  arr[1,2,3,_,_,_,_]

#include <bits/stdc++.h>
using namespace std;
void removeDuplicate(int arr[],int n){
    int i=0;
    int j=1;
    while(j<n){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
        j++;
    }
    for(int k=0; k<=i; k++){
        cout<<arr[k]<<" ";
    }
}
int main(){
    int arr[100]={1,1,2,2,2,3,3,3,4,4,5,6,7,8};
    removeDuplicate(arr,14);
}
// Time Complexity: O(N)

// Space Complexity: O(1)