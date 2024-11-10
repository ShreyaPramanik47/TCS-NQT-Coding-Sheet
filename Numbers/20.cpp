// Factors of a Given Number
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    // for(int i=1; i<=n; i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    // }
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            if(n/i==i){
                cout<<i<<" ";
            }
            else{
                cout<<i <<" "<<n/i<<" ";
            }
        }
    }
}

// Time Complexity: O(N)
// for 2nd approach: O(sqrt(N))

// Space Complexity: O(1)