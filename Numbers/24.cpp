// Find GCD of two numbers
#include <bits/stdc++.h>
using namespace std;
int findGcd(int n, int m){
for(int i=min(n,m); i>=0; i--){
        if(n%i==0 && m%i==0){
            return i;
        }
    }
}
int main(){
    int n=20;
    int m=25;
    int gcd= findGcd(n,m);
    cout<<gcd;
    return 0;
}

// Time Complexity: O(min(N1, N2))