// LCM of two numbers
#include <bits/stdc++.h>
using namespace std;
int gcd(int n, int m){
    for(int i=min(m,n); i>=0; i--){
        if(n%i==0 && m%i==0)return i;
    }
}
int main(){
    int n=4, m=8;
    gcd(n,m);
    int lcm= (n*m)/gcd(n,m);
    cout<<lcm;
    return 0;
}

// Time Complexity: O(N).
// Space Complexity: O(1).