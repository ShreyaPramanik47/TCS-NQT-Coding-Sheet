// Check if a number is a strong number or not
#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n<=1)return 1;
    return n*fact(n-1);
}
int main(){
    int n=145;
    int num=n;
    int ans=0;
    while(num!=0){
        int digit=num%10;
        ans+=fact(digit);
        num=num/10;
    }
    if(ans==n)cout<<"Yes";
    else{
        cout<<"No";
    }

    return 0;
}

// Time Complexity: O( N * M)
// Space Complexity: O(1)