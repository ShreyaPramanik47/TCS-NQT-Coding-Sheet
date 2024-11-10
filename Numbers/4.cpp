// Prime numbers in a given range
#include <bits/stdc++.h>
using namespace std;
bool checkPrime(int m){
    if(m==1)return false;
    for(int i=2; i<sqrt(m); i++){
        if(m%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int min,max;
    cin>>min>>max;
    for(int i=min; i<=max; i++){
        if(checkPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}

// Time Complexity: O(N^2) Since two nested loops are used.
// Space Complexity: O(1) 