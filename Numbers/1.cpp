// Check if a number is Palindrome or Not
#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(int n){
    int num=n;
    int ans=0;
    while(num!=0){
        int digit=num%10;
        ans=ans*10+digit;
        num=num/10;
    }
    // cout<<ans;
    if(n==ans)return true;
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    bool ans=checkPalindrome(n);
    if(ans)cout<<"Palindrome";
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}

// Time Complexity: O(log10N + 1) where N is the input number. The time complexity is determined by the number of digits in the input integer N. In the worst case when N is a multiple of 10 the number of digits in N is log10 N + 1.