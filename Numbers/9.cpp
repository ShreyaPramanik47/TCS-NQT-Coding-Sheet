// Sum of first N natural numbers

#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    int ans=0;
    for(int i=1; i<=n; i++){
        ans+=i;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
   cout<< sum(n);
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)