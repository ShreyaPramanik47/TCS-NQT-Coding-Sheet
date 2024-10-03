// Calculate Sum of the Elements of the Array
#include <bits/stdc++.h>
using namespace std;
int main(){
       int n=6;
    int arr[n]= {2,5,7,9,10};
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout <<sum;

    return 0;
}