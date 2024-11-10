// Find the median of the given array
// *Remember the rule to find meidan:
// if(n%2==0){
//     ind1 = (n/2)-1;
//     ind2= (n/2);
//     meidan = double(arr[ind1]+arr[ind2])/2;
// }
#include <bits/stdc++.h>
using namespace std;
void findMedian(int arr[], int n){
    sort(arr, arr+n);
    if(n%2==0){
        int ind1=(n/2)-1;
        int ind2= (n/2);
        cout<<double(arr[ind1]+arr[ind2])/2;
    }
    else{
        cout<<arr[n/2];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    findMedian(arr,n);

    return 0;
}

// Time Complexity: O(N*log N), Sorting of array
// Space Complexity: O(1)