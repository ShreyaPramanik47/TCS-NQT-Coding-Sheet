// Greatest of two numbers
#include <bits/stdc++.h>
using namespace std;
float greatest(float n, float m){
    if(n>m)return n;
    else{
        return m;
    }
}
int main(){
    float n,m;
    cin>>n>>m;
   cout<< greatest(n,m);
    return 0;
}
// Time Complexity: O(1).
// Space Complexity: O(1).