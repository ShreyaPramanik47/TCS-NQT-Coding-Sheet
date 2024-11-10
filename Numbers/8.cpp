// Check weather a given number is positive or negative
#include <bits/stdc++.h>
using namespace std;
bool ifPos(int n){
    if(n>=0)return true;
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    bool ans = ifPos(n);
    if(ans){
        cout<<"Positive";
    }
    else{
        cout<<"neg";
    }
    return 0;
}

// * Time complexity: O(1)
// * Space Complexity: O(1)

// * We can also do it by right shifting:
// a = 0000 0000 0000 0000 0000 0000 0000 0101 = 5
// b = 1111 1111 1111 1111 1111 1111 1111 1010 = -6

// a>>31 
// a= 0000 0000 0000 0000 0000 0000 0000 0000 = 0

// b>>31
// b= 1111 1111 1111 1111 1111 1111 1111 1111 = -1

// Approach:
// Right Shift n by 31.
// If we get 0 then n is positive.
// If we get -1 then n is negative.