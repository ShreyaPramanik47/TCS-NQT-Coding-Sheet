// Find all Palindrome Numbers in a given range
#include <bits/stdc++.h>
using namespace std;
bool palindrome(int n){
    int num=n;
    int ans=0;
    while(num!=0){
        int digit=num%10;
        ans=ans*10+digit;
        num=num/10;
    }
    if(ans==n)return true;
    else{
        return false;
    }
}
int main(){
    int min, max;
    cin>>min>>max;
    for(int i=min; i<=max; i++){
        if(palindrome(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}

// Time Complexity: O(N)
// Space Complexity: O(1)