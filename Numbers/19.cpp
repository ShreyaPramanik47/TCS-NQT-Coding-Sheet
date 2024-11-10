// Power of a number
#include <bits/stdc++.h>
using namespace std;
int power(int n, int m){
    if(m==0)return 1;
    return n*power(n,m-1);
}
int main(){
    int n;
    int m;
    cin>>n>>m;
    // int ans=1;
    cout<<power(n,m);
    // for(int i=1; i<=m; i++){
    //     ans*=n;
    //     // cout<<ans<<endl;
    // }
    // cout<<ans;
    return 0;
}

// Complexity Analysis

// Time Complexity: O(N)
// Space Complexity : O(1)