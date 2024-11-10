// Average of all elements in an array
#include <bits/stdc++.h>
using namespace std;
void average(int arr[], int n){
    float sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    float avg= sum/n;
    cout<<avg;
}
int main(){
    int arr[6]={1,2,1,1,5,1};
    average(arr,6);
    return 0;
}