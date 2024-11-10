// Replace each element of the array by its rank in the array

#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
void replace(int arr[], int n){
    int brr[n];
    for(int i=0; i<n; i++){
        brr[i]=arr[i];
    }
    sort(brr, brr+n);
    map<int,int>mp;
    int temp=1;
    for(int i=0; i<n; i++){
       if(mp[brr[i]]==0){
          mp[brr[i]]=temp;
          temp++;
       } 
    }
    for(int i=0; i<n; i++){
       cout<< mp[arr[i]]<<" ";
    }
}
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   replace(arr,n);
    return 0;
}